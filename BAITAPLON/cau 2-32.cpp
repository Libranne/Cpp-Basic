//Viết chương trình in ra trung bình cộng, trung bình nhân của 3 số bất kỳ được nhập vào từ bàn phím
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ float a,b,c,tbc,tbn;
    cout <<" nhap a:";cin>>a;
    cout<<"  nhap b:";cin>>b;
    cout<<" nhap c:";cin>>c;
    tbc=(a+b+c)/3;
    tbn=(a*b*c)/3;
    cout<<" trung binh cong cua 3 so la:"<<tbc;
    cout<<" \n trung binh nhan cua 3 so la:"<<tbn;

}
