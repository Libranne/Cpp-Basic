/* nhap n chia 2 mang chan le tbc tung mang*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i=0,k=0;
    int dem1=0,dem2=0,dem3=0,dem4=0;
    int Chan[100],Le[100];
    int sum1=0,sum2=0;
    do
    {
        cout<<" nhap n : ";cin>>n;

        if(abs(n)%2==0)
        {
            Chan[i]=n;
            i++;
            dem1++;
        }
        if(abs(n)%2!=0)
        {
            Le[k]=n;
            k++;
            dem2++;
        }

    }
    while(n!=0);
    cout<<endl;


    cout<<"Mang cac so chan"<<endl;
    for(int i=0; i<dem1; i++)
    {
        cout<<Chan[i]<<"\t";
         if(Chan[i]>0)
        {
            sum1+=Chan[i];
        dem3++;
        }
    }
    cout<<endl;
    cout<<"Mang cac so le"<<endl;
    for(int i=0; i<dem2; i++)
    {

        cout<<Le[i]<<"\t";

        if(Le[i]<0)
        {
            sum2+=Le[i];
            dem4++;
        }

    }
    cout<<endl;
    if(dem3>0)
        cout<<"TBC cac so duong chan la : "<<(float)sum1/dem3<<endl;
    else
        cout<<"Khong co so chan duong nao"<<endl;
    if(dem4>0)
        cout<<"TBC cac so am le la : "<<(float)sum2/dem4<<endl;
    else
        cout<<"Khong co so le am nao"<<endl;
}



