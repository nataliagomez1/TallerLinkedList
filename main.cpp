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
    //string id, string marca, string modelo, int cilindraje, double potencia, double captanque
    motos->addLast(Moto("1","Honda","CBR600RR",599,118,18.1));
    motos->addLast(Moto("2","Yamaha","YZF-R1",998,197,17));
    motos->addLast(Moto("3","Ducati","Monster 821",821,109,16.5));


    for( Moto moto : motos->getLinkedList( true ) ){
        cout<<moto<<endl;
    }
      return 0;
}


