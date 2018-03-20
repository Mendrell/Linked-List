#include <iostream>
#include <doubleLinkedList.h>
#include <string>

using namespace std;

int main()
{
    string com;
    bool on = true;
    int usize = 10; //default list size
    while (on == true){
        cout << "What would you like to do: ";
        cin >> com;
        cout << endl;
        if (com == "exit"){
            cout << "Good Bye! :D" << endl;
        }
        if (com == "create"){
            /*cout << "What size would you like your list to be: ";
            cin >> usize;
            cout << endl;
            while (usize != static_cast<int>(usize) || usize<0){
                cout << "Sorry that is not a valid entry. \nPlease enter a positive whole number: ";
                cin >> usize;
                cout << endl;
            }*/// dont need to worry about the initial size of a linked list
            doubleLinkedList <int> A
        }
    }
   doubleLinkedList <int> A;

    A.insertTolistTop(10);
    A.insertTolistTop(50);
    A.insertTolistTop(100);

    A.displayList(A.Root);
    return 0;
}
