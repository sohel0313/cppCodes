#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter a elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Origional Array : ";
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;

    // int arr[5] = {5, 4, 3, 2, 1};
    // int n = 5;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}