#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number To Check Prime Or Not ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number Is Not Prime ";
            break;
        }
        else{
            cout<<"Number Is Prime";
            break;
        }
    }
    return 0;
}
