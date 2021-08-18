//////////////////////////////////////////////////
///////File to define functions: Poker.cpp///////

#include <iostream>
#include <algorithm>
#include <vector>
#include "poker.h"

using namespace std;

// #define vector std::vector
#define increasingFor(a,x,y) for(a=x; a<=y; a++)
#define decreasingFor(a,x,y) for(a=x; a>=y; a--)

const int numCards = 5;

//highcard will return the highest card contained within a hand

int highcard(vector <int> cards){

	int maxYet = -1; int i;
	int size = cards.size(); 

	increasingFor(i, 0, size-1) maxYet = std::max(cards[i], maxYet);

	return maxYet;
  
}


bool onepair(vector <int> cards){

	int i,j;
	int size = cards.size(); 

	increasingFor(i, 0, size-1)
		increasingFor(j, i+1, size-1)
			if( cards[i] == cards[j] ) return 1;

	
	return 0;

}


bool twopair(vector <int> cards){

	int i,j;
	int flag=0;
	int size = cards.size(); 

	increasingFor(i, 0, size-1)
		increasingFor(j, i+1, size-1){
			if( cards[i] == cards[j] ) flag += 1;
			if (flag == 1) return 1;		
		}														


	return 0;

}


bool threekind(vector <int> cards){

	int i,j;
	int size = cards.size();

	increasingFor(i, 0, size-1){
		int flag=0;	
		increasingFor(j, i+1, size-1){
			if( cards[i] == cards[j] ) flag += 1;
			if (flag == 2) return 1;
		}
	}	

	return 0;
}


bool straight(vector <int> cards){

	int size = cards.size();
	int a, i, flag=0;
	int samplearray[size];

	increasingFor(a, 0, size-1) samplearray[i] = cards[i];

	std::sort(samplearray, samplearray+size);

	increasingFor(i, 0, size-2) if(samplearray[i] == samplearray[i+1]-1) flag += 1;

	if( flag ==4 ) return 1;
	return 0;
}


bool fullhouse(vector <int> cards){

	int i,j;
	int biggerkey =0;
	bool threekind = false;
	int size = cards.size();

	increasingFor(i, 0, size-1){
		int flag=0;	
		increasingFor(j, i+1, size-1){
			if( cards[i] == cards[j] ) flag += 1;
			if (flag == 2) {
				biggerkey = cards[i];
				threekind = true;
				break;
			}
		}
	}	

	if (threekind){

		increasingFor(i, 0, size-1)
			increasingFor(j, i+1, size-1)
				if( cards[i] == cards[j] && cards[i] != biggerkey) return 1;

	}

	return 0;

}


bool fourkind(vector <int> cards){

	int i,j;
	int size = cards.size();

	increasingFor(i, 0, size-1){
		int flag=0;	
		increasingFor(j, i+1, size-1){
			if( cards[i] == cards[j] ) flag += 1;
			if (flag == 3) return 1;
		}
	}	

	return 0;
}

