/*Viết các hàm thực hiện công việc sau:
 o Nhập ma trận số nguyên kích thước n*m
 o Hiện ma trận vừa nhập ra màn hình
 o Hiện ra hàng có số lượng phần tử âm nhiều nhất.
 o Kiểm tra một số chính phương
 o Liệt kê vị trí (dạng (i,j)) của các phần tử là số chính phương trong ma trận
 o Đếm số lượng phần tử có giá trị bằng phần tử tại vị trí (0,0) của ma trận.
Viết chương trình chính Áp dụng lần lượt các hàm trên*/
#include<bits/stdc++.h>
using namespace std;
void nhapmang2c(int a[][10],int &h,int &c)
{
    cout<<" \n nhap so hang:";cin>>h;
    cout<<" nhap so cot(<=10):";cin>>c;
    for(int i=0;i<h;i++)
        for(int j=0;j<c;j++)
    {
        cout<<" a["<<i<<","<<j<<"]:";
        cin>>a[i][j];
    }
}
//ctc in mang 2c
void inmang2c(int a[][10],int h,int c)
{
    cout<<" \n mang 2 chieu:"<<endl;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<c;j++)
            cout<<setw(8)<<a[i][j];
        cout<<endl;
    }
}

void sophantuam(int a[][10],int h,int c)
{
    int mang_am[h],demso_am=0;
    for(int i=0; i<h; i++)
    {
        demso_am=0;
        for(int j=0; j<c; j++)
        {
            if(a[i][j]<0)
            {
                demso_am++;
            }
        }
        mang_am[i]=demso_am;
    }
    int hangslmax;
    hangslmax=mang_am[0];
    for(int i=1; i<h; i++)
    {
        if(mang_am[i]>hangslmax)
        {
            hangslmax=mang_am[i];
        }
    }
    cout<<"\n hang co so phan tu am nhieu nhat la : ";
    for(int i=0; i<h; i++)
    {
        if(mang_am[i]==hangslmax)
        {
            cout<<"hang "<<i+1<<" ";
        }
    }
}
void kiemtra(int a[][10],int &h,int &c)
{

int n;
    cout << "\nNhap n = ";
    cin >> n;
    int i = 0,j,vt=-1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(a[i][j]==n)
    {
        vt=i;break;}
        if(vt==-1){
            cout<<"\n khong co ptu : " <<n<< " trong day";
           }
        else

        {cout<<"\n co ptu :" <<n<<" trong day\n";

        if(i*i == n){
            cout << n << "  la so chinh phuong!\n";

        }
        ++i;
        cout << n << " khong phai so chinh phuong!\n";
    }


}


bool kt_sochinhphuong(int a)
{
    if(a<1)
    {
        return false;
    }
    int x=sqrt(a);
    return (x*x==a);
}
void lietke(int a[][10],int h,int c)
{
    cout<<"\n---------vi tri cac so chinh phuong----------\n";
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(kt_sochinhphuong(a[i][j]))
            {
                cout<<"a["<<i<<"]["<<j<<"]"<<" ";
            }
        }
    }

}
void demphantu(int a[][10],int h,int c)
{
    int dem=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]==a[0][0])
            {
                dem++;
            }
        }
    }
    cout<<"\nco "<<dem-1<<" phan tu bang gia tri a[0][0] ";
}


    int main()
{
    int h,c,n;
    int a[10][10];
    nhapmang2c(a,h,c);
    inmang2c(a,h,c);
    sophantuam(a,h,c);
    kiemtra(a,h,c);
    lietke(a,h,c);
    demphantu(a,h,c);
}
