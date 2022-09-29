#include<iostream>
using namespace std;
struct Node {
    int n;
    struct Node * next; 
};


void printlist(struct Node * ptr) {
    while (ptr !=NULL){
        cout<<ptr->n<<" ";
        ptr=ptr->next;

    }
    cout<<"\n";
}
int main(){
    Node * first=NULL;
    Node * second=NULL;
    Node * third=NULL;
    Node * fourth=NULL;
    Node * fifth=NULL;

    first = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();

    first -> n=1;
    first -> next=second;
    second -> n=2;
    second -> next=third;
    third -> n=3;
    third -> next=fourth;
    fourth -> n=4;
    fourth -> next=fifth;
    fifth -> n=5;
    fifth -> next=NULL;
    printlist(first);
}