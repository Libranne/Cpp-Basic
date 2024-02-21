#include<bits/stdc++.h>
using namespace std;

struct hoadon{
    int sp,thang,nam,sl,dg,tien;
    string ch,sdt;
};

void Nhap_1(hoadon &x){
    cin.ignore();
    cout << "Nhap so phong: "; cin>> x.sp;
    cin.ignore();
    cout << "Nhap ten chu ho: "; getline(cin,x.ch);
    cout << "Nhap so dien thoai: "; getline(cin,x.sdt);
    cout << "Nhap thang: "; cin>> x.thang;
    cout << "Nhap nam: "; cin>> x.nam;
    cout << "Nhap so luong dich vu: "; cin>> x.sl;
    cout << "Nhap don gia: "; cin>> x.dg;
    x.tien=x.sl*x.dg;
}

void nhapds(hoadon ds[], int&n){
    n=0;
    cout<<"Nhap so luong hoa don: ";cin>>n;
    cout<<"\n========================================================\n";
    for(int i=0;i<n;i++){
        Nhap_1(ds[i]);
        cout<<"\n==============================\n";
    }
}

void hiends(hoadon ds[], int&n){
    if(n==0){
        cout<<"Danh sach chua duoc nhap\n";
        return ;
    }
    for (int i=0;i<n;i++){
        cout<<"\nSo phong: "<<ds[i].sp
            <<"\t|\tTen chu ho: "<<ds[i].ch
            <<"\t|\tSo dien thoai: "<<ds[i].sdt
            <<"\t|\tThoi gian: "<<ds[i].thang<<"/"<<ds[i].nam
            <<"\t|\tSo luong: "<<ds[i].sl
            <<"\t|\tDon gia: "<<ds[i].dg
            <<"\t|\tThanh tien: "<<ds[i].tien
            <<"\n\n-----------------------------------------------------------------------------------\n";
    }
}

void luufile(hoadon ds[], int &n){
    fstream f;
	f.open("HDDV.dat", ios::out|ios::ate|ios::binary);
	f.write((char*)&n, sizeof(int));
	for(int i=0;i<n;i++)
		f.write((char*) &ds[i], sizeof(hoadon));
	f.close();
	if(!f.good()){
        cout<<"\nXay ra loi trong qua trinh ghi file"<<endl;
        return ;
    }
	cout<<"\n Ghi file thanh cong..."<<endl;
}


void docfile(hoadon ds[], int &n){
    fstream f;
	f.open("HDDV.dat", ios::in|ios::binary);
	f.read( (char*) &n, sizeof(int) );
	for(int i=0;i<n;i++)
		f.read( (char*) &ds[i], sizeof(hoadon) );
	f.close();
	cout<<"\n Doc file thanh cong\n";
}

void docfile_capnhat(hoadon ds[],int &n){
    fstream f;
    int i;

    docfile(ds,n);
    hiends(ds,n);
    int soPhong;
    cout<<"Nhap so phong can sua: ";cin>>soPhong;
    for( int i=0;i<n;i++){
        if(ds[i].sp==soPhong){
            cout<<"Moi nhap lai so luong: ";
            cin>>ds[i].sl;
            ds[i].tien=ds[i].sl*ds[i].dg;
        }
    }
    cout<<"Moi chon 2 de xem lai file da cap nhat\n";
    luufile(ds,n);
}

int main(){
    int n;
    hoadon ds[10000];
    while(true){
        cout<<"========================= Option ======================"
            <<"\n\t 1. Nhap danh sach cac hoa don"
            <<"\n\t 2. Hien danh sach hoa don"
            <<"\n\t 3. Luu danh sach vao file"
            <<"\n\t 4. Doc danh sach tu file"
            <<"\n\t 5. Sua du lieu "
            <<"\n\t 0. Thoat khoi chuong trinh"
            <<"\n========================================================"
            <<"\n\t Moi ban chon option: ";
            int option;
            cin>>option;
            switch(option){
                case 1: nhapds(ds,n);break;
                case 2: hiends(ds,n); break;
                case 3: luufile(ds,n); break;
                case 4: docfile(ds,n); cout<<"Moi chon 2 de xem ket qua"<<endl; break;
                case 5: docfile_capnhat(ds,n); break;
                case 0: cout<<"Cam on vi da su dung\n"; return 0; break;
                default: cout<<"\nLua chon khong phu hop\n";break;
            }
            system("pause");
            system("cls");
    }
    return 0;
}
