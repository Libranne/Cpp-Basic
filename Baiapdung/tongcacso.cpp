
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,dem=0;
    do{
        cout<<"Ban nhap so: ";cin>>n;
        sum=sum+n;
        dem++;

    }
    while (sum<1000);

    cout<<"Tong cac so ban vua nhap la: "<<sum<<'\n'
        <<"So cac so da nhap la: "<<dem<<'\n'
        <<"Trung binh cac so vua nhap la: "<<sum*1.0/dem;

}


