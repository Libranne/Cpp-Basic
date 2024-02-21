#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"Nhap so nguyen duong co 2 chu so N= "; cin>>n;
		if(n<0||n>99) cout<<"Nhap lai N!";
	}while(n<0||n>99);
	int soTemp=n;
	int tong=0;
	while (soTemp != 0) {
        tong += soTemp % 10;
        soTemp /= 10;
    }
    cout << "Tong cac chu so cua so " << n << " la " << tong << endl;
    return 0;
}
