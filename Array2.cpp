#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array ";
    cin>>n;
    int array[n];
    for (int i=0;i<=n;i++){
        cout<<"Enter Elements Of Array";
        cin>>array[i];
    }
    for (int i=0;i<=n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}