#pragma once
#include "Card.h"
#include <cliext/list>  // Include cliext::list for compatibility

//using namespace System::Collections::Generic;  // Optional for unqualified List<T>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
const int DEFAULT_CAPACITY = 128;
namespace StackNamespace {
    ref class Stack
    {
    public:
        Stack();
        Stack(int numElements);
        const Stack^ operator=(const Stack^ rhs);
        bool empty();
        CardNamespace::Card^ top();

        void push(CardNamespace::Card^ value);
        // void display(ostream^ out);
        void pop();
        void createObjectiveStack(System::Collections::Generic::List<int>^ indexArray);  // Use List<int>^

    private:
        System::Collections::Generic::List<CardNamespace::Card^>^ myArray;  // Use List<Card^>^ for consistency
        int myTop;
        int myCapacity;
    };
}