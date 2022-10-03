#include <iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter A Size Of Array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter A Array"<<endl;

    for(int i=0;i<=n;i++){
        cin >>arr[i];
    }
    int key;
    cout<<"Enter A Key ";
    cin>>key;
cout<<LinearSearch(arr,n,key);
    return 0;
}