# Hash-Table
creates a hash table with linked list, can enter values from user, orders them, and displays them


## Directions:

create a hash-table using the below header file, use the linked list method to order them. The print option should allow the user to see the table in a 3-D format.

```
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
``
