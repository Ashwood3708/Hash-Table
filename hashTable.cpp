/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "hashTable.h"
#include "Linkedlist.h"
#include <iostream>
#include<string>
using namespace std;


hashtable::hashtable(){
    size = 0;
}

 void hashtable::setSize(int m){
    size = m;
    for(int i = 0; i < m; i++){
        LinkedList r;
        table[i] = r;
    }
}

void hashtable::Insert(int value){
    int location = value % size;
    table[location].InsertAtEnd(value);
    count++;
}

void hashtable::display(){
    for(int i = 0; i<size;i++){
       cout << i <<" - ";
       table[i].Display(); 
               cout<<endl;
    }
}






















