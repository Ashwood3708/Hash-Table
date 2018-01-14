/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul
 * assignment #6: hashTable
 * Created on November 14, 2017, 4:52 PM
 * description: this program creates a hash table and resolves collisions using linked list. properties are to insert and print values
 */

#include <iostream>
#include<string>
#include "hashTable.h"
using namespace std;

/*
 * 
 */
int main() {
    int x;
    cout << "Enter the size of the Table" << endl;
    cin>> x;
    while(x<5){
    cout << "Enter a size greater than 5" << endl;
    cin>>x;
    }
    
    
    hashtable r;
    r.setSize(x);


    while (x != 3) {
        cout << "Option 1 – Insert a value into the hash tables" << endl;
        cout << "Option 2 – Display the hash table" << endl;
        cout << "Option 3 – Exit Program" << endl;
        cin>>x;

        if (x == 1) {
            cout << endl;
            cout << "Enter a value" << endl;
            int k;
            cin>>k;
            r.Insert(k);

        } else if (x == 2) {
            cout<<endl;
            r.display();
        } else if (x == 3) {
            x = 3;
        } else {
            cout<<endl;
            cout << "Invalid Entry, try again" << endl;
            cout<<endl;
        }
    }




}

