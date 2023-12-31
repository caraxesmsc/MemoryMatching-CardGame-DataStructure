#include "Stack.h"
#include "Card.h"
#include <iostream>
using namespace StackNamespace;
StackNamespace::Stack::Stack() : myTop(-1), myCapacity(DEFAULT_CAPACITY), myArray(gcnew System::Collections::Generic::List<CardNamespace::Card^>(DEFAULT_CAPACITY))
{
}

StackNamespace::Stack::Stack(int numElements) : myTop(-1), myCapacity(numElements), myArray(gcnew System::Collections::Generic::List<CardNamespace::Card^>(numElements))
{
}

const StackNamespace::Stack^ StackNamespace::Stack::operator=(const Stack^ rhs)
{
    if (this != rhs)
    {
        myTop = rhs->myTop;
        myArray = gcnew System::Collections::Generic::List<CardNamespace::Card^>(rhs->myArray);  // Copy list elements
    }
    return this;
}

bool StackNamespace::Stack::empty()
{
    return myTop == -1;
}

void StackNamespace::Stack::push(CardNamespace::Card^ value)
{
    if (myTop >= myCapacity - 1)
    {
        cerr << "Stack-full! " << endl;
        exit(1);
    }
    myArray->Add(value);  // Use Add for lists
    myTop++;
}


CardNamespace::Card^ StackNamespace::Stack::top()
{
    if (!empty())
        return myArray[myTop];
    else
    {
        cerr << "Stack Empty -- Returning garbage." << endl;
        CardNamespace::Card^ garbage = gcnew CardNamespace::Card();
        return garbage;
    }
}

//void StackNamespace::Stack::display(ostream^ out)
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

void StackNamespace::Stack::pop()
{
    if (!empty())
        myTop--;
    else
    {
        cerr << "Stack Empty!" << endl;
    }
}

void StackNamespace::Stack::createObjectiveStack(System::Collections::Generic::List<int>^ indexArray)  // Change parameter type
{
    for (int i = 0; i < 6; ++i)
    {
        push(gcnew CardNamespace::Card(indexArray[i] * 2));
    }
}