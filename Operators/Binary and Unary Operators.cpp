#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
     Arithmetic: traditional operations (e.g.
      addition) on numbers
    ● Operator: Symbol
    ○ Arithmetic Operators: + - * / %
    ● x + 2 * y - 1
   ○ We call it expression
   ○ + * - are operators
   ○ x, 2, y, 1 are operands
   ● () : Parentheses for order for operations
  ● They are binary operators
  ○ Needs two operands: 3 + 5

     */
   int x=6,y=3;
   bool male=true;
   cout<<x+y<<endl;
   cout<<x+2*y-1<<"\n";
   cout<<x/y<<endl;
   int z=(x+y)/3/3;
   cout<<z<<"\n";
   cout<<-x;
   bool female=!male;
   cout<<female;
    return 0;
}
