#include "Card.h"
#include <string>
using namespace System;
using namespace std;


// Default constructor
Card::Card() : isShown(false) {}

// Constructor with a string parameter
Card::Card(String^ x) : CardName(x), isShown(false) {}

// Constructor with an integer parameter
Card::Card(int value) : isShown(false) {
    // You might want to do something with the 'value' parameter
}

// Method to set the 'isShown' property
void Card::setShown(bool booleanVar) {
    isShown = booleanVar;
}