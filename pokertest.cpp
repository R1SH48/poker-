//////////////////////////////////////////////////
///////File to define functions: Pokertest.cpp///////

//https://codeshare.io/zvhVK

#include <iostream>
#include <vector>
#include "poker.h"


using namespace std;


int main()
{
	const int NUMCARDS = 5;
	vector <int> cards;


	//full house of 3
	// cards = {2, 2, 3, 3, 3};

	//full house of 2
	// cards = {2, 2, 2, 3, 3};


	//straight of 6
	// cards = {2, 3, 4, 5, 6};


	//four of a kind of 5
	cards = {5, 5, 5, 5, 3};




	if (fourkind(cards)){
		cout << endl<< "Four of a kind ";
	}
	else if(fullhouse(cards)){
		cout << "Full House";
	}
	else if(straight(cards)){
		cout << "Straight";
	}
	else if(threekind(cards)){
		cout << "Three of a kind";
	}
	else if(twopair(cards)){
		cout << "Two Pair";
	}
	else if(onepair(cards)){
		cout << "Pair of cards";
	}
	else{
		cout << "Your highest card is: " << highcard(cards);
	}
	return 0;
}
