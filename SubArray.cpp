#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number Of Array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int current=0;
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current=+arr[j];
            cout<<arr[j]<<"  ";
        }
    }
}