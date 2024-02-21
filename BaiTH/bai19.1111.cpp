#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int k,dv,ch,tr;


cout<<"\n Nhap so nguyen duong  :\n"; cin>>k;
if(k>=1000){
    cout<<" nhap lai so:";cin>>k;}
else

cout<<"So "<<k<<" doi sang so La ma la :\n";


tr=k/100;k=k%100; ch=k/10;dv=k%10;

switch (tr)

{case 1:cout<<"C";break;

case 2:cout<<"CC";break;

case 3:cout<<"CCC";break;

case 4:cout<<"CD";break;

case 5:cout<<"D";break;

case 6:cout<<"DC";break;

case 7:cout<<"DCC";break;

case 8:cout<<"DCCC";break;

case 9:cout<<"CM";

}

switch (ch)

{case 1:cout<<"X";break;

case 2:cout<<"XX";break;

case 3:cout<<"XXX";break;

case 4:cout<<"XL";break;

case 5:cout<<"L";break;

case 6:cout<<"LX";break;

case 7:cout<<"LXX";break;

case 8:cout<<"LXXX";break;

case 9:cout<<"XC";

}

switch (dv)

{case 1:cout<<"I";break;

 case 2:cout<<"II";break;

 case 3:cout<<"III";break;

 case 4:cout<<"IV";break;

 case 5:cout<<"V";break;

 case 6:cout<<"VI";break;

 case 7:cout<<"VII";break;

 case 8:cout<<"VIII";break;

 case 9:cout<<"IX";

}


}

