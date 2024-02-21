/*viet ham tim min cua 2 so thuc
ap dung nhap vao 4 so thuc va
 in ra man hinh phan tu nho nhat cua 4 so do*/
#include <iostream>
using namespace std;
//dinh ngia ctc tim min 2 so
float Min2S(float a, float b)
{
    float m;
    if(a<b) m=a;
    else m=b;
    return m;
}
int main()
{
    float x,y,z,t;
    cout<<" nhap x:";cin>>x;
    cout<<" nhap y:";cin>>y;
    cout<<" nhap z:";cin>>z;
    cout<<" nhap t:";cin>>t;

    float m1,m2,m;
    m1=Min2S(x,y);
    m2=Min2S(z,t);
    //m=Min2S(m1,m2);
    //m=Min2S(Min2S(x,y),Min2S(z,t));
    //cout<<" \n min cua 4 so la:"<<m;
    cout<<" \n min cua 4 so la:"<<Min2S(m1,m2);
}
