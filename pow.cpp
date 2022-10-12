#include <iostream>
using namespace std;

int pow(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }

    return n * pow(n, m - 1);
}

int pow1(int m , int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return pow1(m*m,n/2);
    }
    return m*pow1(m*m,(n-1)/2);
}

int main()
{
    int n = 3, m = 2;
    int r = pow(n,m);
    cout << r;
    cout<<pow1(2,3);
    return 0;
}