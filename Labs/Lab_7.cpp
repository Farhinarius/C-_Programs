// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;
/////////////////////////////////////////////////////
class Product
{
private:
	string name; // name of product;
	int count;   // number of products;
	int value;   // percentage of implementation costs
	int pur_price; // purchase_prize;
public:
	void init(string n, int k, int p, int pp)
	{
		name = n;
		count = k;
		value = p;
		pur_price = pp;
	}
	void show_product_info()
	{
		cout << "\n Name of product: " << name << endl;
		cout << "\n Number of products: " << count << endl;
		cout << "\n Percentage of implementation costs: "<< value << endl;
		cout << "\n Purchase prize: "<< pur_price << endl;
	}
	float value_for_shop();
};
/////////////////////////////////////////////////////

int main()
{
	/////////////////////////////////////////////////////
	Product product[100];
	char answer;
	int i = 0, j;
	string n;
	int k, p;
	int pp;
	//////////////////////////////////////////////////
	do
	{
		cout << "\n " << i+1 << ".Enter new product information: " << endl; 
		///-------------------------------------------------///
		cout << "\n Enter name of product: "; cin >> n;
		cout << " Enter number of products: "; cin >> k;
		cout << " Enter percentage of implementation  costs: "; cin >> p;
		cout << " Enter purchase prize: "; cin >> pp; 
		///--------------------------------------------------///
		product[i].init(n, k, p, pp);
		cout << " Cost of goods for the store: " << product[i].value_for_shop() << endl;
		cout << " Do you want to enter new product (y/n)? ...";
			cin >> answer; cout << endl;
			n = {};
			i++;
			cout << "/-------------------------------------------------------------------/" << endl;
	} while (answer != 'n');
	
	cout << "\n All products information: " << endl;
	for (j = 0; j < i; j++)
	{
		product[j].show_product_info();
	}

	return 0;
}

float Product::value_for_shop()
{
	return pur_price * (1 + (value / 100));
}