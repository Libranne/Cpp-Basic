/*Viết hàm thực hiện xóa tất cả những ký tự x nào đó trong chuỗi.
 Viết chương trình nhập vào một chuỗi bất kỳ và ký tự x cần xóa, gọi hàm trên và in ra kết quả.
  Không sử dụng thư viện có sẵn của C/C++*/
#include<bits/stdc++.h>
using namespace std;
char XoaTu(char s[],char s1[])

{

            int n=strlen(s);
            int n2=strlen(s1);
        int i;
        for(i=0;i<n;i++)
            {
        if((s[i]==s1[0]) && (s[i+n2-1]==s1[n2-1]))
        {
            int j;
            for(j=i;j<n;j++)
            {
            s[j]=s[j+n2];
                    }
            s[j+n2]='\0';

                    break;
                }
        }
    cout<<"Chuoi ky tu sau khi xoa: "<<s;
}

int main()

{

    char s[100];
    char s2[100];


    cout<<"Nhap chuoi ky tu: ";
        gets(s);
    cout<<"Nhap tu muon xoa: ";
        gets(s2);
    XoaTu(s,s2);

}




