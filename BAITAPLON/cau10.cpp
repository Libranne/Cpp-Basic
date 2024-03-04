/*viết các chương trình con thực hiện các công việc sau:
o nhập danh sách sinh viên gồm các thông tin: mã sinh viên, tên sinh viên, ngày sinh, giới tính, điểm trung bình; việc nhập sẽ dừng khi nhập mã sinh viên là 0.
o hiện danh sách vừa nhập ra màn hình;
o sắp xếp danh sách sinh viên theo thứ tự alphabet của tên sinh viên và ghi vào tệp sv.dat (dạng nhị phân);
o tìm sinh viên nữ có điểm trung bình thấp nhất.
o đếm số sinh viên nam
Viết chương trình chính để gọi các chương trình con theo trật tự trên. Nếu có thể tổ chức chương trình thông qua menu thì sẽ là một điểm cộng.*/
//Viết cau truc  nhà trọ gồm số phòng ,tên sv ,giá thuê
//Viết hàm chèn thông tin nhà trọ vào giữa danh sách nhà trọ

//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;
struct SINHVIEN{
    char ho_SV[30], ten_SV[20], ngay_sinh[30], gioi_tinh[20];
    //int  ma_SV;
    char ma_SV[20];
    float diem_TB;
};
void nhap_ds( SINHVIEN dssv[], int &n){
    int i=0;
    do{
        cout<<"Nhap sinh vien thu "<<i+1<<endl;
        cout<<"Ma sinh vien: ";
        cin>>dssv[i].ma_SV;
        //if(dssv[i].ma_SV == 0) break;
        if(strcmp(dssv[i].ma_SV,"0")==0){  break;}
        cout<<"Ho va ten dem sinh vien: ";
        cin.ignore();
        cin.getline(dssv[i].ho_SV,30);
        cout<<"Ten sinh vien: ";
        cin.getline(dssv[i].ten_SV,20);
        cout<<"Ngay sinh: ";
        cin.getline(dssv[i].ngay_sinh,30);
        cout<<"Gioi tinh: ";
        cin.getline(dssv[i].gioi_tinh,20);
        cout<<"Diem trung binh: ";
        cin>>dssv[i].diem_TB;
        i++;
    }while(i>0);
    n=i;
}
void hien_ds( SINHVIEN dssv[], int n){
    cout<<"                                                   DANH SACH SINH VIEN                                                                      "<<endl;
    cout<<left;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ma sinh vien"<<setw(30)<<"     Ten sinh vien  "<<setw(20)<<"Ngay sinh"<<setw(15)<<"Gioi tinh"<<setw(15)<<"Diem trung binh"<<endl;
    for( int i=0; i<n; i++){
        cout<<setw(5)<<i+1<<setw(25)<<dssv[i].ma_SV<<setw(10)<<dssv[i].ho_SV<<setw(15)<<dssv[i].ten_SV<<setw(20)<<dssv[i].ngay_sinh<<setw(20)<<dssv[i].gioi_tinh<<setw(15)<<dssv[i].diem_TB<<endl;
    }
}
void sap_xep( SINHVIEN dssv[], int n){
    for( int i=0; i<n-1; i++){
        for( int j=i+1; j<n; j++){
            if(strcmp(dssv[i].ten_SV, dssv[j].ten_SV) > 0){
                    struct SINHVIEN trung_gian = dssv[i];
                    dssv[i] = dssv[j];
                    dssv[j] = trung_gian;
             }
        }
    }
    cout<<"\nSap xep thanh cong!";
}
void luu_file( SINHVIEN dssv[], int n){
    fstream f;
    f.open("sv.dat", ios::out|ios::binary);
    for( int i=0; i<n; i++)
        f.write((char*) &dssv[i], sizeof(SINHVIEN));

    if(!f.good() ){
        cout<<"\nGhi file that bai!";
    }
    else{
        cout<<"\nGhi file thanh cong!";
    }
    f.close();
}
void doc_file( SINHVIEN dssv[], int &n){
    fstream f;
    f.open("sv.dat", ios::in|ios::binary);
    int i=0;
    while(!f.eof())
        {
        f.read((char *) &dssv[i],sizeof(SINHVIEN));
        i++;
    }
    n=i-1;
    f.close();
    cout<<"\nDoc file thanh cong!"<<endl;
}
void nu_TB_min( SINHVIEN dssv[], int n){
    float diemTB_min;
    int x=0, i;
    char GT[] = "nu";
    for( i=0; i<n; i++){
        if(strcmp(dssv[i].gioi_tinh,GT) == 0){
            diemTB_min = dssv[i].diem_TB;
            break;
        }
    }
    for( i=0; i<n; i++){
        if(strcmp(dssv[i].gioi_tinh, GT) == 0){
            if(dssv[i].diem_TB < diemTB_min){
                diemTB_min = dssv[i].diem_TB;
            }
        }
    }
    cout<<"Sinh vien nu co diem trung binh thap nhat: ";
    for( int i=0; i<n; i++){
        if(strcmp(dssv[i].gioi_tinh, GT) == 0){
            if(dssv[i].diem_TB == diemTB_min){
                cout<<dssv[i].ho_SV<<" "<<dssv[i].ten_SV<<endl;
            }
        }
    }
}
void dem_SV( SINHVIEN dssv[], int n){
    int dem=0;
    char gt[] = "nam";
    for( int i=0; i<n; i++){
        if(strcmp(dssv[i].gioi_tinh,gt) == 0){
            dem++;
        }
    }
    cout<<"So sinh vien nam: "<<dem<<" nguoi"<<endl;
}
struct nhatro
{
    int sophong;
    char tensv[100];
    float giathue;
};
int chenthongtin(int s[],int s1[])
{

}
int main(){
    SINHVIEN dssv[100];
    int n, chon;
    do{
        cout<<"\n=============== DANH SACH CHUC NANG ==============="<<endl;
        cout<<"1. Nhap danh sach sinh vien"<<endl;
        cout<<"2. Hien thi danh sach sinh vien"<<endl;
        cout<<"3. Sap xep danh sach sinh vien theo thu tu alphabet"<<endl;
        cout<<"4. Sinh vien nu co diem trung binh thap nhat"<<endl;
        cout<<"5. Dem so sinh vien nam"<<endl;
        cout<<"6. Doc thong tin sinh vien"<<endl;
        cout<<"0. Thoat chuong trinh"<<endl;
        cout<<"\nMoi chon chuc nang: ";
        cin>>chon;
        switch(chon){
            case 1: nhap_ds(dssv,n); break;
            case 2: hien_ds(dssv,n); break;
            case 3: sap_xep(dssv,n); luu_file(dssv,n); hien_ds(dssv,n); break;
            case 4: doc_file(dssv,n); nu_TB_min(dssv,n); break;
            case 5: doc_file(dssv,n); dem_SV(dssv,n); break;
            case 6: doc_file(dssv,n); break;
            case 0: break;
        }

    }while(chon!=0);
    return 1;
}
