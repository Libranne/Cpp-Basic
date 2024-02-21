/*Xây dựng chương trình để quản danh sách các HÓA ĐƠN DỊCH VỤ với các dữ liệu lưu trữ như sau:

Số Phòng	Chủ hộ	Điện Thoại	Tháng	Năm	SL DV	Đơn giá	Thành Tiền
2410	Dam Hai Yen	0987687666	10	2021	2	90.000	180.000
2501	Pham Van Hai	0976363663	09	2021	5	50.000	150.000
1003	Dao Huy Hoang	0988777374	09	2021	1	1.000.000	1.000.000
…	…	…	…	…	…	…	…
Xây dựng các CTC thực hiện:
1. Nhập danh sách các HÓA ĐƠN DỊCH VỤ
2. In danh sách các HÓA ĐƠN DỊCH VỤ ra màn hình
3. Lưu toàn bộ HÓA ĐƠN DỊCH VỤ đã có vào file “HDDV.dat”
4. Đọc toàn bộ các HÓA ĐƠN DỊCH VỤ từ file “HDDV.dat” và in ra màn hình
5. Sửa thông tin số lượng của một HÓA ĐƠN DỊCH VỤ theo số phòng từ file “HDDV.dat”
và lưu lại vào file “HDDV.dat”*/

#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
 struct HDDV
 {
     int sophong,thang,nam,sl;
     string chuho,dt;
     float dongia,thanhtien;
 };
 void nhaphddv (int &n,HDDV ds[])
 {
     cout<<" nhap danh sach hoa don:";cin>>n;
     for(int i=0;i<n;i++)
     {
         cout<<" so phong:";
         cin>>ds[i].sophong;
         cout<<" ten chu ho:";cin.ignore();
         getline(cin,ds[i].chuho);
         cout<<" nhap so dien thoai:";
         getline(cin,ds[i].dt);
         cout<<" Thang:";cin>>ds[i].thang;
         cout<<" Nam:";cin>>ds[i].nam;
         cout<<" so luong:";cin>>ds[i].sl;
         cout<<" don gia:";cin>>ds[i].dongia;
        cout<<"\n --------------"<<endl;

     }
 }

 void inhddv (int &n, HDDV ds[])
 {
     cout<<endl<<setw(1);
       cout<<endl<<setw(5)<<"So phong";
       cout<<setw(15)<<"Chu ho";
       cout<<setw(20)<<"Dien thoai";
       cout<<setw(15)<<"Thang";
       cout<<setw(15)<<"Nam";
       cout<<setw(15)<<"SL DV";
       cout<<setw(15)<<"Don gia";
       cout<<setw(15)<<"Thanh tien";
       for(int i=0;i<n;i++)
       {    ds[i].thanhtien=ds[i].sl*ds[i].dongia;

           cout<<setw(5)<<ds[i].sophong;
             cout<<setw(15)<<ds[i].chuho;
               cout<<setw(18)<<ds[i].dt;
                 cout<<setw(17)<<ds[i].thang;
                 cout<<setw(17)<<ds[i].nam;
                 cout<<setw(14)<<ds[i].sl;
                 cout<<setw(16)<<ds[i].dongia;
                 cout<<setw(18)<<ds[i].thanhtien;

       }
   }
void luufile(int n,char ds[])
{
    fstream f;
    f.open("HDDV.dat",ios::out|ios::ate|ios::binary);
    f.write((char*) &n,sizeof(int));
    for(int i=0;i<n;i++)
        f.write((char*) &ds[i],sizeof(HDDV));
    f.close();
    cout<<"\n ghi file thanh cong..."<<endl;
}

void docfile( int &n,char ds[])
{

    fstream f;

    f.open("HDDV.dat",ios::in|ios::binary);
    f.read((char*) &n,sizeof(int));
    for(int i=0; i<n; i++)
    {
        f.read((char*) &ds[i],sizeof(HDDV));
    }
    f.close();
    cout<<"\n doc file thanh cong..."<<endl;

}

void docFile_CapNhat_SoPhong(int &n,HDDV ds[])
{
	fstream f;
    int i;
    docfile(n,ds);
    int sophong;
    cout<<"Nhap so phong can sua:"; cin>>sophong;
    for(int i=0;i<n;i++)
        if(ds[i].sophong == sophong)
        {
            cout<<"Nhap Luong can thay doi:";
            cin>>ds[i].sl;
            ds[i].thanhtien = ds[i].sl * ds[i].dongia;
        }
    cout<<"\n DANH SACH HDSV DA DUOC DOI SO LUONG:"<<endl;
    inhddv(n,ds);
    luufile(n,ds);
}
int main() {
     int n;
    HDDV ds[100];
    nhaphddv(n,ds);
    inhddv(n,ds);
    //luufile(n,ds);
    //docfile(n,ds);
    docFile_CapNhat_SoPhong(n,ds);

}
