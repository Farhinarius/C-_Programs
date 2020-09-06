// Program name.cpp or task;
// options;

#include <iostream>
using namespace std;

///////////////////////////
class Triple
{
   private:
   public:
	   int x,y,z;
	   int& triple_list()
	   {
		   return x*y*z;
	   }

};

void main()
{
	Triple cube;
	cout << "\n Enter new a,b,c values: " << endl;
	cin >> cube.x; cin >> cube.y; cin >> cube.z;  
	cout << "\n V: " << cube.triple_list << endl;
}
