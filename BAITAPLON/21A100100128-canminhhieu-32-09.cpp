/*viết các chương trình con thực hiện các công việc sau:
o nhập danh sách các sách gồm các thông tin: tên sách, tên tác giả, nhà xuất bản, năm xuất bản và lưu vào tệp sach.dat;
o hiện danh mục sách từ tệp sach.dat với đầy đủ các thông tin;
o nhập tên sách từ bàn phím, tìm sách vừa nhập và in các thông tin chi tiết ra màn hình;
o thống kê số lượng sách của thập niên 80.
o cho biết tên các quyển sách đã xuất bản cách đây 30 năm.
Viết chương trình chính để gọi các chương trình con đã được viết theo trật tự như trên. Nếu có thể tổ chức chương trình thông qua menu thì sẽ là một điểm cộng.*/
#include<bits/stdc++.h>
using namespace  std ;

struct sach
{
    string tensach,tentg,nhaxb;
    int namxb;
};
void nhapsach(int &n, sach ds[])
{
    cout<<" nhap so quyen sach:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n Ten sach:";cin.ignore();
        getline(cin,ds[i].tensach);
        cout<<"Ten tac gia:";
        getline(cin,ds[i].tentg);
        cout<<"Nha xuat ban:";
        getline(cin,ds[i].nhaxb);
        cout<<"Nam xuat ban:";
        cin>>ds[i].namxb;
        cout<<"---------------------";
    }

}

void inds(int&n, sach ds[]){
    if(n==0){
        cout<<"Danh sach chua duoc nhap\n";
        return ;
    }
    for (int i=0;i<n;i++){
        cout<<setw(15)<<ds[i].tensach
            <<setw(15)<<ds[i].tentg
            <<setw(15)<<ds[i].nhaxb
            <<setw(15)<<ds[i].namxb

            <<"\n\n-----------------------------------------\n";
    }
}
void luufile(int n, sach ds[])
{
  ofstream f;
  f.open("sach.dat", ios::out|ios::binary);
  f.write((char *)&n, sizeof(int));
  f.write((char *) ds, sizeof(sach)*n);
  f.close();
  if(!f.good())
  {
    cout<<"\n Xay ra loi trong khi ghi file"<<endl;
    return;
  }
  cout<<"\n Ghi file thanh cong "<<endl;
}
void docfile(int &n, sach ds[])
{
    ifstream filein;
    filein.open("sach.dat",ios::in | ios::binary);
    int i=0;
    while (!filein.eof())//lấy đến cuối cùng
    {
        filein.read((char*) &ds[i],sizeof (sach));
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
   /* void timkiem( int &n,sach ds[]) {int MAX;
    sach arrayFound[MAX];
    char tensach[30];
    int found = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tensach, ds[i].tensach);
        if(strstr(strupr(tensach), strupr(tensach))) {
            arrayFound[found] = ds[i];
            found++;
        }
    }
    show(arrayFound, found);
}*/
/*void timTheoTen(struct sach* ds, int &n) {
	char ten[20];
	cout<<"Nhap ten: ";cin>>n;


	int i, timsach = 0;
	for(i = 0; i <n; i++) {
		if(strcmp(ten, ds[i].tensach) == 0) {
			inds(ds[i]);
			timSV = 1;
		}
	}
	if(timsach == 0) {
		cout<<"Khong co !\n"<< ten;
	}
}*/

int main()
{
int n;
    sach ds[10000];
    while(true){
        cout
            <<"\n\t 1. Nhap danh sach cac quyen sach"
            <<"\n\t 2. Hien danh sach quyen sach"
            <<"\n\t 3. Luu danh sach vao file"
            <<"\n\t 4. Doc danh sach tu file"
            /*<<"\n\t 5. nhập tên sách từ bàn phím, tìm sách vừa nhập và in các thông tin chi tiết ra màn hình "
            <<"\n\t 6.thống kê số lượng sách của thập niên 80"
            <<"\n\t 7. cho biết tên các quyển sách đã xuất bản cách đây 30 năm"*/

            <<"\n\t 0. Thoat khoi chuong trinh"
            <<"\n========================================================"
            <<"\n\t Moi ban chon : ";
            int option;
            cin>>option;
            switch(option){
                case 1: nhapsach(n,ds);break;
                case 2: inds(n,ds); break;
                case 3: luufile(n,ds); break;
                case 4: docfile(n,ds); cout<<"Moi chon 2 de xem ket qua"<<endl; break;
                /*case 5: docfile_capnhat(ds,n); break;
                case 6:
                case 7:*/
                case 0: cout<<"Cam on vi da su dung\n"; return 0; break;
                default: cout<<"\nLua chon khong phu hop\n";break;
            }

    }
    return 0;
}


