#include<iostream>
#include<iomanip>
using namespace std;
int main()
{  int n,i,j,a[20];
    cout<<" nhap so phan tu:";cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<" a["<<i<<"]:";cin>>a[i];
        //xoa ptu 0
        if(a[i]==0)
    {
        for(j=i;j<n;j++)
            a[j]=a[j+1];
        n--;i--;
    }
    }
    cout<<" \n mang la:";
    for(i=0;i<n;i++)
        cout<<setw(5)<<a[i];

    int d,x;
    cout<<"\n nhap x :";cin>>x;
    d=0;
    if(a[i]==x)
    {
        d=d+1;
        cout<<" vi tri xuat hien x:"<<i;

    }
    cout<<"\n  so lan x xuat hien:"<<d;
//sap xep
    int kt,tg;
    for(i=0;i<n;i++)
    {
        kt=1;
        for(j=2;j<a[i];j++)
            if(a[i]%j==0)
            kt=0;
        if(kt==1)
        {
            tg=a[i];
            for(j=i;j>0;j--)
                a[j]=a[j-1];
            a[0]=tg;
        }
    }
    cout<<" \n mang da sap xep la:";
    for(i=0;i<n;i++)
        cout<<setw(5)<<a[i];
//tbc
        int tong,dem,tbc;
        tong=0;dem=0;
        for(i=0;i<n;i++)
            if(a[i]%3==0)
        {
            tong+=a[i];
            dem++;
        }
        tbc=tong/dem;
        cout<<" \n tbc cac so chia het cho 3 la:"<<tbc<<endl;


}
