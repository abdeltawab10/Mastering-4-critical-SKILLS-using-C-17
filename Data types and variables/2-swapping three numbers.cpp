#include <iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    cout<<a <<b <<c <<endl;
    temp=a;
    a=b;
    b=c;
    c=temp;
    cout<<a <<b <<c;
    return 0;
}
