#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a=0,b=1;
    cout<<a++<<endl;
    cout<<++a<<endl;
    a +=2*b+1;
    b =a++ *2;
    cout<<a<<" "<<b;

    b=a;
    a = 12+a/3/2-2*2;
    cout<<a<<"\n";
    a=b;
    a=((12+a)/3/2-2)*2;
    cout<<a<<"\n";

    return 0;
}
