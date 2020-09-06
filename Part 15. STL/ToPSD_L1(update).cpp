// TRPS_L1
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// STRUCTURE
struct Student
{
    size_t id;
    size_t group_id;
    string fullname;
    tm date_of_birth;           // struct, that contain time
};

// MERGE SEORT FUNCTION
void mergeSort(vector<Student>& a, size_t start, size_t end)
{
    if (end - start < 2)
        return;
    if (end - start == 2)
    {
        if (a[start].id > a[start + 1].id)
            swap(a[start], a[start + 1]);
        return;
    }

    mergeSort(a, start, start + (end - start) / 2);  // pass (start) and (end) to the recursive function 
    mergeSort(a, start + (end - start) / 2, end);

    vector<Student> b;
    size_t b1 = start;
    size_t e1 = start + (end - start) / 2;
    size_t b2 = e1;
    while (b.size() < end - start)
    {
        if (b1 >= e1 || (b2 < end && a[b2].id <= a[b1].id))
        {
            b.push_back(a[b2]);
            ++b2;
        }
        else
        {
            b.push_back(a[b1]);
            ++b1;
        }
    }

    cout << endl;
    cout << "This if function mergeSort(" << start << ", " << end << ")" << endl;
    for (size_t i = start; i < end; ++i)
    {
        cout << b[i - start].id << " ";
        a[i] = b[i - start];
    }
}

// BINARY SEARCH FUNCTION
int binarySearch(vector<Student>& a, int key, size_t start, size_t end)
{
    size_t mid = (start + end) / 2;
    if (key < a[mid].id)
    {
        end = mid;
    }
    else if (key > a[mid].id)
    {
        start = mid;
    }
    else if (key == a[mid].id)
    {
        return mid;
    }
    binarySearch(a, key, start, end);
}

// ADDRESS SEARCH FUNCTION
int addressSearch(vector<Student>& a, string s_name)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (s_name == a[i].fullname)
        {
            return i;
        }
    }
}


int addressSearch(vector<Student>& a, tm date_of_birth)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (date_of_birth.tm_year == a[i].date_of_birth.tm_year && date_of_birth.tm_mon == a[i].date_of_birth.tm_mon && date_of_birth.tm_mday == a[i].date_of_birth.tm_mday)
        {
            return i;
        }
    }
} 

// MARKING DELETE FUNCTION for ARRAY
void markingDelete(vector<Student>& a, vector<int>& del_id_buffer, bool trigger)
{
    if (trigger)           //(del_id_buffer.size() <= a.size() / 2)
    {
        cout << "\nDeleting elements: ";
        for (int i = a.size() - 1; i >= 0; i--)
        {
            for (size_t j = 0; j < del_id_buffer.size(); j++)
            {
                if (del_id_buffer[j] == a[i].id)
                {
                    cout << a[i].id << "; ";
                    a.erase(a.begin() + i);
                }
            }
        }
        cout << endl;
    }
}


