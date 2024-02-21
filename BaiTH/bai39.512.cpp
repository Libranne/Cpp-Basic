#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int &n)
{
    cout<<" nhap so phan tu n:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
    }
    void inmang(int a[],int n)
{
    cout<<"\n mang a:";
    for(int i=0;i<n;i++)
        cout<<setw(5)<<a[i];
}
void luumangfile(int a[], int n)
{
    ofstream f;
    f.open("songuyen.dat",ios::out);
    f<<n;
    for(int i=0;i<n;i++)
        f<<a[i]<<endl;
    f.close();
}

void docfile_mang(int a[], int &n)
{
    int i;
    ifstream f;
    string s;
    f.open("songuyen.dat",ios::in);
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>n;
    }
    f.close();
}
void sapxep (int a[],int n)
{
        int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){

                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}}}
void luumangfileA (int a[], int n)
{
    ofstream f;
    f.open("A.dat",ios::out);
    f<<n;
    for(int i=0;i<n;i++)
        f<<a[i]<<endl;
    f.close();
}
void luumangfileB(int a[], int n)
{
    ofstream f;
    f.open("B.dat",ios::out);
    f<<n;
    for(int i=0;i<n;i++)
        f<<a[i]<<endl;
    f.close();
}
void luumangfileC(int a[], int n)
{
    ofstream f;
    f.open("C.dat",ios::out);
    f<<n;
    for(int i=0;i<n;i++)
        f<<a[i]<<endl;
    f.close();
}
int main()
{   int a[100];
    int n;
    //nhapmang(a,n);
   //sapxep(a,n);
    //luumangfile(a,n);
    docfile_mang(a,n);
    inmang(a,n);

}

