#include "Queue.h"
#include "Stack.h"
#include "Card.h"
#include <vector>
#include <cliext/vector>


//--- Definition of Queue constructor
Queue::Queue()
    : myFront(nullptr), myBack(nullptr)
{}

//--- Definition of Queue copy constructor
Queue::Queue( Queue^ original)
{
    myFront = myBack = nullptr;
    if (!original->empty())
    {
        // Copy first node
        myFront = myBack = gcnew Queue::Node(original->frontQueue()->myFront->data,nullptr);

        // Set pointer to run through original's linked list
        Queue::NodePointer origPtr = original->myFront->next;
        while (origPtr != nullptr)
        {
            myBack->next = gcnew Queue::Node(origPtr->data,nullptr);
            myBack = myBack->next;
            origPtr = origPtr->next;
        }
    }
}

//--- Definition of Queue destructor
Queue::~Queue()
{
    // Set pointer to run through the queue
    Queue::NodePointer prev = myFront,
        ptr;
    while (prev != nullptr)
    {
        ptr = prev->next;
        delete prev;
        prev = ptr;
    }
}
//--- Definition of assignment operator
 Queue^ Queue::operator= ( Queue^ rightHandSide)
{
    if (this != rightHandSide)
    {
        this->~Queue();
        if (!rightHandSide->empty())
        {
            myFront = myBack = gcnew Node(rightHandSide->frontQueue()->myFront->data,nullptr );
            NodePointer rhsPtr = rightHandSide->myFront->next;
            while (rhsPtr != nullptr)
            {
                myBack->next = gcnew Node(rhsPtr->data,nullptr);
                myBack = myBack->next;
                rhsPtr = rhsPtr->next;
            }
        }
    }
    return this;
}


//--- Definition of empty()
Boolean^ Queue::empty()
{
    return (myFront == nullptr);
}

//--- Definition of enqueue()
void Queue::enqueue(Card^ value)
{
    NodePointer newptr = gcnew Node(value,nullptr);
    if (empty())
        myFront = myBack = newptr;
    else
    {
        myBack->next = newptr;
        myBack = newptr;
    }
}


//--- Definition of display()
//void Queue::display(ostream^ out) const
//{
  //  Queue::NodePointer ptr;
    //for (ptr = myFront; ptr != 0; ptr = ptr->next)
      //  out << ptr->data->CardName << "  ";
    //out << endl;

//}

//--- Definition of output operator
//ostream^ operator<< (ostream^ out, const Queue^ aQueue) {
  //  aQueue.display(out);
    //return out;
//}

//front for Queue.
Queue^ Queue::frontQueue() {
	Queue^ temp = gcnew Queue();
	temp->enqueue(myFront->data);
	return temp;
}

//--- Definition of front()
Card^ Queue::front() 
{
    if (! empty())
        return myFront->data;
    else
    {
        cerr << "*** Queue is empty -- returning garbage ***\n";
        return gcnew Card(); // Use gcnew for creating an instance
    }
}

//--- Definition of dequeue()
void Queue::dequeue()
{
    if (!empty())
    {
        Queue::NodePointer ptr = myFront;
        myFront = myFront->next;
        delete ptr;
        if (myFront == nullptr)     // queue is now empty
            myBack = nullptr;
    }
    else
        cerr << "*** Queue is empty -- can't remove a value ***\n";
}

void Queue::deleteQueue() {
    while (myFront != nullptr) {
        Node^ temp = myFront;
        myFront = myFront->next;
        delete temp;
    }
    myBack = nullptr;
}

void Queue::printCards() {
    Node^ current = myFront;
    while (current != nullptr) {
        //cout << current->data->CardName << " ";
        current = current->next;
    }
    cout << endl;
}
bool Queue::ismatched(Queue^ card1, Queue^ card2) {
    if (card1->empty() || card2->empty()) {
        return false;
    }
    Card^ match1 = card1->front();
    Card^ match2 = card2->front();

    return (match1->CardName == match2->CardName);
}
bool Queue::checkMatch(int loc1, int loc2) {

    Queue::Node^ head1 = myFront;
    Queue::Node^ head2 = myFront;

    for (int i = 0; i < loc1; i++) {
        head1 = head1->next;
    }
    for (int i = 0; i < loc2; i++) {
        head2 = head2->next;
    }


    if (head1->data->CardName == head2->data->CardName) {
        head1->data->isShown = true;
        head2->data->isShown = true;
        return true;
    }
    return false;
}
bool Queue::checkMatchHard(Card^ card1, int loc2) {

    Queue::Node^ head2 = myFront;


    for (int i = 0; i < loc2; i++) {
        head2 = head2->next;
    }


    if (card1->CardName == head2->data->CardName) {
        head2->data->isShown = true;
        return true;
    }
    return false;
}
bool Queue::checkMatchCards(Card^ card1, Card^ card2) {

    if (card1->CardName == card2->CardName) {
        card1->isShown = true;
        card2->isShown = true;

        return true;
    }
    return false;
}
void Queue::displayGrid() {
    Node^ current = myFront;
    for (int i = 0; i < 12; i++) {
        if (current->data->isShown) {
            //cout << " (" << current->data->CardName << ")";
        }
        else {
            cout << " [" << i << "]";
        }
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
        current = current->next;
    }
}
void Queue::createShuffledQueue(int* indexArray) {
    // Duplicate indices to create pairs
    int shuffledIndices[12];
    int* shuffledIndexPtr = indexArray;  // Create a separate pointer

    for (int i = 0; i < 6; ++i) {
        shuffledIndices[i * 2] = *shuffledIndexPtr;
        shuffledIndices[i * 2 + 1] = *shuffledIndexPtr;
        shuffledIndexPtr++;
    }

    System::Collections::Generic::List<int>^ shuffledVector = gcnew System::Collections::Generic::List<int>();
    for (int i = 0; i < 12; i++) {
        shuffledVector->Add(shuffledIndices[i]);
    }


    // Shuffle the indices array
    shuffleArray(shuffledVector, 12);

    // Add the shuffled cards to the deck
    for (int i = 0; i < 12; ++i) {
        //convert from int to string.
        String^ cardName = System::Int32(shuffledVector[i]).ToString() ;
        enqueue(gcnew Card(cardName));
    }
}


// Custom shuffle function (Fisher-Yates algorithm)
void Queue::shuffleArray(System::Collections::Generic::List<int>^ arr, int size) {
    for (int i = size - 1; i > 0; --i) {
        srand(time(nullptr));

        int j = rand() % (i + 1);
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int Queue::chooseCard() {
    int loc;
    Queue::Node^ head1 = myFront;
    cout << "Enter location (0-11): ";
    cin >> loc;
    for (int i = 0; i < loc; i++) {
        head1 = head1->next;
    }
    //cout << "you chose location " << loc << " card is " << head1->data->CardName << endl;
    return loc;
}
void Queue::searchCard(Card^ card1) {

    Queue::Node^ head1 = myFront;
    while (head1->data->CardName != card1->CardName) {
        head1 = head1->next;
    }

    head1->data->isShown = true;
}

bool Queue::isGameOver(int n) {
    if (n == 0) {
        cout << " Game Over !";
        return false;
    }
    else {
        return true;
    }
}
