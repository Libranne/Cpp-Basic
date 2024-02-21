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
void xuat(int a[20],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void nhapb(int b[20],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
    }
    cout<<endl;
}
void xuatb(int b[20],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
void tong(int a[20],int b[20],int c[20],int n)
{
    for(int i=0; i<n; i++)
    {
     c[i]=a[i]+b[i];
    }
}
int main()
{
    int a[20],b[20],c[20],n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    nhapa(a,n);
    cout<<" mang a: "<<endl;
    xuat(a,n);
    nhapb(b,n);
    cout<<" mang b: "<<endl;
    xuatb(b,n);
    tong(a,b,c,n);
    cout<<"Mang c: ";
    xuat(c,n);
    return 0;
}

