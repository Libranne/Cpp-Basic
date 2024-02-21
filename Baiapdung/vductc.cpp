/*Bài 1: Viết hàm tìm 1 ký tự x có trong chuỗi hay không, nếu có xuất ra vị trí của ký tự đó
nhập vào một chuỗi và thực hiện tìm ký tự x nào đó*/
#include <iostream>
#include<iomanip>
using namespace std;
//dinh nghia ham tim ki tu X trong chuoi s
int timkitu(string s, char X )
{
    int vt=-1,n;
    n=s.length();
    for(int i=0;i<n;i++)
        if(s[i]==X)
        vt=i;
    return vt;
}
int main()
{
   string s; char x;
   int vt;
   cout<<" \n nhap chuoi s:";
   getline(cin,s);
   cout<<" \n nhap ki tu x:";cin>>x;
   vt= timkitu(s,x);
   if(vt==-1)
    cout<<" \n khong tim thay";
   else
    cout<<" \n tim thay "<<x<<" tai vi tri: "<<vt;
}
