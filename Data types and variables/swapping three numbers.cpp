#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a <<b <<c;
    a = a + b + c;
    b = a - (b+c);
    c = a - (b+c);
    a = a - (b+c);
    cout<<a <<b <<c;
    return 0;
}
