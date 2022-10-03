#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter A Number To Armstrong Or Not";
    cin>>n;
    int a=n;
    int sum=0;
    while(n>0){
        int lstdigit=n%10;
        sum+=lstdigit*lstdigit*lstdigit;
        n=n/10;
    }
    if(sum==a)
    {
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
    return 0;
}