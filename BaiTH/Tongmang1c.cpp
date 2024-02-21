#include<bits/stdc++.h>
using namespace std;
void nhapa(int a[20],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    cout<<endl;
}
void xuata(int a[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void nhapb(int b[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
    }
    cout<<endl;
}
void xuatb(int b[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
void tong(int a[100], int b[100], int c[100], int n)
{
    for(int i=0; i<n; i++)
    {
     c[i]=a[i]+b[i];
    }
}
int main()
{
    int a[100],b[100],c[100],n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    nhapa(a,n);
    cout<<"Xuat mang a: "<<endl;
    xuata(a,n);
    nhapb(b,n);
    cout<<"Xuat mang b: "<<endl;
    xuatb(b,n);
    tong(a,b,c,n);
    cout<<"Mang c: ";
    xuata(c,n);
    return 0;
}

