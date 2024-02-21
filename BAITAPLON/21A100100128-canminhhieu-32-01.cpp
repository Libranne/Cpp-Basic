#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum,dem=0;
    cout<<" nhap n:";cin>>n;

    for(int i=0;i<n;i++)
    {
         sum += (n%10);
    
        n=n/10;
        dem++;
    }
cout<<"\n tong cac chu so :"<<sum;
cout<<"\n so cac chu so la:"<<dem;
}
