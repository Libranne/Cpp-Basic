/*Viết chương trình thực hiện các yêu cầu:
 Nhập mảng số nguyên từ bàn phím
 In mảng số nguyên ra màn hình
 Ghi lại mảng các số nguyên vào tệp có tên
là “songuyen.txt”, (sử dụng file văn bản)
 Đọc lại tập các số nguyên từ tệp
“songuyen.txt” vào mảng và hiện các gía
trị đọc được từ file lên màn hình
xay dung duoi dang CTC */
#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;
void nhapmang(int a[],int &n)
{
    cout<<" nhap so phan tu n:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
    }
    void inmang(int a[],int n)
{
    cout<<"\n mang a:";
    for(int i=0;i<n;i++)
        cout<<setw(5)<<a[i];
}
void luumangfile(int a[], int n)
{
    ofstream f;
    f.open("songuyen.txt",ios::out);
    f<<n;
    for(int i=0;i<n;i++)
        f<<a[i]<<endl;
    f.close();
}
void docmangfile(int a[],int &n)
{
    ifstream f;
    string s;
    f.open("songuyen.txt",ios::in);
    getline(f,s);
    n= stoi(s);
    for(int i=0;i<n;i++)
    {
        getline(f,s);
        a[i]=stoi(s);
    }
    f.close();
}
//ham main chay cho lan dau tien
int main()
{
    int n;
    int a[20];
    //nhapmang(a,n);
    docmangfile(a,n);
    inmang(a,n);

    //luumangfile(a,n);
    //docmangfile(a,n);

}
