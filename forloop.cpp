#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"This Program Is Of Addition Of 'n' Number\n Enter A number =";
    cin>>n;
    int sum;
    sum=0;
    for(int counter=1;counter<=n;counter++){
        sum+=counter;
    }
    cout<<"sum Of m"<<n<<" Number is "<<sum;
}