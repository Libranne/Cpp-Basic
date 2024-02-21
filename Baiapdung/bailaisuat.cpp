#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    float n;
    cout<<" nhap so von ban dau :";cin>>n;
    t=0;
    while( n < 1000){
            n = n+n*0.1;
            t=t+1;
            }

            cout<<"\n so thang can gui la: "<<t;

}
