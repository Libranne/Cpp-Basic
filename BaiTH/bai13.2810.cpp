
#include<iostream>
using namespace std;

int main()
{
    int N;
    cout << " nhap N: " ;
    cin >>N;
    int sum(0);
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            sum = sum + i;
        }
    }
    if (N == sum)
        cout << "so hoan thien" ;
    else
        cout << "khong phai so hoan thien"  ;
}





