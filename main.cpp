#include <iostream>
#include "Linkedlist.cpp"
#include "Moto.h"

using namespace std;
int main() {
    LinkedList<char> *list = new LinkedList<char>();



    list->addFirst('A');
    list->addFirst('I');
    list->addFirst('L');
    list->addFirst('A');
    list->addFirst('T');
    list->addFirst('A');
    list->addFirst('N');
    list->addLast(' ');
    list->addLast('G');
    list->addLast('O');
    list->addLast('M');
    list->addLast('E');
    list->addLast('Z');


    for( char c : list->getLinkedList(true)){
        cout<<c;
    }

    cout<<endl;
    delete(list);

    LinkedList<Moto> *motos = new LinkedList<Moto>();
    //string id, string marca, int cilindraje, double potencia, double captanque
    motos->addSorted(Moto("1","honda",4,6.6,9.8));

    for( Moto moto : motos->getLinkedList( true ) ){
        cout<<moto<<endl;
    }
      return 0;
}
