#include<bits/stdc++.h>
using namespace std;
void nhap(int a[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    cout<<endl;
}
void xuat(int a[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void nhapmangb(int b[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
    }
    cout<<endl;
}
void xuatmangb(int b[100],int n)
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
    nhap(a,n);
    cout<<"Xuat mang a: "<<endl;
    xuat(a,n);
    nhapmangb(b,n);
    cout<<"Xuat mang b: "<<endl;
    xuatmangb(b,n);
    tong(a,b,c,n);
    cout<<"Mang c: ";
    xuat(c,n);
    return 0;
}
