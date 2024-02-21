#include<bits/stdc++.h>

using namespace std;

int main()
{
    string chuoi,chuoitach,chuoimoi;
    cout<<" Chuoi can nhap: ";
    getline(cin,chuoi);
    cout<<chuoi<<endl;
    cout<<"chuoi can tach :";
    cin>>chuoitach;
    int pos=chuoi.find(chuoitach);
    chuoimoi=chuoi.substr(pos);
    cout <<"chuoi da tach "<<chuoimoi<<endl;
    return 0;
}
