
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float kg,m,BMI;
    cout<<" nhap trong luong :";cin>>kg;
    cout<<" nhap chieu cao :";cin>>m;
    BMI=kg/(m*m);cout<<" chi so BMI :"<<BMI;
    if(BMI<18.5)
    {
        cout<<" duoi chuan";
    }else if(BMI<=25){ cout<<" chuan";}
    else if(BMI<=30){ cout<<" thua can ";}
    else if( BMI<=40){ cout<<" beo,can giam can";}
    else if(BMI>40){ cout<<" rat beo, can giam can ngay";}





}

