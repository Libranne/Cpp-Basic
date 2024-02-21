#include<bits/stdc++.h>
#include<string>
using namespace std;
struct thuebao
{
    int sothuebao;
     string hoten;
    float cuocphi;
    string ngaylap;
};
void nhapthuebao(int &n,thuebao ds[])
{
    cout<<" nhap danh sach thue bao:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n --------------"<<endl;
        cout<<" so thue bao:";
        cin>>ds[i].sothuebao;
        cout<<" nhap ho ten:";cin.ignore();
        getline(cin,ds[i].hoten);
        cout<<" cuoc phi:";cin>>ds[i].cuocphi;
        cout<<" ngay lap:";cin.ignore();
        getline(cin,ds[i].ngaylap);
    }
}
void inds(int n,thuebao ds[])
{

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
void sapxep_cuocphi(int n,thuebao ds[])
    {
       thuebao tg;
        for ( int i=0;i<n;i++)
            for( int j=j+1;j<n;j++)
            if(ds[i].cuocphi<ds[j].cuocphi)

        {
            tg=ds[i];
            ds[i]= ds[j];
            ds[j]= tg;
        }
        cout<<" \n DANH SACH THUE BAO SAU SAP XEP:";
        inds(n,ds);
    }
void cuocphimax(int &n,thuebao ds[])
{


 int i=0;
    int max=ds[i].cuocphi;
    for (int i = 1; i < n; i++)
        for(int j=1;j<n;j++)
        if (ds[i].cuocphi < ds[j].cuocphi)
            max = ds[j].cuocphi;
cout<<" \n so thue bao co tien cuoc phi cao nhat:"<<max;

}
void themTB(int &n,thuebao ds[])
{cout<<"\n --------------"<<endl;
    thuebao x;
    cout<<"\n nhap thue bao moi can them: \n";
    cout<<" so thue bao: ";cin>>x.sothuebao;
    cout<<" ho ten:";cin.ignore();
    getline(cin,x.hoten);
    cout<<" cuoc phi:";cin>>x.cuocphi;
    cout<<" ngay lap:";cin.ignore();
    getline(cin,x.ngaylap);
    n=n+1;
    ds[n-1]=x;
    cout<<"\n DANH SACH SAU KHI THEM:";
    inds(n,ds);
}
void xoaTB(int &n,thuebao ds[])
{cout<<"\n --------------"<<endl;
    int i;
    for(i=0;i<n;i++)
        if(ds[i].cuocphi<10000)
    {
        for(int j=i;j<n;j++)
            ds[j]=ds[j+1];
        n=n-1;
        i=i-1;

    }
    cout<<"\n DANH SACH SAU  KHI XOA:";
    inds(n,ds);
}


int main()
{   thuebao ds[100];
     int n;

  nhapthuebao(n,ds);

  inds(n,ds);

  sapxep_cuocphi(n,ds);

  cuocphimax(n,ds);
  themTB(n,ds);
  xoaTB(n,ds);
}


