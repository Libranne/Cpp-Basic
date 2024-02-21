#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char str1[20],s1[20],s2[20];
    int i=0,j=0,vt;
    cout<<" moi ban nhap chuoi:";
    gets(str1);
    cout<<"   "<<str1<<endl;
    cout<<"chuoi can tach :";
    cin>>s1;
    for(i=0;i<strlen(str1);i++)
        if(str1[i]==s1[0])
    {
        int kt=1;
        for(j=0;j<strlen(s1);i++)
            if(s1[j]!=str1[i+j])
            kt=0;
        if(kt==1) vt=i;
    }
    for(i=vt;i<strlen(str1);i++)
    {
        s2[i-vt]=str1[i];
    }
    /*int tim=str1.find(str2);
    snew=str1.substr(tim);*/

    cout <<"chuoi sau khi tach :"<<s2;

}
