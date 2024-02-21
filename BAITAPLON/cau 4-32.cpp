/* Viết chương trình nhập vào từ bàn phím n số nguyên và in ra màn hình giá trị lớn nhất trong các số vừa nhập vào (Không sử dụng mảng)*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{   int n,maxx=-1000000,i,x;

    cout<<" nhap n:";cin>>n;
    for(i=0;i<n;i++){
    cout<<" nhap x:";
    cin>>x;
        if(x>maxx) maxx=x;}


    cout<<" gia tri max:"<<maxx;


}
