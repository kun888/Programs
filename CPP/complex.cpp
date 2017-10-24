#include<iostream>
using namespace std;
class imag;
class real
{
int r1,c1;
public:
    int get();
friend int add(real,imag);
friend int sub(real,imag);
};
class imag
{
int r2,c2;
public:
int get();
friend int add(real,imag);
friend int sub(real,imag);
};
int real::get()
{
cout<<"enter first real number";cin>>r1;
cout<<"enter first imag number";cin>>c1;
}
int imag::get()
{
cout<<"enter second real number";cin>>r2;
cout<<"enter second imaginary number";cin>>c2;
}
int add(real obj1,imag obj2)
{
cout<<"sum of real no's are"<<obj1.r1+obj2.r2;
}
/*int add(real obj1,imag obj2)
{
cout<<"sum of complex no's are"<<obj1.c1+obj2.c2;
}*/

int sub(real obj1,imag obj2)
{
cout<<"sub of complex no's are"<<obj1.c1-obj2.c2;
}

/*int sub(real obj1,imag obj2)
{
cout<<"sub of complex no's are"<<obj1.c1-obj2.c2;
}*/
int main()
{
real obj1;imag obj2;
obj1.get();
obj2.get();
int k=add(obj1,obj2);
return k;
//cout<<add(obj1,obj2);
int h=sub(obj1,obj2);
return h;
//cout<<sub(obj1,obj2);
}
