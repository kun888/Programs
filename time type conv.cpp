#include<iostream>
using namespace std;
class time1
{
int min,hr;
public:
time1(int m,int h)
{
min=m;
hr=h;
}
void show()
{
cout<<hr<<"hr"<<" "<<min<<"min";
}
operator int()
{
int m;
m=hr*60+min;
return m;
}

time1 t1(int m)
{
hr=m/60;
min=m%60;
}
};
main()
{
time1 t1(10,20);
int m;
time1 t1=m;
t1.show();1
//cin>>m;
m=t1;
t1.show();

}
