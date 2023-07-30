//
// Created by Gomez Garzon on 30/07/2023.
//

#ifndef TALLERINDIVIDUAL_HANDLING_H
#define TALLERINDIVIDUAL_HANDLING_H


#include "LinkedList.h"
#include "Node.h"


#include "LinkedList.cpp"

template <typename T>
class Handling: public LinkedList<T>{
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


#endif //TALLERINDIVIDUAL_HANDLING_H
