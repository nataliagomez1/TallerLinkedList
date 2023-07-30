//
// Created by Gomez Garzon on 29/07/2023.
//

#include "LinkedList.h"

template<class T>
std::vector<T> LinkedList<T>::getLinkedList(bool sw) {
    std::vector<T> vecOut;
    Node<T>* aux = sw ? head : last;
    while( aux != NULL ){
        vecOut.push_back( aux->info );
        aux = sw ? aux->next : aux->previous;
    }

    return vecOut;
}

template<class T>
void LinkedList<T>::addLast(T info) {
    if( isEmpty()){
        head = last = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>(info);

        last->next = newNode;
        newNode->previous = last;
        last = newNode;
    }
}

template<class T>
void LinkedList<T>::addFirst(T info) {
    if( isEmpty()){
        head = last = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>(info);

        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL && last == NULL;
}

template<class T>
LinkedList<T>::LinkedList() {
    head = last = NULL;
}

template<class T>
void LinkedList<T>::addSorted(T info) {
    if( isEmpty() ){
        head = last = new Node<T>(info);
    }else if( info.getId().compare(head->info.getId()) < 0 ){
        addFirst( info );
    }else if( info.getId().compare(last->info.getId()) > 0){
        addLast( info );
    }else{
        Node<T>* act = head;
        Node<T>* ant = NULL;
        while( act->info.getId().compare(info.getId()) < 0 ){
            ant = act;
            act = act->next;
        }
        Node<T>* newNode = new Node<T>(info);
        ant->next = newNode;
        newNode->previous = ant;
        newNode->next = act;
        act->previous = newNode;
    }
}
