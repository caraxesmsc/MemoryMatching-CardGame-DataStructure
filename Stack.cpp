#include "Stack.h"
#include "Card.h"
#include <iostream>

Stack::Stack() : myTop(-1), myCapacity(DEFAULT_CAPACITY), myArray(gcnew cliext::vector<Card^>(DEFAULT_CAPACITY))
{
}

Stack::Stack(int numElements) : myTop(-1), myCapacity(numElements), myArray(gcnew cliext::vector<Card^>(numElements))
{
}

const Stack^ Stack::operator=(const Stack^ rhs)
{
    if (this != rhs)
    {
        myTop = rhs->myTop;
        myArray = gcnew cliext::vector<Card^>(rhs->myArray);
    }
    return this;
}

bool Stack::empty()
{
    return myTop == -1;
}

void Stack::push(Card^ value)
{
    if (myTop >= myCapacity - 1)
    {
        cerr << "Stack-full! " << endl;
        exit(1);
    }
    myArray->push_back(value);
    myTop++;
}

Card^ Stack::top()
{
    if (!empty())
        return myArray->at(myTop);
    else
    {
        cerr << "Stack Empty -- Returning garbage." << endl;
        Card^ garbage = gcnew Card();
        return garbage;
    }
}

//void Stack::display(ostream^ out)
//{
//    if (empty())
//    {
//        cerr << "Stack-empty!" << endl;
//        return;
//    }
//    for (int i = myTop; i >= 0; i--)
//    {
//        out << myArray->at(i)->CardName << ' ';
//    }
//    out << endl;
//}

void Stack::pop()
{
    if (!empty())
        myTop--;
    else
    {
        cerr << "Stack Empty!" << endl;
    }
}

void Stack::createObjectiveStack(cliext::vector<int>^ indexArray)
{
    for (int i = 0; i < 6; ++i)
    {
        push(gcnew Card(indexArray[i] * 2));
    }
}
