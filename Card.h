#pragma once

#include <string>
#include <string>
using namespace System;
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
namespace CardNamespace {
    ref class Card
    {
    public:
        System::String^ CardName;
        bool isShown;

        // Constructors
        Card();
        Card(System::String^ x);
        Card(int value);

        // Method to set the 'isShown' property
        void setShown(bool booleanVar);
    };
}