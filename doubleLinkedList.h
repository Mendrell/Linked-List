#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

template <typename T>
struct Node{
        T data;
        Node *next;//  for a tree these values should be changed to parent and and child.
        Node *prev;
        //int height; for tree also need to add something to track what level its on.
       };
template <typename T>
class doubleLinkedList
{
    public:
        doubleLinkedList();
        virtual ~doubleLinkedList();
        Node <T>*Root;
        Node <T>*createNode(T Val);
        void insertTolistTop(T Val);
        void insertTolistEnd();
        void insertAfter(Node <T> *P);
        void displayList(Node <T>*);
        void displaySize(Node <T>*);

    protected:
    private:
};

#endif // DOUBLELINKEDLIST_H

template <typename T>
doubleLinkedList <T>::doubleLinkedList()
{
    Root =NULL;//ctor
}

template <typename T>
doubleLinkedList<T>::~doubleLinkedList()
{
    //dtor
}

template <typename T>
Node <T>* doubleLinkedList<T>::createNode(T Val)
{
    struct Node <T> * A = (struct Node <T>*) malloc(sizeof(struct Node<T>));
    A->data = Val;
    A->next = NULL;
    A->prev = NULL;
    return A;
}

template <typename T>
void doubleLinkedList<T>::insertTolistTop(T val){

    Node <T> *new_Node = createNode(val);
    if((Root) !=  NULL)
     {
         Root->prev = new_Node;
         new_Node->next = Root;
         Root = new_Node;
     }
    else
        Root = new_Node;
}

template <typename T>
void doubleLinkedList<T>::insertTolistEnd(){}

template <typename T>
void doubleLinkedList<T>::insertAfter(Node <T> *P){}

template <typename T>
void doubleLinkedList<T>::displayList(Node <T>*node)
{
    struct Node <T>*last;

    printf("\nTraversal in forward direction \n");
    while (node != NULL)
    {
        cout<< node->data<<" ";
        node = node->next;
    }
}

template <typename T>
void doubleLinkedList<T>::displaySize(Node <T> )
