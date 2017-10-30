#include<iostream>
#include<string.h>
using namespace std;
class student
{
int r;
protected:
char course[5];
public:
int get_r()
{
return r;
}
student(int m,char c[])
{
r=m;
strcpy(course,c);
}
};
class result:public student
{
int marks[3],m1,m2,m3;
public:
result(int m,char c[],int m4,int m5,int m6):student( m,  c)
{
marks[0]=m1;marks[1]=m2;
marks[2]=m3;
}

int total()
{
int s=0;
for(int i=0;i<3;i++)
s=s+marks[i];
}
void disp()
{
cout<<"roll no is"<<get_r();
cout<<"course is:"<<course;
cout<<"total is:"<<total();
}
};
main()
{
    int r;
    char course[3];
    int m1,m2,m3;
result obj(r,course,m1,m2,m3);
obj.disp();
}
