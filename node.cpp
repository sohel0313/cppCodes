#include <iostream>

using namespace std;

struct node {
    int n;
    struct node * next;
};

void printlist(struct node * ptr) {
    while (ptr != NULL) {
        cout << ptr -> n << " ";
        ptr = ptr -> next;
    }
    cout << "\n";
}

int main() {
    node * first = NULL;
    node * second = NULL;
    node * third = NULL;

    first = new node();
    second = new node();
    third = new node();

    first -> n = 1;
    first -> next = second;

    second -> n = 2;
    second -> next = third;

    third -> n = 3;
    third -> next = NULL;

    printlist(first);

    return 0;
}