/*Viết hàm liệt kê các ước số của n. Viết chương trình nhập số nguyên dương n, gọi hàm trên và cho biết kết quả.*/
#include<bits/stdc++.h>
using namespace std;

float uocso(int &n){

    cout << "\nNhap n = ";
    do{
        cin >> n;
        if(n <= 0){
            cout << "\nNhap lai n = ";
        }
    }while(n <= 0);
    cout << "\n uoc cua n la:";
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
           cout<< i << " ";
        }
    }
}
int main()
{
    int n;
    uocso(n);
}


