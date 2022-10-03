#include <iostream>
#include<climits>
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
    

    int maxx=INT_MIN;
    int minn=INT_MAX;
    for(int i=0;i<=n;i++){
        maxx=max(maxx,array[i]);
        minn=min(minn,array[i]);
    }
    cout<<endl<<"Maximum No. "<<maxx<<endl<<"Minimum No."<<minn;

}