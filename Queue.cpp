#include "Queue.h"
#include "Card.h"
#include <vector>

using namespace QueueNamespace;

//--- Definition of Queue constructor
QueueNamespace::Queue::Queue()
    : myFront(nullptr), myBack(nullptr)
{}

//--- Definition of Queue copy constructor
QueueNamespace::Queue::Queue( Queue^ original)
{
    myFront = myBack = nullptr;
    if (!original->empty())
    {
        // Copy first node
        myFront = myBack = gcnew QueueNamespace::Queue::Node(original->frontQueue()->myFront->data,nullptr);

        // Set pointer to run through original's linked list
        QueueNamespace::Queue::NodePointer origPtr = original->myFront->next;
        while (origPtr != nullptr)
        {
            myBack->next = gcnew QueueNamespace::Queue::Node(origPtr->data,nullptr);
            myBack = myBack->next;
            origPtr = origPtr->next;
        }
    }
}

//--- Definition of Queue destructor
QueueNamespace::Queue::~Queue()
{
    // Set pointer to run through the queue
    QueueNamespace::Queue::NodePointer prev = myFront,
        ptr;
    while (prev != nullptr)
    {
        ptr = prev->next;
        delete prev;
        prev = ptr;
    }
}
//--- Definition of assignment operator
QueueNamespace::Queue^ QueueNamespace::Queue::operator= ( Queue^ rightHandSide)
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
Boolean QueueNamespace::Queue::empty()
{
    return (myFront == nullptr);
}

//--- Definition of enqueue()
void QueueNamespace::Queue::enqueue(CardNamespace::Card^ value)
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
//void QueueNamespace::Queue::display(ostream^ out) const
//{
  //  QueueNamespace::Queue::NodePointer ptr;
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
QueueNamespace::Queue^ QueueNamespace::Queue::frontQueue() {
	Queue^ temp = gcnew Queue();
	temp->enqueue(myFront->data);
	return temp;
}

//--- Definition of front()
CardNamespace::Card^ QueueNamespace::Queue::front() 
{
    if (! empty())
        return myFront->data;
    else
    {
        cerr << "*** Queue is empty -- returning garbage ***\n";
        return gcnew CardNamespace::Card(); // Use gcnew for creating an instance
    }
}

//--- Definition of dequeue()
void QueueNamespace::Queue::dequeue()
{
    if (!empty())
    {
        QueueNamespace::Queue::NodePointer ptr = myFront;
        myFront = myFront->next;
        delete ptr;
        if (myFront == nullptr)     // queue is now empty
            myBack = nullptr;
    }
    else
        cerr << "*** Queue is empty -- can't remove a value ***\n";
}

void QueueNamespace::Queue::deleteQueue() {
    while (myFront != nullptr) {
        Node^ temp = myFront;
        myFront = myFront->next;
        delete temp;
    }
    myBack = nullptr;
}

void QueueNamespace::Queue::printCards() {
    Node^ current = myFront;
    while (current != nullptr) {
        //cout << current->data->CardName << " ";
        current = current->next;
    }
    cout << endl;
}
bool QueueNamespace::Queue::ismatched(Queue^ card1, Queue^ card2) {
    if (card1->empty() || card2->empty()) {
        return false;
    }
    CardNamespace::Card^ match1 = card1->front();
    CardNamespace::Card^ match2 = card2->front();

    return (match1->CardName == match2->CardName);
}
bool QueueNamespace::Queue::checkMatch(int loc1, int loc2) {

    QueueNamespace::Queue::Node^ head1 = myFront;
    QueueNamespace::Queue::Node^ head2 = myFront;

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
bool QueueNamespace::Queue::checkMatchHard(CardNamespace::Card^ card1, int loc2) {

    QueueNamespace::Queue::Node^ head2 = myFront;


    for (int i = 0; i < loc2; i++) {
        head2 = head2->next;
    }


    if (card1->CardName == head2->data->CardName) {
        head2->data->isShown = true;
        return true;
    }
    return false;
}
bool QueueNamespace::Queue::checkMatchCards(CardNamespace::Card^ card1, CardNamespace::Card^ card2) {

    if (card1->CardName == card2->CardName) {
        card1->isShown = true;
        card2->isShown = true;

        return true;
    }
    return false;
}
void QueueNamespace::Queue::displayGrid() {
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
void QueueNamespace::Queue::createShuffledQueue(System::Collections::Generic::List<int>^ indexArray) {
    // Duplicate indices to create pairs
    Int32 shuffledIndices[12];
    //Int32^ shuffledIndexPtr = indexArray;  // Create a separate pointer

    for (int i = 0; i < 6; ++i) {
        shuffledIndices[i * 2] = indexArray[i];
        shuffledIndices[i * 2 + 1] = indexArray[i];
        //shuffledIndexPtr= shuffledIndexPtr->;
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
        enqueue(gcnew CardNamespace::Card(cardName));
    }
}


// Custom shuffle function (Fisher-Yates algorithm)
void QueueNamespace::Queue::shuffleArray(System::Collections::Generic::List<int>^ arr, int size) {
    for (int i = size - 1; i > 0; --i) {
        srand(time(nullptr));

        int j = rand() % (i + 1);
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int QueueNamespace::Queue::chooseCard() {
    int loc;
    QueueNamespace::Queue::Node^ head1 = myFront;
    cout << "Enter location (0-11): ";
    cin >> loc;
    for (int i = 0; i < loc; i++) {
        head1 = head1->next;
    }
    //cout << "you chose location " << loc << " card is " << head1->data->CardName << endl;
    return loc;
}
void QueueNamespace::Queue::searchCard(CardNamespace::Card^ card1) {

    QueueNamespace::Queue::Node^ head1 = myFront;
    while (head1->data->CardName != card1->CardName) {
        head1 = head1->next;
    }

    head1->data->isShown = true;
}

bool QueueNamespace::Queue::isGameOver(int n) {
    if (n == 0) {
        cout << " Game Over !";
        return false;
    }
    else {
        return true;
    }
}
