#pragma once
#include "Card.h"
#include <cliext/vector>

const int DEFAULT_CAPACITY = 128;

ref class Stack
{
public:
    Stack();
    Stack(int numElements);
    const Stack^ operator=(const Stack^ rhs);
    bool empty();
    Card^ top();

    void push(Card^ value);
    //void display(ostream^ out);
    void pop();
    void createObjectiveStack(cliext::vector<int>^ indexArray);

private:
    cliext::vector<Card^>^ myArray;
    int myTop;
    int myCapacity;
};
