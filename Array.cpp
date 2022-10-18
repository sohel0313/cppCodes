#include<iostream>
using namespace std;


void printline(int nums[4]) {
    for (int i = 0; i < 4; i++) {
        cout << nums[i] << endl;
    }
}

int main(){
    int array[4]={1,2,3,4};
    printline(array);
    return 0;
}
