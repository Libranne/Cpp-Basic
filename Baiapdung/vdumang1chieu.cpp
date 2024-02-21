#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[20],sum;
    int n,i,maxx;
    cout<<" nhap so phan tu n:";cin>>n;//nhap mang
    for( i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"\n mang a:";//xuat mang
    for(i=0;i<n;i++)
        cout<<setw(5)<<a[i];
    sum=0;
    for(i=0;i<n;i++)//tong cac ptu
        sum=sum+a[i];
    cout<<"\n tong cac phan tu trong mang:"<<sum;
    maxx=a[0];
    for(i=0;i<n;i++)
        if(a[i]>maxx) maxx=a[i];
    cout<<"\n gia tri max:"<<maxx;
    int vt=-1,x;
    cout<<"\n nhap gia tri x:";cin>>x;
    for(i=0;i<n;i++)
        if(a[i]==x){
        vt=i;break;}
        if(vt==-1)
            cout<<"\n khong co ptu : " <<x<< " trong day";
        else cout<<"\n co ptu :" <<x<<" tai vi tri:"<<vt;
}
