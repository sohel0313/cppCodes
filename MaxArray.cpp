#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int maxx=INT_MIN;
    cout<<"Enter Size Of Array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        maxx=max(maxx,arr[i]);
        cout<<maxx<<" ";
    }
    //cout<<maxx;

    return 0;
}