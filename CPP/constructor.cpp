#include<iostream>
using namespace std;
class test
{
int i;
public:
test()
{
cout<<"i am inside constructor";
}
void show()
{
cout<<i;
}
};
main()
{
test obj1;
obj1.show();
}
