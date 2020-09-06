// Card_game.cpp
// options;

#include <iostream>
using namespace std;

enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
private:
	int number;
	Suit suit;
public:
	Card()
	{};
	Card(int n, Suit s) : number(n), suit(s)
	{};
	void display_out();
	bool Equal(Card);
};

void Card::display_out()
{
	if (number >= 2 && number <= 10)
		cout << number;
	else 
		switch (number)
		{
		case jack: cout << "Jack" << endl; break;
		case queen: cout << "Queen" << endl; break;
		case king: cout << "King" << endl; break;
		case ace: cout << "Ace" << endl; break;
		}
	switch (suit)
	{
	case clubs: cout << "Clubs"; break;
	case diamonds: cout << "Diamonds"; break; 
	case hearts: cout << "Hearts"; break;
	case spades: cout << "Spades"; break;
	}
}
//////////////////////////////////////////////////////////
bool Card::Equal(Card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}


void main()
{
	Card temp, chosen, prize;
	int position;
	
	Card card1(7, clubs); // определение и инициализация card1
	cout << "\nCard 1: ";
	card1.display_out(); // вывод card1
	
	Card card2(jack, hearts); // определение и инициализация card2
	cout << "\nCard 2: ";
	card2.display_out(); // вывод card2
	
	Card card3(ace, spades); // определение и инициализация card3
	cout << "\nCard 3: ";
	card3.display_out(); // вывод card3
	
	prize = card3; // карту prize будет необходимо угадать
	
	cout << "\nChange 1-st and 3-rd card......";
	temp = card3; card3 = card1; card1 = temp;
	
	cout << "\nChange 2-nt and 3-rd card...";
	temp = card3; card3 = card2; card2 = temp;
	
	cout << "\nChange 1-st and 2-nd card...";
	temp = card2; card2 = card1; card1 = temp;
	
	cout << "\nPlease, choose position of card:";
	prize.display_out(); // угадываемая карта
	cout << "?";
	
	cin >> position; // ввод позиции игроком
	switch (position)
	{ 
		// chosen - карта на позиции,
	case 1: chosen = card1; break; // выбранной игроком
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	}
	if (chosen.Equal(prize)) // сравнение карт
		cout << " It's right, you are win! ";
	else
		cout << "Don't right, you loooose...";
	cout << " You delete card ";
	chosen.display_out(); // вывод выбранной карты
	cout << endl;
}