int main()
{
    vector<Student> v;
    Student s;
    int ans;
    size_t counter = 0;
    vector<int> arr_del_id;
    bool trigger = false; 
    
    ///////////////////////////////////////////////////////////////////////////////////
    // INPUT DATA
    do
    {
        s.id = counter;
        cout << "\nEnter group id of student: "; cin >> s.group_id;
        cout << "Enter student name: "; cin >> s.fullname;
        s.date_of_birth.tm_year = rand() % 3 + 1999;
        s.date_of_birth.tm_mon = rand() % 12;
        s.date_of_birth.tm_mday = rand() % 30;
        
        v.push_back(s);
        counter++;
        cout << "do you want to continue? \n yes - 1 \n no  - 0 \n"; cin >> ans;
    } while (ans != 0);



    // SHUFFLE
    for (size_t i = 0; i < v.size(); ++i)
        swap(v[i], v[rand() % (v.size() - i) + i]); // last index for incrementing value

    // OUTPUT
    cout << "\n-----------------------------------------\n";
    cout << "Output shuffled structure: " << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << "\nNumber of student: " << v[i].id << endl;
        cout << "Group id of student: " << v[i].group_id << endl;
        cout << "Student name: " << v[i].fullname << endl;
        cout << "Date of Birth: " << v[i].date_of_birth.tm_mday << "/" << v[i].date_of_birth.tm_mon << "/" << v[i].date_of_birth.tm_year << endl;
    }
    cout << endl;
    markingDelete(v, arr_del_id = { 0 }, trigger);

    ///////////////////////////////////////////////////////////////////////////////////
    //------ MERGE SORT ------//
    size_t start_time = clock();
    //------------------------//
    mergeSort(v, 0, v.size());
    trigger = true;           // after sorting we can delete elements from array
    //------------------------//
    size_t end_time = clock();
    //------------------------//
    size_t search_time = end_time - start_time;

    cout << "\n-----------------------------------------\n";
    cout << "Sorted array of structures: \n";

    // OUTPUT
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << "\nNumber of student: " << v[i].id << endl;
        cout << "Group id of student: " << v[i].group_id << endl;
        cout << "Student name: " << v[i].fullname << endl;
        cout << "Date of Birth: " << v[i].date_of_birth.tm_mday << "/" << v[i].date_of_birth.tm_mon << "/" << v[i].date_of_birth.tm_year << endl;
    }

    cout << "\nMerge algorithm runtime: " << search_time << " mS" << endl;
    cout << endl;
    cout << "\n-----------------------------------------\n";
    ///////////////////////////////////////////////////////////////////////////////////
    //----- BINARY SEARCH -----//
    start_time = clock();
    //------------------------//
    int desired_value = binarySearch(v, v[2].id, 0, v.size()); // 
    //------------------------//
    end_time = clock();
    //------------------------//
    search_time = end_time - start_time;

    // OUTPUT
    cout << "Student searching id: " << desired_value << endl;
    cout << "Group id of student: " << v[desired_value].group_id << endl;
    cout << "Student name: " << v[desired_value].fullname << endl;
    cout << "Date of Birth: " << v[desired_value].date_of_birth.tm_mday << "/" << v[desired_value].date_of_birth.tm_mon << "/" << v[desired_value].date_of_birth.tm_year << endl;

    cout << "\nBinary search algorithm runtime: " << search_time << " mS" << endl;
    cout << endl;
    cout << "\n-----------------------------------------\n";
    ///////////////////////////////////////////////////////////////////////////////////
   //----- ADDRESS SEARCH -----//
    start_time = clock();
    //------------------------//
    desired_value = addressSearch(v, "f");       // overload function (date or fullname in argument)
    //------------------------//
    end_time = clock();
    //------------------------//
    search_time = end_time - start_time;
    // OUTPUT

    cout << "Student searching id: " << desired_value << endl;
    cout << "Group id of student: " << v[desired_value].group_id << endl;
    cout << "Student name: " << v[desired_value].fullname << endl;      // must be f
    cout << "Date of Birth: " << v[desired_value].date_of_birth.tm_mday << "/" << v[desired_value].date_of_birth.tm_mon << "/" << v[desired_value].date_of_birth.tm_year << endl;


    cout << "\nAddress search algorithm runtime: " << search_time << " mS" << endl;
    cout << endl;
    cout << "\n-----------------------------------------\n";

    ///////////////////////////////////////////////////////////////////////////////////
    //------ MARKING DELETE ------//
    do
    {
        cout << "\nEnter id, that you want to delete: ";
        int* del_id = new int;
        cin >> *del_id;
        arr_del_id.push_back(*del_id);
        delete del_id;

        cout << "Do you want to continue ?\n yes - 1 \n no  - 0 \n"; cin >> ans;
    } while (ans != 0);

    //----- marking function-----//
    start_time = clock();
    //------------------------//
    markingDelete(v, arr_del_id, trigger);
    arr_del_id.clear();
    arr_del_id.push_back(4);
    markingDelete(v, arr_del_id, trigger);
    //------------------------//
    end_time = clock();
    //------------------------//
    search_time = end_time - start_time;
    // OUTPUT
    cout << "\nDelete By Marking algorithm runtime: " << search_time << " mS" << endl;

    // OUTPUT
    cout << "\nVector with deleted elements: " << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << "\nNumber of student: " << v[i].id << endl;
        cout << "Group id of student: " << v[i].group_id << endl;
        cout << "Student name: " << v[i].fullname << endl;
        cout << "Date of Birth: " << v[i].date_of_birth.tm_mday << "/" << v[i].date_of_birth.tm_mon << "/" << v[i].date_of_birth.tm_year << endl;
    }

    cout << "\n-----------------------------------------\n";
    ///////////////////////////////////////////////////////////////////////////////////
    cout << "\nProgram run time: " << clock() / 1000.0 << endl;
    return 0;
}

/*
    for (int i = 0; i < 8; ++i)
        v.push_back(i);

    for (size_t i = 0; i < v.size(); ++i)
        swap(v[i], v[rand() % (v.size() - i) + i]); // last index for incrementing  value

    for (auto i : v)
        cout << i << " ";
*/

/*
    for (auto i : v)
        cout << i << " ";
 */