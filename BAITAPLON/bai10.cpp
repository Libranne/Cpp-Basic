/*viết các chương trình con thực hiện các công việc sau:
o nhập danh sách sinh viên gồm các thông tin: mã sinh viên, tên sinh viên, ngày sinh, giới tính, điểm trung bình; việc nhập sẽ dừng khi nhập mã sinh viên là 0.
o hiện danh sách vừa nhập ra màn hình;
o sắp xếp danh sách sinh viên theo thứ tự alphabet của tên sinh viên và ghi vào tệp sv.dat (dạng nhị phân);
o tìm sinh viên nữ có điểm trung bình thấp nhất.
o đếm số sinh viên nam
Viết chương trình chính để gọi các chương trình con theo trật tự trên. Nếu có thể tổ chức chương trình thông qua menu thì sẽ là một điểm cộng.*/
#include<bits/stdc++.h>
#include<string>
using namespace std;

struct SinhVien{
    string tensv,ngaysinh,gioitinh;
    char masv[30] ;
    float dtb;
};

void nhapDSSV(int &n, SinhVien ds[])
{ int i=0;
  do{
    cout<<"Nhap ma sinh vien:";cin.ignore(); gets(ds[i].masv);
    if(strcmp(ds[i].masv,"0")==0){  break;}

    cout<<"Nhap ten sinh vien:"; getline(cin, ds[i].tensv);
    cout<<" Nhap ngay sinh:";getline(cin, ds[i].ngaysinh);
    cout<<" Nhap gioi tinh:";getline(cin, ds[i].gioitinh);
    cout<<"Nhap DTB:"; cin>>ds[i].dtb;
    i=i+1;
  }while(strcmp(ds[i-1].masv,"0")!=0);
  n=n+1;
}
//CTC in DS sinh vien
void inDSSV(int n, SinhVien ds[])
{
  cout<<"\n ==========";
  cout<<"\n DSSV:"<<endl;
  for(int i=0;i<n;i++)
  {

    cout<<setw(20 )<<ds[i].masv;
    cout<<setw(15 )<<ds[i].tensv;
    cout<<setw(7)<<ds[i].ngaysinh;
    cout<<setw(7)<<ds[i].gioitinh;
    cout<<setw(7)<<ds[i].dtb;
  }
}

// DOC GHI FILE THEO KIEU CO LUU N
//CTC ghi DSSV vao file
void ghiDSSVFile(int n, SinhVien ds[])
{
  ofstream f;
  f.open("sinhvien.dat", ios::out|ios::binary);
  f.write((char *)&n, sizeof(int));
  f.write((char *) ds, sizeof(SinhVien)*n);
  f.close();
  if(!f.good())
  {
    cout<<"\n Xay ra loi trong khi ghi file"<<endl;
    return;
  }
  cout<<"\n Ghi file thanh cong theo cach 1...."<<endl;
}
//CTC doc DSSV tu File
void docDSSVFile(int &n, SinhVien ds[])
{
  ifstream f;
  f.open("sinhvien.dat", ios::in| ios::binary);
  if (!f)
  {
    cout<<"\n Khong mo duoc file"<<endl;
    return;
  }
  f.read((char *) &n, sizeof(int));
  cout<<"\n n = "<<n<<endl;
  f.read((char *) ds, sizeof(SinhVien)*n);
  f.close();
  cout<<"\n Doc file thanh cong theo cach 1...."<<endl;
}

// DOC GHI FILE THEO KIEU KHONG LUU N
void ghiDSSVFile2(int n, SinhVien ds[])
{
    fstream f;
    f.open("student2.dat", ios::out|ios::binary);
    for(int i=0; i< n; i++)
        f.write((char *) &ds[i],sizeof(SinhVien));

    if(!f.good())
    {
        cout<<"\n Xay ra loi trong khi ghi file cach 2"<<endl;
        return;
    }
    cout<<"\n Ghi file thanh cong theo cach 2...."<<endl;
     f.close();
}

void docDSSVFile2(int &n, SinhVien ds[])
{
    fstream f;
    f.open("student2.dat", ios::in|ios::binary);
    int i=0;
    while(!f.eof()){
        f.read((char *)&ds[i], sizeof(SinhVien));
        i++;
    }
    n = i-1;
    f.close();
    cout<<"\n Doc file thanh cong theo cach 2...."<<endl;
}


int main() {
  SinhVien a[10];
  int n,chon;
  do
  {
    cout<<"\n 1. Nhap DSSV";
    cout<<"\n 2. In DSSV";
    cout<<"\n 3. Luu DSSV vao File";
    cout<<"\n 4. Doc DSSV tu File";
    cout<<"\n 5. Luu DSSV vao File cach 2";
    cout<<"\n 6. Doc DSSV tu File cach 2";
    cout<<"\n 0. Thoat";
    cout<<"\n Moi ban chon:";
    cin>>chon;
    switch(chon)
    {
    case 1:
      nhapDSSV(n,a);
      break;
    case 2:
      inDSSV(n,a);
      break;
    case 3:
      ghiDSSVFile(n,a);
      break;
    case 4:
      docDSSVFile(n,a);
      inDSSV(n,a);
      break;
    case 5:
      ghiDSSVFile2(n,a);
      break;
    case 6:
      docDSSVFile2(n,a);
      inDSSV(n,a);
      break;
    case 0:
      break;
    }
  }while(chon!=0);
  return 0;
}

