/*Viết chương trình thực hiện các yêu cầu:
Nhập danh sách sinh viên, Sinh viên gồm: Họ tên, tuổi, Điểm trung bình
In danh sách sinh viên ra màn hình
Ghi lại danh sách sinh viên vào tệp có tên là “sinhvien.dat”
Đọc lại thông tin sinh viên từ tệp “sinhvien.dat” vào mảng và hiện thông tin lên màn hình*/
#include<bits/stdc++.h>

using namespace std;

    struct svien
    {
        string hoten;
    int tuoi; float dtb;
    };
    //ctc nhap dssv
    void nhapdsvs(int &n,svien ds[])
    {
        cout<<" \n nhap so sv:";cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<" nhap ho ten:";cin.ignore();
            getline(cin,ds [i].hoten);
            cout<<"\n nhap tuoi:";cin>>ds[i].tuoi;
            cout<<" \n nhap dtb:";cin>>ds[i].dtb;
            cout<<"\n--------------------------\n";
        }
    }
//ctc in thong tin dssv len man hinh
void indssv(int n,svien ds[])
{
    cout<<" \n danh sach sv: \n";
    for(int i=0;i<n;i++)
    {
        cout<<" \n "<<setw(15)<<ds[i].hoten;
        cout<<setw(5)<<ds[i].tuoi;
        cout<<setw(7)<<ds[i].dtb;
    }
}
/* // luu dssv vao file " sinhvien.dat"
 void luufiledssv( int n,svien ds[])
 {
     fstream f;
     f.open("sinhvien.dat",ios::out|ios::ate|ios::binary);
     for(int i=0;i<n;i++)
        f.write((char*)&ds[i],sizeof(svien));
     if(!f.good())
     {
         cout<<"\n xay ra loi trong qua trinh ghi file"<<endl;
         return;
     }
     cout<<"\n ghi file thanh cong....."<<endl;
     f.close();
 }
 // doc dssv tu file " sinhvien.dat"
 void docdssvfile(int &n,svien ds[])
 {
     fstream f;
     f.open(" sinhvien.dat",ios::in|ios::ate|ios::binary);// file nhi phan
     int i=0;
     while( !f.eof()) //duyet tuan tu eof=end of file
     {
         f.read((char*) &ds[i],sizeof(svien));
         i++;
     }
     n=i-1;
     cout<<n;
     if(!f.good())
     {
         cout<<"\n xay ra loi trong qua trinh doc file"<<endl;
         return;
     }
     cout<<"\n doc file thanh cong....."<<endl;
     f.close();
 }*/

 void ghifile(svien ds[],int n)
{
    ofstream fileout;
    fileout.open("SINHVIEN.dat",ios::out | ios::ate | ios::binary);
    for(int i=0;i<n;i++)
        fileout.write((char*) &ds[i],sizeof (svien));//ghi tung phan tu con fileout.write((char*) ds,sizeof (SV)*n)ghi ca danh sach
    if (!fileout.good())
    {
        cout<< "\nthuc hien loi : "<<endl;
        return;
    }
    cout<< "\nghi thanh cong "<<endl;
    fileout.close();
}
void docfile(svien ds[],int &n)
{
    ifstream filein;
    filein.open("SINHVIEN.dat",ios::in | ios::binary);
    int i=0;
    while (!filein.eof())//lấy đến cuối cùng
    {
        filein.read((char*) &ds[i],sizeof (svien));
        i++;
    }
    n=i-1;
   if (filein.good())
    {
        cout<< "\nthuc hien loi : "<<endl;
        return;
    }
    cout<< "\ndoc thanh cong "<<endl;
    filein.close();
}




int main()
{
    int n;
    svien ds[10];
    //nhapdsvs(n,ds);
    docfile(ds,n);

    indssv(n,ds);
    //ghifile(ds,n);
    //docdssvfile(n,ds);
    //luufiledssv(n,ds);
}
/*int main()
{
    int n; svien ds[10];
    docdssvfile(n,ds);
    indssv(n,ds);
}*/


