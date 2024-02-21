/*Bài 2: Viết các đoạn chương trình con sau:
Nhập vào một mảng hai chiều các số thực
In lại mảng hai chiều các số thực
Áp dụng các đoạn chương trình con trên thực hiện nhập vào một mảng các số và in ra các kết quả tương ứng*/
#include <iostream>
#include<iomanip>
using namespace std;
// ctc nhap mang 2 c cac so thuc
void nhapmang2c(float a[][10],int &h,int &c)
{
    cout<<" \n nhap so hang:";cin>>h;
    cout<<" nhap so cot(<=10):";cin>>c;
    for(int i=0;i<h;i++)
        for(int j=0;j<c;j++)
    {
        cout<<" a["<<i<<","<<j<<"]:";
        cin>>a[i][j];
    }
}
//ctc in mang 2c
void inmang2c(float a[][10],int h,int c)
{
    cout<<" \n mang 2 chieu:"<<endl;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<c;j++)
            cout<<setw(8)<<a[i][j];
        cout<<endl;
    }
}
int main()
{
    int h,c;
    float a[10][10];
    nhapmang2c(a,h,c);
    inmang2c(a,h,c);
    return 0;
}
