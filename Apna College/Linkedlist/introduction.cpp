
#include <bits/stdc++.h>
using namespace std;


class Node {

  public:  
  int data;
  Node *next;
};


class List{


    Node* head;
    Node* tail;

    public: 
    List(){
        head = NULL;
        tail = NULL;

    }

    void push_front(){
        Node* newNode = new Node();
        if(head == NULL){
            head = newNode;
            tail = newNode;

            return;
        }else{
            newNode->next = head;  //// 1] newNode points to next node which is head
            head = newNode;  //// 2] update head to newNode 
        }
        
         
    }


};

int main() {
//  list <int> li  = {1,2,3,4,5};
// li.push_back(6);
// li.push_front(-1);

// for(int value : li){
//   cout << value << " ";
// }


list li;
li.push_front(1);
li.push_front(2);
li.push_front(3);
li.push_front(4);


cout << li << " ";


    return 0;
}