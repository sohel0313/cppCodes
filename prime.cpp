#include<iostream>
using namespace std;
int main(){
    int n;
    string ans = "Prime";
    cout<<"Enter A Number To Check Prime Or Not ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            ans = "Not prime";
        }
    }
    cout << ans << endl;

    return 0;
}
