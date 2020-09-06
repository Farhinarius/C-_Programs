#include <iostream>
#include <conio.h> 
using namespace std;

struct Location
{
	float x;
	float y;
};

struct Characteristics
{
	float power;
	float speed;
	float acclr;
};

struct Car
{
	Location point;
	Characteristics set;

	Car();
	Car(float _x, float _y);
	Car(float _x, float _y, float _power, float _speed, float _acclr);

	// drive options;
	void drive_forward();
	void drive_backward();
	void drive_left();
	void drive_right();
	
	// riding key pressed
	void car_driving_input();
	
	// Modificator options;
	void incease_power(float _power);
	void increase_speed(float _speed);
	void increase_acclr(float _acclr);

	// display options;
	void display_coordinates();
	void display_characteristics();
};

// Car constructures;
Car::Car()
{
	point.x = 0;
	point.y = 0;
	set.speed = 0;
	set.acclr = 1;
	set.power = 1;
}

Car::Car(float _x, float _y)
{
	point.x = _x;
	point.y = _y;
}

Car::Car(float _x, float _y, float _power, float _speed, float _acclr)
{
	point.x = _x;
	point.y = _y;
	set.acclr = _acclr;
	set.speed = _speed;
	set.power = _power;
}

// Car driving
void Car::drive_backward()
{
	point.y -= set.speed;
}

void Car::drive_forward()
{
	point.y += set.speed;
}

void Car::drive_left()
{
	point.x -= set.speed;
}

void Car::drive_right()
{
	point.x += set.speed;
}


// display options
void Car::display_coordinates()
{
	cout << "\nYou coordinates x: " << point.x << " y: " << point.y << "\n";
}

void Car::display_characteristics()
{
	cout << "Speed: " << set.speed << endl;
	cout << "Power: " << set.power << endl;
	cout << "Accelerance: " << set.acclr << endl;
}

// Emuplate riding by key pressing
void Car::car_driving_input()
{
	char ctrl;
	cout << "Press w,a,s,d to drive: ";
	while ((ctrl = _getche()) != '\r')
		switch (ctrl)
		{
		case 'w': 
			Car::drive_forward(); 
			Car::display_coordinates();
			break;
		case 's': 
			Car::drive_backward(); 
			Car::display_coordinates();
			break;
		case 'a': 
			Car::drive_left(); 
			Car::display_coordinates();
			break;
		case 'd': 
			Car::drive_right(); 
			Car::display_coordinates();
			break;
		default: 
			cout << "Please, press w,a,s,d key for driving car...";
			break;
		}
}

int main()
{
	float x_, y_, pwr_, spd_, acclr_;
	
	// input data
	cout << "Input car data: " << endl;
	cout << "x = "; cin >> x_;
	cout << "y = "; cin >> y_;
	cout << "power = "; cin >> pwr_;
	cout << "speed = "; cin >> spd_;
	cout << "accelerance = "; cin >> acclr_;
	
	// create object
	Car Auto(x_, y_, pwr_, spd_, acclr_);
	cout << "----------------------------------------------------" << endl;
	Auto.display_coordinates();
	Auto.display_characteristics();
	cout << "----------------------------------------------------" << endl;
	
	// start driving
	Auto.car_driving_input();
	return 0;
}