/*Cho thông tin Ăn bán trú của Học sinh gồm các thông tin: Họ tên học sinh, lớp, Tháng, số buổi ăn
Viết các CTC thực hiện lần lượt các yêu cầu sau:
1Nhập danh sách ăn bán trú
2 In lại danh sách ăn bán trú
 3 Tính tổng tiền ăn bán trú của toàn bộ danh sách(=so buoi an * 50000)
4 Liệt kê danh sách ăn bán trú của một lớp trong một tháng nào đó
5 Sắp xếp danh sách Ăn bán trú theo Tháng
 6 Sắp xếp danh sách Ăn bán trú theo Tien an
Liệt kê chi tiết danh sách ăn bán trú của một học sinh nào đó theo tên
Chương trình chính: Tạo menu lựa chọn để cho phép thực hiện lần lượt các yêu cầu trên*/
#include <iostream>
#include<iomanip>
using namespace std;
// khai bao cau truc bantru
struct bantru
{
    string hoten;
    string lop;
    int thang,nam,sobuoian;
    int tienan;//=sobuoian*50000
};
// nhap danh sach ban tru
void nhapdsbantru(bantru ds[],int &n)
{
    cout<<" nhap so hoc sinh an ban tru:";cin>>n;
    for(int i=0;i<n;i++)  //ds[i]
    {
        cout<<" nhap ho ten:";cin.ignore();
        getline(cin,ds[i].hoten);

        cout<<" nhap lop:"; getline(cin,ds[i].lop);

        cout<<" nhap thang:"; cin>>ds[i].thang;

        cout<<" nhap nam:";cin.ignore(); cin>>ds[i].nam;

        cout<<" nhap so buoi an:";cin.ignore(); cin>>ds[i].sobuoian;

        ds[i].tienan = ds[i].sobuoian*50000;
        cout<<" \n----------------------\n";
    }
}
    // in danh sach ban tru
    // can minh hieu 3b0    10  2020    20  1000000
    void inbantru( bantru x)
    {
      cout<<left<<setw(15)<<x.hoten;
      cout<<" lop:"<<setw(5)<<x.lop;
      cout<<" thang:"<<setw(5)<<x.thang;
      cout<<setw(5)<<x.nam;
      cout<<setw(5)<<x.sobuoian;
      cout<<setw(15)<<x.tienan;
    }
    void indsbantru(bantru ds[],int n)
    {
        cout<<"\n danh sach ban tru: \n";
        for(int i=0;i<n;i++)
            inbantru(ds[i]);
    }
    // tinh tong tien an ban tru
    void tinhtongtien(bantru ds[],int n)
    {
        int s =0;
        for( int i=0;i<n;i++)
            s= s+ ds[i].tienan;
        cout<<" \n tong tien an:"<<s;       //returm s;
    }
    // liet ke ds an ban tru cua mot lop trong 1 thang
    void thongke_lop_thang(bantru ds[],int n)
    {
        string lop;
        int thang;
        cout<<" nhap lop can thong ke:";cin.ignore();getline(cin,lop);

        cout<<" nhap thang can thong ke:";cin>>thang;

        for( int i=0;i<n;i++)
            if(ds[i].lop== lop&&ds[i].thang== thang)
            inbantru(ds[i]);
    }
    void swap( bantru &x,bantru &y)
    {
        bantru tg;
        tg=x;
        x=y;
        y=tg;
    }
    //  Sắp xếp danh sách Ăn bán trú theo Tháng
    void sapxep_thang(bantru ds[],int n)    //interchangesort
    {
        bantru tg;
        for ( int i=0;i<n;i++)
            for( int j=j+1;j<n;j++)
            if(ds[i].thang>ds[j].thang)
                //swap(ds[i],ds[j]);
        {
            tg=ds[i];
            ds[i]= ds[j];
            ds[j]= tg;
        }
        indsbantru(ds,n);    // in sau khi sap xep
    }
    //  Sắp xếp danh sách Ăn bán trú theo tien an giam dan
    void sapxep_tienan(bantru ds[],int n)
    {
        bantru tg;
        for ( int i=0;i<n;i++)
            for( int j=j+1;j<n;j++)
            if(ds[i].tienan>ds[j].tienan)
                //swap(ds[i],ds[j]);
        {
            tg=ds[i];
            ds[i]= ds[j];
            ds[j]= tg;
        }
        indsbantru(ds,n);
    }
    void inbantru_tenhs(bantru ds[],int n)
    {

    }
    //===========chuong trinh chinh=========
    // tao menu lua chon
int main()
{
    bantru ds[100];
    int n,chon;
    do{
        cout<<"\n 1. nhap DS an ban tru:";
        cout<<"\n 2. in Ds an ban tru:";
        cout<<"\n 3. tong tien an ban tru:";
        cout<<" \n 4. liet ke an ban tru theo thang-lop:";
        cout<<"\n 5.sap xep an ban tru theo thang ";
        cout<<"\n 6.sap xep an ban tru theo tien an";
        cout<<"\n 0. dung chuong trinh";
        cout<<" \n moi ban chon : ";
        cin>>chon;
        switch(chon)
        {
            case 1: nhapdsbantru(ds,n); break;
            case 2:indsbantru(ds,n);break;
            case 3:tinhtongtien(ds,n);break;
            case 4:thongke_lop_thang(ds,n);break;
            case 5:sapxep_thang(ds,n);break;
            case 6:sapxep_tienan(ds,n);break;
            case 7:break;
                case 0:exit(0);
        }
    }while(chon!=0);


}
