//
// Created by Gomez Garzon on 29/07/2023.
//

#ifndef TALLERINDIVIDUAL_NODE_H
#define TALLERINDIVIDUAL_NODE_H

#include <cstdio>

template<class T> class LinkedList;
template<class T> class Handling;


template<class T>
class Node {
    friend class LinkedList<T>;
    friend class Handling<T>;

public:
    Node() {
        Node::next = NULL;
        Node::previous = NULL;
    }

    explicit Node(T info) : info(info) {
        Node::next = NULL;
        Node::previous = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
    Node<T>* previous;


};


#endif //TALLERINDIVIDUAL_NODE_H
