#include<iostream>
using namespace std;
class number
{
int x;
public:
number(int i)
{
x=i;
}
number()
{
x=2;
}
void show()
{

cout<<x<<endl;
}
number operator -()
{
    number temp;
temp.x=x-2;
return temp;
}
};
main()
{
number k1,k2,k3;
k1.show();

k2=-k1;
k2.show();
k1.show();
}
