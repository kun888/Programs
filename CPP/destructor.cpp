#include<iostream>
using namespace std;
class demo
{
public:
~demo()
{
cout<<"i am inside destructor";
}
demo()
{
cout<<"i am inside constructor";
}
};
main()
{
demo obj1;
}
