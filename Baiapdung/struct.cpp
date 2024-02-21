/*Xây dựng cấu trúc SINHVIEN với các thông tin: mã sinh viên, họ tên, điểm trung bình
Áp dụng:
nhập vào danh sách sinh viên
in lại ra màn hình thông tin của các sinh viên đã nhập*/
#include <iostream>
#include<iomanip>
using namespace std;
struct sinhvien
{
    string masv;
    string hoten;
    float diemtb;
};
int main()
{
    sinhvien ds[20];
    int n;
    // nhap ds gom n sinh vien
    cout<<" \n nhap so sinh vien :";cin>>n;
    for(int i=0;i<n;i++)  //ds[i]
    {
        cout<<" \n nhap MSV:";cin>>ds[i].masv;
        cout<<"\n nhap Ho Ten:";
        cin.ignore();
        getline(cin,ds[i].hoten);
        cout<<" \n nhap DTB:";cin>>ds[i].diemtb;
        cout<<"---------------------------------------------------";
    }
    // xuat danh sach gom n sinh vien
    // 2110a000 nguyen thi  8.3
    cout<<" \n danh sach sinh vien:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" \n "<<setw(8)<<ds[i].masv;
        cout<<setw(20)<<ds[i].hoten;
        cout<<setw(7)<<ds[i].diemtb;
    }
}
