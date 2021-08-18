//////Interface file: Poker.h/////////////

//declare all of the functions that will be used to determine the
//Results of the hand

#ifndef poker_h 
#define poker_h

#include <iostream>
#include "poker.cpp"

bool onepair(  std::vector <int> cards);
bool twopair(  std::vector <int> cards);
bool threekind(std::vector <int> cards);
bool straight( std::vector <int> cards);
bool fullhouse(std::vector <int> cards);
bool fourkind( std::vector <int> cards);
int highcard(  std::vector <int> cards);


#endif //

