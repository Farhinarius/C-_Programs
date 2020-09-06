#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])
{
    srand(time(0)); // автоматическая рандомизация
    for (short int i = 0; i < 100; i++) 
    {
        cout << "rand_value = " << -12 + rand() % 24 << endl;
    }
    cout << "\nruntime = " << clock() / 1000.0 << endl;
    return 0;
}