#include<iostream>
using namespace std;
class b;
class a
{
int x;
public:
friend class b;
friend int add(a,b);
void print()
{
    cout<<x;
}
};
class b
{
int x;
public:
int get(a &obj1)
{

    cout<<"enter x";cin>>x;
    cin>>obj1.x;
}
friend int add(a,b);

};


int add(a obj1,b obj2)
{
return(obj1.x+obj2.x);
}
int main()
{
a obj1;b obj2;

obj2.get(obj1);
cout<<"sum is"<<add(obj1,obj2)<<endl;
obj1.print();

}
