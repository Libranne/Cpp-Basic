#include<bits/stdc++.h>
using namespace  std ;
void nhapmatran(int a[][100], int &h,int &c)
{
    cout<<"moi nhap so hang : ";
    cin>>h;
    cout<<"moi nhap so cot : ";
    cin>>c;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"moi nhap a["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }


    }
}
void hienmatran(int a[][100],int h,int c)
{
    for (int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";

    }
}
void sophantu_am(int a[][100],int h,int c)
{
    int mang_am[h],demso_am=0;
    for(int i=0; i<h; i++)
    {
        demso_am=0;
        for(int j=0; j<c; j++)
        {
            if(a[i][j]<0)
            {
                demso_am++;
            }
        }
        mang_am[i]=demso_am;
    }
    int hangslmax;
    hangslmax=mang_am[0];
    for(int i=1; i<h; i++)
    {
        if(mang_am[i]>hangslmax)
        {
            hangslmax=mang_am[i];
        }
    }
    cout<<"\n hang co so phan tu am nhieu nhat la : ";
    for(int i=0; i<h; i++)
    {
        if(mang_am[i]==hangslmax)
        {
            cout<<"hang "<<i+1<<" ";
        }
    }
}
bool kt_sochinhphuong(int a)
{
    if(a<1)
    {
        return false;
    }
    int x=sqrt(a);
    return (x*x==a);
}
void xuatsochinhphuong(int a[][100],int h,int c)
{
    cout<<"\n---------vi tri cac so chinh phuong----------\n";
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(kt_sochinhphuong(a[i][j]))
            {
                cout<<"a["<<i<<"]["<<j<<"]"<<" ";
            }
        }
    }

}
void demphantu(int a[][100],int h,int c)
{
    int dem=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]==a[0][0])
            {
                dem++;
            }
        }
    }
    cout<<"\nco "<<dem-1<<" phan tu bang gia tri a[0][0] ";
}

int main ()
{
    int a[100][100],h,c;
    nhapmatran(a,h,c);
    cout<<"-----mang sau khi nhap la------ \n";
    hienmatran(a,h,c);
    sophantu_am(a,h,c);
    xuatsochinhphuong(a,h,c);
    demphantu(a,h,c);
    return 0;
}
