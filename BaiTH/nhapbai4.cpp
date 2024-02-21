#include<bits/stdc++.h>
using namespace std;
int main(){
	string name;
	long tienCong,tamUng,duocHuong, duocLinh;
	int soNgay;
	cout<<"Nhap ten nguoi linh luong : "; getline(cin,name);
	do{
			cout<<"Nhap tien cong 1 ngay : "; cin>>tienCong;
			if(tienCong<=0) cout<<"Nhap lai tien cong!"<<endl;
	}while(tienCong<=0);
    do{
			cout<<"Nhap so ngay lam viec trong thang : "; cin>>soNgay;
			if(soNgay<0||soNgay>31) cout<<"Nhap lai so ngay lam viec trong thang!"<<endl;
	}while(tienCong<0||soNgay>31);

    do{
				cout<<"Nhap so tien da tam ung : "; cin>>tamUng;
			if(tamUng<0) cout<<"Nhap lai so tien da tam ung!"<<endl;
	}while(tienCong<0);
	duocHuong = soNgay*tienCong;
	duocLinh=duocHuong-tamUng;
	cout<<"\n====================================\n";
	cout<<"Ong/ba: "; cout<<setw(20)<<name;
	cout<<"\nSo tien duoc huong: "; cout<<setw(10)<<duocHuong;
	cout<<"\nSo tien da tam ung: "; cout<<setw(10)<<tamUng;
		cout<<"\nSo tien con duoc linh: "; cout<<setw(10)<<duocLinh<<endl;
    return 0;
}
