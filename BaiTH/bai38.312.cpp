/*#include<bits/stdc++.h>
using namespace std;
struct SUCKHOE
{
    int nam,thang;
    string hoten,ngaysinh,gioitinh;
    float chieucao,cannang;

};
void nhapds(int &n,SUCKHOE ds[])
{
    cout<<" nhap danh sach so tre kham";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n --------------"<<endl;
        cout<<" nam kham:";
        cin>>ds[i].nam;
        cout<<" thang kham:";cin.ignore();
       cin>>ds[i].thang;
        cout<<" ho ten tre:";getline(cin,ds[i].hoten);
        cout<<" ngay sinh:";cin.ignore();
        getline(cin,ds[i].ngaysinh);
        cout<<" gioi tinh:";getline(cin,ds[i].gioitinh);
        cout<<" chieu cao:";
        cin>>ds[i].chieucao;
        cout<<" can nang:";
        cin>>ds[i].cannang;
    }
}
void inds(int n,thuebao ds[])
{cout<<"\n --------------"<<endl;
       cout<<endl<<setw(1);
       cout<<endl<<setw(5)<<setiosflags(ios::left)<<"STT";
       cout<<setw(20)<<"So thue bao";
       cout<<setw(20)<<"Ho Ten";
       cout<<setw(19)<<"Cuoc phi";
       cout<<setw(19)<<"Ngay lap";
       for(int i=0;i<n;i++)
       {
           cout<<endl<<setw(1)<<setiosflags(ios::left)<<i+1<<")    ";
           cout<<setw(20)<<ds[i].sothuebao;
             cout<<setw(18)<<ds[i].hoten;
               cout<<setw(18)<<ds[i].cuocphi;
                 cout<<setw(18)<<ds[i].ngaylap;
       }
   }
}*/
#include<bits/stdc++.h>
using namespace std;
struct ThongTin{
    int nam,thang,ngay,chieucao,cannang;
    string hoten,gioitinh;
};
void nhap(ThongTin &a){
    cout<<"Nam kham: "; cin>>a.nam;
    cout<<"Thang kham: "; cin>>a.thang;
    cin.ignore();
    cout<<"Ho ten tre: ";getline(cin,a.hoten);
    cout<<"Ngay kham: "; cin>>a.ngay;
    cout<<"Gioi tinh: "; cin>>a.gioitinh;
    cout<<"Chieu cao: "; cin>>a.chieucao;
    cout<<"Can nang: "; cin>>a.cannang;
    cout<<endl;
}
void in(ThongTin a){
    cout<<"Nam kham: "<<a.nam<<" ";
    cout<<"Thang kham: "<<a.thang<<" ";
    cout<<"Ho ten tre: "<<a.hoten<<" ";
    cout<<"Ngay kham: "<<a.ngay<<" ";
    cout<<"Gioi tinh: "<<a.gioitinh<<" ";
    cout<<"Chieu cao: "<<a.chieucao<<"cm"<<" ";
    cout<<"Can nang: "<<a.cannang<<"kg";
    cout<<endl;
}

int main(){
    struct ThongTin ds[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        nhap(ds[i]);
    }
       while(1){
           cout<<"----------MENU---------\n";
        cout<<"1. Tim thong tin tre em theo nam\n";
        cout<<"2. Tim thong tin tre em theo thang\n";
        cout<<"0. Thoat\n";
        int luachon;
        cin>>luachon;
        if(luachon==1){
            int year;
            cin>>year;
            for(int i=0;i<n;i++){
                if(year==ds[i].nam){
                    in(ds[i]);
                }
            }
        }
        if(luachon==2){
            int month;
            cin>>month;
            for(int i=0;i<n;i++){
                if(month==ds[i].nam){
                    in(ds[i]);
                }
            }
        }
        else if(luachon==0) break;
    }
    return 0;
}

