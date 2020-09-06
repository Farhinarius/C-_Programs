// Lab_6.cpp
// options


#include <iostream> 
#include <string> 
using namespace std;

////////////////////////////

struct elem 
{
	string Str;
	elem *left, *right;
};

////////////////////////////

int main() 
{
	
	///////////////////////////////////////////////////////////////

	string WholeSt, Word = "";
	cout << "\n Enter the string: "; getline(cin, WholeSt);

	///////////////////////////////////////////////////////////////

	const char my_set[6] = {'a','e','y','u','i','o'};  // все гласные буквы 
	elem *first, *last, *pass, *next; // create 4 pointer for working with linkline
	first = new struct elem;   // get mem for new pointer
  	pass = first;              // pass init
	last = first;              // last init
	first->left = NULL;        // empty pointer left
	first->right = NULL;       // empty pointer right
	int i = 0;                 // index in 'for'
	
	////////////////////////////////////////////////////////////////
	
	while ((i < WholeSt.length()) && (WholeSt[i] != ' ')) // condition: string is only one word
	{                          // also condition for first element in linkline
		Word += WholeSt[i];              // find word before met ' '
		i++;                   // increase index of symbol
	}
	pass->Str = Word;
	Word = "";

	for (i += 1; i < WholeSt.length(); i++) // started linkline in next word
	{
		if ((WholeSt[i] == ' ') && (Word.length())) 
		{
			next = new struct elem;  // get memory for next;
			pass->right = next;
			//////////////////////////// next pointer
			next->right = NULL;
			next->Str = Word;
			next->left = pass;
			/////////////////////////////// check next pointer in linkline
			pass = next;           
			last = next;
			//////////////////////////////////////
			Word = "";  // - clear word
		}
		else {
			Word += WholeSt[i];
		}
	}
	if (Word.length()) // condition of last element
	{
		next = new struct elem;  // get memory
		pass->right = next;  
		/////////////////// - the last (next) element
		next->right = NULL;
		next->Str = Word;
		next->left = pass;
		///////////////////
		pass = next;
		last = next;
	}

	///////////////////////////////////////////////
	cout << "___________________________________\n";
	cout << "String linkline: " << endl;
	next = first;                     // output string //
	while (next != NULL) 
	{
		cout << next->Str << endl;
		next = next->right;
	}
	cout << "_____________________________\n";

	//////////////////////////////////////////////  k->pass
	next = first;
	bool check = true;
	while ((next != NULL) && (check)) 
	{
		if (next->Str[0] == 'k')
		{
			check = false;
		}
		else 
		{
			next = next->right;
		}
	}
	////////////////////////////////////////////////////////    t->pass
	pass = first;
	check = true;
	while ((pass != NULL) && (check)) 
	{
		if (pass->Str[0] == 't')
		{
			check = false;
		}
		else 
		{
			pass = pass->right;
		}
	}
	////////////////////////////////////////////////////////        // swap passes  //  
	cout << "Swapped linkline: " << endl;
	if ((pass == NULL) || (next == NULL)) //  NULL all pointer
	{
		cout << "No such words\n";       
	}
	else {
		swap(next->Str, pass->Str);
		next = first;
		while (next != NULL) {
			cout << next->Str << endl;                          
			next = next->right;                                   // output with swaping //
		}
	}
	cout << "___________________________________\n";
	////////////////////////////////////////////////////////

	pass = last;  // my_set
	while (pass != first)
	{
		if ((pass->Str[0] == my_set[0]) || (pass->Str[0] == my_set[1]) || (pass->Str[0] == my_set[2]) || (pass->Str[0] == my_set[3]) || (pass->Str[0] == my_set[4]) || (pass->Str[0] == my_set[5]))
		{
			next = pass->left;
			next->right = pass->right;
			if (pass->right != NULL)
			{
				pass->right->left = next;
			}
			delete pass;
			pass = next;
		}
		else
		{
			pass = pass->left;
		}
	} 
	if ((pass->Str[0] == my_set[0]) || (pass->Str[0] == my_set[1]) || (pass->Str[0] == my_set[2]) || (pass->Str[0] == my_set[3]) || (pass->Str[0] == my_set[4]) || (pass->Str[0] == my_set[5])) {
		first = pass->right;
		if (first != NULL) {
			first->left = NULL;
		}
		delete pass;
	}
	///////////////////////////////////
	cout << " Linkline without 1-st vowel symbol: " << endl;
	next = first; // output //
	while (next != NULL)
	{
		cout << next->Str << endl;
		next = next->right;
	}
	cout << "_____________________________\n"; 


	pass = first;
	do {
		next = pass->right;
		delete pass;
		pass = next;
	} while (pass != NULL);

	return 0;
}