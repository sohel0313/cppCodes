#include <iostream>
using namespace std;
int main(){
    int n;
    bool f=0;
    cout<<"Enter A Number To Check Prime Number Or Not";
    cin>>n;
    for (int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not A Prime Number";
            f=1;
            break;
        }
        
    }
    if(f==0){
        cout<<"Prime Number";
    }
    return 0;
    
}