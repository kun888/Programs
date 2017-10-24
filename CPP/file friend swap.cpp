#include<iostream>
using namespace std;
class b;
class a
{
int x;
public:
int get();
friend class b;
friend int swap(a,b);
};
class b
{
int a;
public:
int get();
friend int awap(a,b);
};
int swap(a obj1.b obj2)
{
int t;
t=obj1.a;
obj1.a=obj2.a;
obj2.a=t;
return 0;
}
int a::get()
{
    cout<<"enter a";cin>>a;
}

int b::get()
{
    cout<<"enter a";cin>>b;
}
main()
{
a obj1;b obj2;
obj1.get(obj2);
cout<<obj1.swap(obj2);
}
