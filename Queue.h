#pragma once
#include "Card.h"
#include <iostream>
#include <vector>

ref class Queue
{
public:
    Queue();
    Queue( Queue^ original);  // Change here
    ~Queue();
    Queue^ operator= ( Queue^ rightHandSide);  // Change here
    Boolean^ empty();
    void enqueue(Card^ value);
    Queue^ frontQueue();
    Card^ front();
    void dequeue();
    void deleteQueue();
    void printCards();
    void displayGrid();
    void createShuffledQueue(int* array);
    void shuffleArray(System::Collections::Generic::List<int>^ arr, int size);
    bool ismatched(Queue^ card1, Queue^ card2);
    bool checkMatch(int loc1, int loc2);
    int chooseCard();
    bool isGameOver(int n);
    bool checkMatchHard(Card^ card1, int loc2);
    void searchCard(Card^ card1);
    bool checkMatchCards(Card^ card1, Card^ card2);

private:
    ref class Node
    {
    public:
        Card^ data;
        Node^ next;

        Node(Card^ value, Node^ link )
        {
            data = value; next = link;
        }

    };
    typedef Node^ NodePointer;
    NodePointer myFront, myBack;
};
