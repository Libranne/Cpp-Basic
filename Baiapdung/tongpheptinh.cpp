/*nhap so nguyen n va so thuc x tinh gia tri*/
#include<iostream>
using namespace std;
int main()
{
int n;float x,s,t=1;
cout<<" nhap so nguyen n:";cin>>n;
cout<<" nhap so thuc x:";cin>>x;
for( int i=1;i<=n;i++)
{
    t=t*x;
    s=s+t/i;
}
cout<<" tong:"<<s;
}

