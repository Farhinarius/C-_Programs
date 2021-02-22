// Lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы
#include <iostream>
using namespace std;

// extern "C" void __cdecl IW();
int main() {
    // define variables and pointers
    char src_str[255] = "";         // source string
    char * keyword,                 // keyword string
         * res_str,                 // result dynamic string
         * str_ptr,                 // string pointer (string slider)
         * base_ptr,                // pointer to base of the string
         * next_word_ptr,           // pointer to beginning of the next word
         * cmp_wrd_ptr;             // pointer for comparison

    short int 
        res_char_counter = 0,       // result string index counter
        src_wrd_char_counter = 0,   // source word index counter
        cmp_counter = 0,            // comparison counter 
        identic_char_counter = 0,   // identic char-ers in keyword and source string word counter
        whitespace_num = 0;         // number of whitespaces

    // input variables
    cout << "Input source string: ";
    gets_s(src_str);

    // dynamic arrays definition     
    keyword = new char[255];        // get mem for word pointer     -|- array of chars (source word)
    res_str = new char[10000];      // get mem for result string    -|- array of chars (result string)

    // pointers definition
    base_ptr = src_str;             // always point to beginning of string 
    str_ptr = src_str;              // pointer slider for string src string
    cmp_wrd_ptr = src_str;          // pointer for beginning of the next word in string
    next_word_ptr = src_str;        // pointer for next source word

    //-------------------------------------------------------------------------//
    // count number of words
    while (*str_ptr != '\0')
    {
        if (*str_ptr == ' ' or *str_ptr == '\0')
        {
            ++whitespace_num;
        }
        str_ptr++;      // next char in src_string
    }
    cout << "\nNumber of words in the source string: " << whitespace_num << endl;

    // FIND IDENTIC WORDS
    str_ptr = base_ptr;     // point to beginning of string
    //for (short int i = 0; i < whitespace_num; i++)
    //{
        // DEFINE SOURCE WORD
        while (*next_word_ptr != ' ')   // while not space in copy of source string
        {
            keyword[src_wrd_char_counter++] = *next_word_ptr++; // copy char-er of src_str to source_word
        }
        keyword[src_wrd_char_counter] = '\0';      // append 'end of line' char-er to source word
        next_word_ptr++;                           // now point to the next char after space in source string ~ !!!!

        // CYCLE OF WORD COMPARISON
        while (*str_ptr != '\0')    // slider for string char-ers
        {
            while (*str_ptr != ' ') // while don't find next space -!- (get control over str_ptr)
            {
                if (keyword[cmp_counter++] == *str_ptr++)      // compare source word char-er and string pointer char-er
                {
                    identic_char_counter++;
                }
            }
            str_ptr++; // next address after space

            if (src_wrd_char_counter - identic_char_counter <= 1)
            {
                while (*cmp_wrd_ptr != ' ')       // while not 'end of the line'
                {
                    res_str[res_char_counter++] = *cmp_wrd_ptr++;   // copy part of source string to result string
                }
                res_str[res_char_counter++] = ',';   // add to result string delimitter
                res_str[res_char_counter++] = ' ';   // add to result string space
                cmp_wrd_ptr++;                       // equal to cmp_wrd_ptr = str_ptr;
            }
            else
            {
                cmp_wrd_ptr = str_ptr;
            }
            cmp_counter = 0;
            identic_char_counter = 0;   // zero the comparison counter for next word
        }
        // END OF WHILE CYCLE
        src_wrd_char_counter = 0; // zero the word char-er counter, in next iteration will be count next source word
        
        //memset(src_word, 0, 255);                 // clear array of char assembler
        keyword[0] = 0;                            // 'clear' source word      (all ok)
        res_str[res_char_counter++] = ';';          // end of line for the current comparison
        res_str[res_char_counter++] = ' ';           
       
        str_ptr = base_ptr;         // set pointer to beginning of the string for next iterations
        // cmp_wrd_ptr = base_ptr;
    //}
    res_str[res_char_counter] = '\0';

    cout << "Result: ";
    for (short int i = 0; i < strlen(res_str); i++)
    {
        cout << res_str[i];         // output value of result string
    }

    delete[] keyword;
    delete[] res_str;

    cout << endl;
	system("pause");
	return 0;
}

/*  GS Prog
	int a, b, c;
	printf("Input a and b\n");
	scanf_s("%d %d", &a, &b);
	ADD1(a, b, &c);
	printf("c=%d", c);
	return 0;
*/

/*  Kost. prog.
    char a[125] = "";
    char b[125] = "";
    cout << "Input Str1: ";
    gets_s(a);
    cout << "Input Str2: ";
    gets_s(b);
    cout << "\n";
    if (strlen(a) != strlen(b))
    {
        cout << "Uncorrect input!\n";
    }
    else {
        ADD1(a, b);  //Удаление повторяющихся символов строк
        cout << "Str1: " << a << '\n';
        cout << "Str2: " << b << '\n';
    }
    return 0;
    */

/*  without controlling str in new 'while'
            if (*str_ptr == ' ') // find space
            {
                while (*str_ptr != ' ') // while don't find next space
                {
                    if (*src_word_ptr++ == *str_ptr++)
                    {
                        identic_char_counter++;
                    }
                }
            }
*/