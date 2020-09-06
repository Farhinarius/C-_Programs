//Hanoi.cpp
#include <iostream>
#include "pch.h"
using namespace std;

////////////////////////////////////////////////////////////////////

void hanoi_towers(int quantity, int from, int to, int buf_peg) // quatity - number of rings, from - staring position of rings(1-3), 
                                                               // to - the ending position of tings(1-3), buf_peg (1-3)
{  
	if (quantity != 0) 
	{
		hanoi_towers(quantity - 1, from, buf_peg, to);
		cout << from << " -> " << to << endl;
		hanoi_towers(quantity - 1, buf_peg, to < from);
	}

	int main() 
	{
		setlocale(LC_ALL, "rus")
		int start_peg, destination_peg, buffer_peg, plate_quant;
		cout << " Number of 1-st stolb:  " << endl;
		cin >> start_peg;
		cout << " Number of last stolb:  " << endl;
		cin >> distination_peg;
		cout << " Number of cont stolb; " << endl;
		cin >> buffer_peg;
		cout << " Number of disks:  " << endl;
		cin >> plane_quant0;
		hanoi_towers(plate_quant, start_peg, destination_peg, buffer_peg);
		return 0;
	}
	
}