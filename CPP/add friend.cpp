#include<iostream>
using namespace std;
class b;
class a
{
int x;
public:
int get();
friend int add(a,b);
};
class b
{
int x;
public:
int get();
friend int add(a,b);
};
int a:: get()
{
cout<<"enter x ";cin>>x;
}
int b::get()
{
cout<<"enter x";cin>>x;
}
int add(a obj1,b obj2)
{
return(obj1.x+obj2.x);
}
void disp()
{
    a obj1;
    cout<<obj1.x<<endl;
}
int main()
{
a obj1;b obj2;
obj1.get();
obj2.get();
cout<<"sum is"<<add(obj1,obj2);
disp();
}
