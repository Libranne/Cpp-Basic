#include <stdio.h>
#include <iostream>
using namespace std;

int ucln(int a, int b)
{

    while (a!=b)
    {
        if(a>b) a-=b;
        else b-=a;

    }
    return a;
}

int main()
{
int m,n,k;
    cout<<" nhap m:";cin>>m;
    cout<<" nhap n:";cin>>n;
    cout<<" nhap k:";cin>>k;
    cout<<" \n ucln cua 2 so m,n la:"<<ucln(m,n);
    cout<<" \n ucln cua 3 so m,n,k:"<<ucln(ucln(m,n),k);

    return 0;
}

