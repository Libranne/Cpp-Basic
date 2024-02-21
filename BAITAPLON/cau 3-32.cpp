/*<** Viết chương trình nhập hai số nguyên từ bàn phím. In ra tổng, tích, hiệu và thương của 2 số đó.>*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
int a,b,tong,hieu,tich,thuong;
cout<<" nhap a:";cin>>a;
cout<<" nhap b:";cin>>b;
tong=a+b;hieu=a-b;tich=a*b;thuong=a/b;
cout<<" tong 2 so la:"<<tong;
cout<<" \n hieu 2 so la:"<<hieu;
cout<<" \n tich 2 so la:"<<tich;
cout<<" \n thuong 2 so la:"<<thuong;

}
