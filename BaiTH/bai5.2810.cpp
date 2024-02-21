
#include<iostream>
using namespace std;
int main()
{ int N,tram,chuc,donvi,max;
cout<<" nhap so nguyen n gom 3 chu so :";cin>>N;
tram=N/100;
chuc=((N%100)/10);
donvi=N%10;
max=tram;
    if(chuc>tram && donvi>tram)
    {
    if(chuc>donvi)
    max=chuc;
    else
    max=donvi;
            }
            else
            {
                if(chuc>tram)
                max=chuc;
                if(donvi>tram)
                max=donvi;
            }
    if(max==tram)
             cout<<"Chu so lon nhat  nam o hang tram:"<<max;
            else
              if(max==chuc) cout<<"Chu so lon nhat  nam o hang chuc:"<<max;

                        else cout<<"Chu so lon nhat  nam o hang don vi:"<<max;

}

