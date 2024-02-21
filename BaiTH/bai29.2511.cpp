#include<iostream>

using namespace std;

 int ucln(int a,int b)
{
    while(a!=b)
        if(a>b)
        a=a-b;
    else b=b-a;
    return a;
}
int kiemtra(int a,int b)
{
    int c;
    c=ucln(a,b);
    if(c==1)
        return 1;
    else return 0;
}
int main()
{
    int a,b;
    cout<<" nhap a:";cin>>a;
    cout<<" nhap b:";cin>>b;
    if(kiemtra(a,b)==1)
        cout<<"a  b la so nguyen to cung nhau"<<endl;
    else
        cout<<" a  b khong la so nguyen to cung nhau"<<endl;
}
