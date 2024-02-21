/*viết các chương trình con thực hiện các công việc sau:
o nhập danh sách các sách gồm các thông tin: tên sách, tên tác giả, nhà xuất bản, năm xuất bản và lưu vào tệp sach.dat;
o hiện danh mục sách từ tệp sach.dat với đầy đủ các thông tin;
o nhập tên sách từ bàn phím, tìm sách vừa nhập và in các thông tin chi tiết ra màn hình;
o thống kê số lượng sách của thập niên 80.
o cho biết tên các quyển sách đã xuất bản cách đây 30 năm.
Viết chương trình chính để gọi các chương trình con đã được viết theo trật tự như trên. Nếu có thể tổ chức chương trình thông qua menu thì sẽ là một điểm cộng.*/
//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;

struct SACH{
    char ten_sach[100], ten_tg[100], nha_XB[100];
    int nam_XB;
};
void nhap_ds( SACH book[], int &n){
    cout<<"Nhap so luong sach: ";
    cin>>n;
    for( int i=0; i<n; i++){
        cout<<"Nhap thong tin sach thu "<<i+1<<endl;
        cout<<"Ten sach: ";
        cin.ignore();
        cin.getline(book[i].ten_sach,100);
        cout<<"Ten tac gia: ";
        cin.getline(book[i].ten_tg,100);
        cout<<"Nha xuat ban: ";
        cin.getline(book[i].nha_XB,100);
        cout<<"Nam xuat ban: ";
        cin>>book[i].nam_XB;
    }
}
void luu_file( SACH book[], int n){
    fstream f;
    f.open("sach.dat", ios::out|ios::binary);
    for( int i=0; i<n; i++)
        f.write((char*) &book[i], sizeof(SACH));

    if(!f.good() ){
        cout<<"\nGhi file that bai!";
    }
    else{
        cout<<"\nGhi file thanh cong!";
    }
    f.close();
}
void doc_file( SACH book[], int &n){
    fstream f;
    f.open("sach.dat", ios::in|ios::binary);
    int i=0;
    while(!f.eof())
        {
        f.read((char *) &book[i],sizeof(SACH));
        i++;
    }
    n=i-1;
    f.close();
    cout<<"\nDoc file thanh cong!"<<endl;
}
void hien_ds(SACH book[], int n){
    cout<<"                                               THONG TIN VE SACH                                                   "<<endl;
    cout<<left;
    cout<<setw(5)<<"STT"<<setw(40)<<"Ten sach "<<setw(30)<<"Ten tac gia "<<setw(30)<<"Nha xuat ban "<<setw(10)<<"Nam xuat ban "<<endl;
    for( int i=0; i<n; i++){
    cout<<setw(5)<<i+1<<setw(40)<<book[i].ten_sach<<setw(30)<<book[i].ten_tg<<setw(30)<<book[i].nha_XB<<setw(10)<<book[i].nam_XB<<endl;
    }
}

void tim_kiem( SACH book[], int n){
    char ten[100];
    cout<<"\nNhap ten sach can tim: ";
    cin.ignore();
    cin.getline(ten,100);
    for( int i=0; i<n; i++){
        if(strcmp(book[i].ten_sach,ten) == 0){
            cout<<"Thong tin sach can tim"<<endl;
            cout<<left;
            cout<<setw(5)<<"STT"<<setw(40)<<"Ten sach"<<setw(30)<<"Ten tac gia "<<setw(30)<<"Nha xuat ban "<<setw(10)<<"Nam xuat ban "<<endl;
            cout<<setw(5)<<i+1<<setw(40)<<book[i].ten_sach<<setw(30)<<book[i].ten_tg<<setw(30)<<book[i].nha_XB<<setw(10)<<book[i].nam_XB<<endl;
        }
    }
}
void thong_ke( SACH book[], int n){
    int dem=0;
    for( int i=0; i<n; i++){
        if(book[i].nam_XB>1979 && book[i].nam_XB<1990){
            dem++;
        }
    }
    cout<<"\nSo luong sach cua thap nien 80: "<<dem<<" quyen"<<endl;
}
void ten_sach( SACH book[], int n){
    cout<<"\nTen sach da xuat ban cach day 30 nam: "<<endl;
    for( int i=0; i<n; i++){
        int year = 2021 - 30;
        if(book[i].nam_XB == year ){
            cout<<book[i].ten_sach<<endl;
        }
    }
}
int main(){
    SACH book[100];
    int n, chon;
    do{
        cout<<"\n=============== DANH SACH CHUC NANG ==============="<<endl;
        cout<<"1. Nhap thong tin sach"<<endl;
        cout<<"2. Hien thong tin sach"<<endl;
        cout<<"3. Tim kiem thong tin sach"<<endl;
        cout<<"4. Thong ke so luong sach cua thap nien 80"<<endl;
        cout<<"5. Sach xuat ban cach day 30 nam"<<endl;
        cout<<"0. Ket thuc chuong trinh"<<endl;
        cout<<"\nMoi chon chuc nang: ";
        cin>>chon;
        switch(chon){
            case 1: nhap_ds(book,n); luu_file(book,n); break;
            case 2: doc_file(book,n); hien_ds(book,n); break;
            case 3: doc_file(book,n); tim_kiem(book,n); break;
            case 4: doc_file(book,n); thong_ke(book,n); break;
            case 5: doc_file(book,n); ten_sach(book,n); break;
            case 0: break;
        }
    } while(chon!=0);
    return 1;
}
