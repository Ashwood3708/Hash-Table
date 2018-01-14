/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Linkedlist.h
 * Author: Abdul
 *
 * Created on November 14, 2017, 5:03 PM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <iostream>
#include<string>
using namespace std;

typedef int ElementType;

struct node{
     ElementType data;
    node * next;
    node * prev;
};

class LinkedList {
public:
    LinkedList(); // Create an empty list
    bool Empty(); // Return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); // Insert a value x at the end of the list
    void Display(); // Display the data values in the list
    

private:
    node * first; // Pointer
    int N;
};



#endif /* LINKEDLIST_H */

