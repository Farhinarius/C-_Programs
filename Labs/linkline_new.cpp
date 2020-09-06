// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;
////////////////////////////////
struct linkline	 // string
{                     //                ______LINKLINE_____                    
	string str;       //              \|       |str|       |/
	linkline *right;  //              \|      |right|      |/---------------->|
	linkline *left;   //              \|_______|left|______|/ - NULL          |            ________NEXT_______
};                                                //                          |           |________str________|  
                                                  //                          |---------->|____right->next____| ------|
                                                  //                                      |________priv_______|       |
//////////////////////////
int main()
{
	/////////////////////////////////////////
	linkline *first, *next, *previous, *last;
	first = new struct linkline;
	previous = first;
	last = first;
	first->right = NULL;
	first->left = NULL;
	string word = "",st;
	int i = 0;
	/////////////////////////////////////////
	cout << "\n Enter string: ";
	getline(cin, st);

	while ((i < st.length()) && (st[i] != ' ')) // condition: string is only one word
	{ // also condition for first element in linkline
		word += st[i];              // find word before met ' '
		i += 1;                   // increase index of symbol
	}
	previous->str = word;
	word = "";

	for (i += 1; i < st.length(); i++) // started linkline in next word
	{
		if ((st[i] == ' ') && (st.length()))
		{
			next = new struct linkline;  // get memory for next;
			previous->right = next;
			//////////////////////////// next pointer
			next->right = NULL;
			next->str = word;
			next->left = previous;
			/////////////////////////////// check next pointer in linkline
			previous = next;
			last = next;
			//////////////////////////////////////
			word = "";  // - clear word
		}
		else {
			word += st[i];
		}
	}
	if (word.length()) // condition of last element
	{
		next = new struct linkline;  // get memory
		previous->right = next;
		/////////////////// - the last (next) element
		next->right = NULL;
		next->str = word;
		next->left = previous;
		///////////////////
		previous = next;
		last = next;
	}

	next = first; // output //
	while (next != NULL)
	{
		cout << next->str << endl;
		next = next->right;
	}
	cout << "_____________________________\n";

	//////////////////////////////////////////////

	return 0;
}