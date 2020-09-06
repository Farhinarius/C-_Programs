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
	Product() : name(""),count(0),value(0),pur_price(0)        // constructor
	{
		// name = "";                   // по сути своей то же самое, только —¬≈–’” через список инициализации
		// count = 0;
		// value = 0;
		// pur_price = 0;
	};
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
		cout << "\n Percentage of implementation costs: " << value << endl;
		cout << "\n Purchase prize: " << pur_price << endl;
	}
	int value_for_shop();
};
/////////////////////////////////////////////////////



int main()
{
	/////////////////////////////////////////////////////
	char answer;
	int i = 0, j;
	string n;
	int k, p;
	int pp;
	Product product[100];
	//////////////////////////////////////////////////
	do
	{
		cout << "\n " << i + 1 << ".Enter new product information: " << endl;
		///-------------------------------------------------/// создаю новые переменные, дл€ работы с инициализирующим методом
		cout << "\n Enter name of product: "; cin >> n;  // ввожу 4 переменных основной программы
		cout << " Enter number of products: "; cin >> k; 
		cout << " Enter percentage of implementation  costs: "; cin >> p;
		cout << " Enter purchase prize: "; cin >> pp;
		product[i].init(n, k, p, pp);   // инициализирую пол€ класса, подставл€€ переменные из основной программы в объект, 
		                                // получа€ при этом готовый i-ый объект в массиве
		///--------------------------------------------------///
		
		cout << " Cost of goods for the store: " << product[i].value_for_shop() << endl;
		cout << " Do you want to enter new product (y/n)? ..."; // начать следующую интерацию?, да - увелививаем индекс на 1 и работаем со следующим объектом в массиве
		// нет, выходим из программы
		cin >> answer; cout << endl; // ввод ответа
		n = {};
		i++;   // увеличиваем индекс на 1, приступа€ к работе со следующим объектом в массиве
		cout << "/-------------------------------------------------------------------/" << endl;
	} while (answer != 'n');

	cout << "\n All products information: " << endl;
	for (j = 0; j <= i; j++)     // вывод всей информации, то есть вывод в цикле всего массива объектов
	{
		product[j].show_product_info();
	}

	return 0;
}

int Product::value_for_shop()
{
	return pur_price * (1 + (value / 100));
}