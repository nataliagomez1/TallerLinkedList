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
    friend class Handling<T>;

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


template<class T>
LinkedList<T>::LinkedList() {
    head = last = NULL;
}

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

template<class T>
T LinkedList<T>::getLast() {
    if (isEmpty()){
        return NULL;
    }
    return last->info;
}

template<class T>
T LinkedList<T>::getFirst() {
    if (isEmpty()){
        return NULL;
    }
    return head->info;
}

template<class T>
T *LinkedList<T>::getObject(int ind) {
    //para ver si se sale, pero no sé si deberia ir en la otra clase xd
    if(ind < 0 || ind >= getSize()) {
        return NULL;
    }
    Node<T>* aux = head;
    for(int i = 0; i < ind; i++) {
        aux = aux->next;
    }
    return &(aux->info);
}

template<class T>
int LinkedList<T>::getSize() {
    int cont=0;
    Node<T>* aux= head;
    while (aux!=NULL){
        cont++;
        aux=aux->next;
    }
    return cont;
}

template<class T>
T LinkedList<T>::deleteNode(Node<T> *node) {
    T out= node->info;
    if (node==head){
        head= head->next;
    }else{
        Node<T>* aux= head;
        while (aux->next!=node){
            aux=aux->next;
        }
        aux->next= node->next;
    }
    delete(node);
    return out;
}


template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> * after, T info) {
    Node<T>* node= new Node<T>(info);
    after->next=node;

}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *before, T info) {
    Node<T>* node= new Node<T>(info);
    if (before==head){
        node->next=head;
        head=node;
    } else{
        Node<T>* act= head;
        while (act->next != before){
            act=act->next;
        }
        node->next=act->next;
        act->next=node;
    }

}


template<class T>
T *LinkedList<T>::findInfo(std::string id) {
    Node<T>* aux = head;
    while(aux!=NULL){
        if (aux->info.getid().compare(id)==0){
            return *aux->info;
        }
        aux=aux->next;
    }

    return NULL;}


template<class T>
Node<T> *LinkedList<T>::findNode(std::string id) {
    Node<T>* aux = head;
    while(aux!=NULL){
        if (aux->info.getid().compare(id)==0){
            return aux;
        }
        aux=aux->next;
    }

    return NULL;
}

template<class T>
LinkedList<T>::~LinkedList() {

}
template <typename T>
class Handling:public LinkedList<T>{
public:
    Handling();

    bool nodeExist(std::string);

    bool validData(T);

    bool infoExist(std::string);





private:

};




template<typename T>
bool Handling<T>::infoExist(std::string) {
    return false;
}

template<typename T>
bool Handling<T>::validData(T) {
    return false;
}

template<typename T>
bool Handling<T>::nodeExist(std::string id) {
    Node<T>* iterator = head;
    return false;
}

template<typename T>
Handling<T>::Handling() {


}



#endif //TALLERINDIVIDUAL_LINKEDLIST_H
