// My_first_game.cpp
// too shablon 

#include <iostream> 
#include <process.h>
#include <conio.h> // _getche()
using namespace std;

int main()
{
	int x = 0, y = 0;
	char dir = 'a';
	cout << " Input your starting point: " << endl;
	cin >> x >> y;
	while (dir != '\r') {
		cout << "\n Input your direction (a,s,d,w):   ";
		dir = _getche();
		switch (dir) {
		case 'w': y++; break;
		case 's': y--; break;
		case 'd': x++; break;
		case 'a': x--; break;
		case '\r': cout << "\n The End of the Game, Exit... "; break;
		default: cout << "\n Error, Try one more time:  "; 
		}
		if (dir != '\r') { cout << "\n This is you coordinates: " << x << " , " << y; }
		cout << endl;
		if (x == 10 and y == 15) {
			cout << "\n You find the treasure! \n"; exit(0);
		}
		if (!(x % 3) and !(y % 3)) {
			cout << "\n This is trap, you are died! \n";
			exit(0);
		}
	}
	return 0;
}