#include <iostream>
#include<iomanip>
using namespace std;
/*Viết chương trình thực hiện các yêu cầu sau:
Nhập vào mảng 2 chiều các số nguyên
In lại mảng 2 chiều đã nhập
Tính tổng các phần tử chẵn của mảng
In các phần tử tại cột thứ k nào đó của mảng, k được nhập từ bàn phím
Cho biết giá trị nhỏ nhất của mảng 2 chiều
Tính tổng các phần trên hàng thứ k nào đó, k được nhập từ bàn phím*/
int main()
{
    int a[10][10];
    int h,c,i,j,sum;
    cout<<" nhap so hang:";cin>>h;
    cout<<" nhap so cot:";cin>>c;
    for(i=0;i<h;i++)
        for(j=0;j<c;j++)
    {
        cout<<"a["<<i<<","<<j<<"]:";
        cin>>a[i][j];
    }
    cout<<"\n cac ptu mang:\n";
    for(i=0;i<h;i++)
    {
        for(j=0;j<c;j++)
            cout<<setw(8)<<a[i][j];
        cout<<"\n";   //cout<<endl;
    }
     sum=0;
    for(i=0;i<h;i++)
        for(j=0;j<c;j++)
        {

            sum=sum+a[i][j];
        }
        cout<<" tong cac ptu mang:"<<sum;
        int schan=0;

            for(i=0;i<h;i++)
        for(j=0;j<c;j++){
                if(a[i][j]%2==0)

            schan=schan+a[i][j];}
        cout<<"\n tong cac ptu chan:"<<schan;
        int k;
        cout<<"\n nhap k:";cin>>k;
        if(k<c&&k>=0)
        {
        for(int i=0;i<h;i++)
        {
            cout<<a[i][k]<<' ';
        }
        }
        else cout<<" khong co cot nay trong mang";
        cout<<endl;
        int mini=a[0][0];
        for(int i=0;i<h;i++)
        for(int j=0;j<c;j++){
            if(mini>a[i][j])
                mini=a[i][j];
        }
        cout<<" phan tu nho nhat:"<<mini;
int sum2=0;
cout<<" \n nhap hang can tinh tong:";cin>>k;
for(int j=0;j<c;j++)
{
    sum2=sum2+a[k][j];
}
cout<<sum2;
return 0;
}
