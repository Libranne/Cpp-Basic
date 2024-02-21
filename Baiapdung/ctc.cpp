/*Viết các đoạn chương trình con sau:
Nhập vào một mảng các số nguyên
In lại mảng các số nguyên
Tính tổng các phần tử của mảng
In các phần từ chẵn
Áp dụng các đoạn chương trình con
Tổ chức dưới dạng menu lựa chọn
	1. Nhập mảng số nguyên
	2. In mảng số nguyên
	3. Tính tổng các phần tử mảng
	4. In phần tử chẵn
	0. Dừng chương trình
	Mời bạn chọn: */
#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
//ctc nhap mang cac so nguyen
void nhapmang(int a[],int &n )
{
     cout<<" nhap so phan tu n:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<" a["<<i<<"]:";
        cin>>a[i];
    }
}
//ctc in mang cac so nguyen
void inmang(int a[],int n)
{
    cout<<" mang cac so nguyen:";
    for(int i=0;i<n;i++)
        cout<<setw(7)<<a[i];
}
void tinhtong1(int a[],int n )
{
    int s=0;
    for(int i=0;i<n;i++)
        s+=a[i];
    cout<<" \n tong mang :"<<s;

}
void tinhtong2(int a[],int n )

{
    int s=0;
    for(int i=0;i<n;i++)
        s+=a[i];
    return s;

}
void inphantuchan(int a[], int n )
{
    cout<<" \n cac phan tu chan:";
    for(int i=0;i<n;i++)
        if(a[i]%2==0)
        cout<<setw(7)<<a[i];
}


int main()
{
    int a[10],n;
    int chon;
    do
    {
        cout<<" \n 1. nhap mang so nguyen:";
        cout<<" \n 2. in mang so nguyen: ";
        cout<<" \n 3. tinh tong cac phan tu mang:";
        cout<<" \n 4. in phan tu chan:";
        cout<<" \n 0. dung chuong trinh:";
        cout<<" \n moi ban chon :";
        cin>>chon;
        switch(chon)
        {
            case 1: nhapmang(a,n);break;
            case 2: inmang(a,n);break;
            case 3: tinhtong1(a,n);break;
            cout<<" \n tong mang:"<<tinhtong2(a,n);break;
            case 4: inphantuchan(a,n);break;
            case 0: exit(0);
        }
    }while (chon!=0);
        //end of main
}
