/*Nhập vào một số nguyên từ 1 đến 7, viết ra màn hình thứ tương ứng trong tuần (trong đó: 1 - chủ nhật, 2 - thứ hai, 3 - thứ ba, …) */
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<" nhap so nguyen:";cin>>n;
 switch (n)
 {
     case 1 : cout<<" chu nhat";break;
     case 2 : cout<<" thu hai";break;
     case 3 : cout<<" thu ba";break;
     case 4 : cout<<" thu tu";break;
     case 5 : cout<<" thu nam";break;
     case 6 : cout<<" thu sau";break;
     case 7 : cout<<" thu bay";break;
     default:cout<<" nhap sai so";
 }


}

