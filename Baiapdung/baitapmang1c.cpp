#include <iostream>
#include<iomanip>
#include<math.h>
/*Viết chương trình thực hiện các yêu cầu sau:
Nhập vào một mảng các số nguyên
In lại mảng đã nhập
Sắp xếp mảng theo thứ tự tăng dần và in lại kết quả sau sắp xếp
Xóa bỏ phần tử có vị trí k nào đó trong mảng*/
using namespace std;

int main()
{
    int a[10],n,i,j,tg;
    cout<<" nhap n:";cin>>n;
    for( i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<" mang a:";
    for(int i=0;i<n;i++)
        cout<<setw(5)<<a[i];

    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
    if(a[i]>a[j])
    {tg=a[i];a[i]=a[j];a[j]=tg;}
    cout<<" mang da sap xep:";
    for(int i=0;i<n;i++)
        cout<<a[i]<<'\t';

        int vtx;
        cout<<"\n nhap vi tri muon xoa:";cin>>vtx;
        for(int i=vtx;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        cout<<" mang sau khi xoa:";
        for(int i=0;i<n;i++)
            cout<<a[i]<<' ';

            int vtc,scc;
            cout<<"\n nhap vi tri muon chen:";cin>>vtc;
            cout<<"\n nhap so can chen:";cin>>scc;
            for(int i=n-1;i>=vtc;i--)
                a[i+1]=a[i];
            a[vtc]=scc;
            n++;
            cout<<"  mang sau khi them:"<<endl;
            for(i=0;i<n;i++)
                cout<<a[i]<<' ';
}
