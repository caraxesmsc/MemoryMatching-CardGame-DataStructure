#pragma once
#include "Card.h"
#include <iostream>
#include <vector>

namespace QueueNamespace {
    ref class Queue
    {
    public:
        Queue();
        Queue(Queue^ original);  // Change here
        ~Queue();
        Queue^ operator= (Queue^ rightHandSide);  // Change here
        Boolean^ empty();
        void enqueue(CardNamespace::Card^ value);
        Queue^ frontQueue();
        CardNamespace::Card^ front();
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
        bool checkMatchHard(CardNamespace::Card^ card1, int loc2);
        void searchCard(CardNamespace::Card^ card1);
        bool checkMatchCards(CardNamespace::Card^ card1, CardNamespace::Card^ card2);

    private:
        ref class Node
        {
        public:
            CardNamespace::Card^ data;
            Node^ next;

            Node(CardNamespace::Card^ value, Node^ link)
            {
                data = value; next = link;
            }

        };
        typedef Node^ NodePointer;
        NodePointer myFront, myBack;
    };
}