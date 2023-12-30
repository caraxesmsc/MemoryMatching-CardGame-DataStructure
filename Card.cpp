#include "Card.h"
#include <string>
using namespace std;


Card::Card() : isShown(false) {}

Card::Card(string x) : CardName(x), isShown(false) {}

Card::Card(int value) : isShown(false) {

   


}


Card::Card(string y,string x) :cardPath(y) {}

void Card::setShown(bool booleanVar) {
    isShown = booleanVar;
}
