/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include<string>

#include "Linkedlist.h"
using namespace std;

LinkedList::LinkedList() {
    first = NULL;
    //cout <<"first = 5000"<<endl;
}

bool LinkedList::Empty() {
    bool k = false;
    if (first == NULL) { //loop checks if array has a first value
        k = true;
    }

    return k;
}

void LinkedList::InsertAtEnd(ElementType x) {

    node *newNode = new node; //makes new node
    newNode->data = x;
    newNode->next = NULL;

    node *travel; //node to traverse list
    travel = first;

    if (Empty() == true) {
        first = newNode;
    } else {
        while (travel->next != NULL) { //loop to have node find last position
            travel = travel->next;
        }
        travel->next = newNode;
    }

}

void LinkedList::Display() {
    node*traverse;
    traverse = first;
    string s = "";
    if (Empty() == true) {
        cout << "";
    } else {
        while (traverse != NULL) {
            cout << traverse->data<< ",";
            traverse = traverse->next;
        }
    }

}



