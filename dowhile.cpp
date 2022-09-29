#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"checking Number is positive or Negative\n"<<"enter A Number";
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }
    while(n>0);
        cout<<n;

    return 0;
}