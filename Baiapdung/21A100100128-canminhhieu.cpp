//Cấn Minh Hiếu
/* Cho thông tin của Máy Tính gồm: Mã máy tính, tên máy tính, số lượng, đơn giá, thành tiền ( =số lượng * đơn giá).
 Viết chương trình thực hiện nhập danh sách các Máy Tính khác nhau từ bàn phím.
  Sau đó in danh sách các Máy Tính đã nhập lên màn hình.
   Tính tổng số tiền của tất cả các Máy Tính đã nhập.
    Có thể tổ chức dưới dạng hàm (CTC).*/
#include <iostream>
#include<iomanip>
using namespace std;

struct maytinh
{
    string mamt;
    string tenmt;
    int soluong;
    int dongia;
    int tien,s,i;
};

void dsmaytinh(maytinh ds[],int &n)
{
    cout<<" Nhap so loai may tinh : "; cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"\n Nhap ten may tinh : ";
			cin.ignore();
			getline(cin,ds[i].tenmt);

			cout<<"\n Nhap ma may tinh: ";
			cin.ignore();
			getline(cin,ds[i].mamt);
			cout<<"\n nhap so luong may : ";
			cin>>ds[i].soluong;
			cout<<"\n Nhap don gia : "; cin>>ds[i].dongia ;

			ds[i].tien=ds[i].dongia*ds[i].soluong;
			cout<<"\n -------------------------\n";
		}
}

    void inmt( maytinh x)
    {
      cout<<" \n "<<setw(8)<<x.mamt;
        cout<<setw(20)<<x.tenmt;
        cout<<setw(7)<<x.soluong;
        cout<<setw(7)<<x.dongia;
        cout<<setw(7)<<x.tien;
    }
    void indsmaytinh(maytinh ds[],int n)
    {
        cout<<"\n danh sach may tinh: \n";
        for(int i=0;i<n;i++)
            inmt(ds[i]);
    }
 void tongtien(maytinh ds[],int n)
    {
        int s =0;
        for( int i=0;i<n;i++)
            s= s+ ds[i].tien;
        cout<<" \n tong tien may :"<<s;
    }

        int main()
{
    maytinh ds[100];int n;

    dsmaytinh(ds,n);
    indsmaytinh( ds,n);
    tongtien(ds,n);
}
