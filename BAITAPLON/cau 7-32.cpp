/*Viết các hàm thực hiện:
o Nhập vào 1 mảng các số nguyên gồm n phần tử (0<=n<=50)
o In ra màn hình 1 mảng các số nguyên
o Đếm số phần tử lẻ trong mảng các số nguyên
o Cho biết giá trị nhỏ nhất của mảng số nguyên
o Tìm kiếm một phần tử x nào đó trong mảng các số nguyên
o Sắp xếp các phần tử của mảng các số nguyên theo thứ tự giảm dần
Viết chương trình chính Áp dụng lần lượt các hàm trên*/
//-viết hàm chèn thêm phần tử có giá trị bằng phần tử max vào giữa dãy
#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int &n)
{
    cout<<" nhap so phan tu n:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<" a["<<i<<"]:";
        cin>>a[i];
    }
}
//ctc in mang cac so nguyen
void inmang(int a[],int n)
{
    cout<<" mang cac so nguyen:";
    for(int i=0;i<n;i++)
        cout<<setw(7)<<a[i];
}
void demle(int a[],int &n)
{
    cout<<"\n so phan tu le :";
     for(int i=0;i<n;i++)
        if(a[i]%2==1)
        cout<<setw(7)<<a[i];
}
void nhonhat(int a[],int n)
{
int minn=a[0],i;
    for(i=0;i<n;i++)
        if(a[i]<minn) minn=a[i];
    cout<<"\n gia tri nho nhat:"<<minn;

}
void timkiem(int a[],int &n)
{ int vt=-1,x,i;
    cout<<"\n nhap gia tri x:";cin>>x;
    for(i=0;i<n;i++)
        if(a[i]==x){
        vt=i;break;}
        if(vt==-1)
            cout<<"\n khong co ptu : " <<x<< " trong day";
        else cout<<"\n co ptu :" <<x<<" tai vi tri:"<<vt;
}
void sapxep(int a[],int n)
{ int i,j,tg;
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
    if(a[i]>a[j])
    {tg=a[i];a[i]=a[j];a[j]=tg;}
    cout<<"\n mang da sap xep: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<'\t';
}
void maxx(int a[],int n)
{
int maxx=a[0],i;
    for(i=0;i<n;i++)
        if(a[i]>maxx) maxx=a[i];
    cout<<"\n gia tri lon nhat:"<<maxx;

}
void chenmax(int a[],int &n,int vt,int so)
{


        int i;
        cout<<"\n chen phan tu max vao giua day:";
        for(i=0;i<n;i--)
            {
        a[i]=a[i-1];
        a[vt]=so;
        n++;







        }
}
int main()
{
    int a[50],n;
    int vt,so;

    nhapmang(a,n);
    inmang(a,n);
    demle(a,n);
    nhonhat(a,n);
    timkiem(a,n);
    sapxep(a,n);
    chenmax(a,n,vt,so);
}

