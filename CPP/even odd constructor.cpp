#include<iostream>
using namespace std;
class all
{
int *arr,s,n,i;
public:
all(int s)
{
n=s;
arr=new int(n);
for(i=0;i<n;i++)
{
cin>>arr[i];
}
show();
}
void show()
{
int count=0,c=0;
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
cout<<arr[i];
}
}
//cout<<count<<endl<<c;
}
};
main()
{
all obj(5);
}
