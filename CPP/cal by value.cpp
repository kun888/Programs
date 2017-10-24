#include<iostream>
using namespace std;
int sum(int ,int );
int main()
{
int a,b,c;
cin>>a>>b;
c=sum(a,b);
cout<<"sum is"<<c;
}
int sum(int p,int q)
{
    int c;
cin>>p>>q;
c=p+q;
cout<<c;
}
