#include <iostream>
using namespace std;


class Node{
    private:
        int value;
        Node *next;
    public:

        Node(){
            value = this->value;
            next = this->next;
        }

        int getValue(){
            return this->value;
        }

        int getNext(){
            
        }

        void setNext(){

        }
};


class Stack{
    private:
        Node *head;
        Node *tail;
    public:

        void push(){}

        void pop(){}

        void show(){}

        void get(){}
};