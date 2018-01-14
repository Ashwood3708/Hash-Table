/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hashTable.h
 * Author: Abdul
 *
 * Created on November 14, 2017, 4:52 PM
 */

#ifndef HASHTABLE_H
#define HASHTABLE_H


#include "Linkedlist.h"
#include <iostream>
#include<string>
using namespace std;

class hashtable {
public:
    hashtable();
    void setSize(int size); //Allocate space for the hash tables based on the
    //parameter size.  Set the size and the count.
    void Insert(int value); //insert the value in the hash table
    void display(); //Display the content of the hash table1  
private:
    LinkedList * table; //hash table is an array of linkedlists
    int count; //number of values stored in the hash table
    int size; //size of the hash table
};

#endif /* HASHTABLE_H */

