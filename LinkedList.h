//
// Created by Gomez Garzon on 29/07/2023.
//

#ifndef TALLERINDIVIDUAL_LINKEDLIST_H
#define TALLERINDIVIDUAL_LINKEDLIST_H
#include <vector>
#include <string>

#include "Node.h"

template <class T>
class LinkedList {
public:
    LinkedList();

    bool isEmpty();

    void addFirst( T info );

    void addLast( T info );

    std::vector<T> getLinkedList( bool sw );

    void addSorted( T info );

    Node<T> * findNode(std::string);

    T * findInfo(std::string);

    void addNodeBeforeTo(Node<T>*, T);

    void addNodeAfterTo(Node<T>*, T);

    T deleteNode(Node<T>*);

    int getSize();

    T* getObject(int);

    T getFirst();

    T getLast();

    virtual ~LinkedList() ;


private:
    Node<T>* head;
    Node<T>* last;

};




#endif //TALLERINDIVIDUAL_LINKEDLIST_H
