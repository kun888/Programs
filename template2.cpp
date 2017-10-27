#include<iostream>
#include<vector>
using namespace std;
main()
{
vector<int>myint;
cout<<"SIZE IS"<<myint.size()<<endl;
myint.push_back(20);
myint.push_back(10);
for(int i=0;i<5;i++)
{
myint.push_back(i);
}
int s=myint.size();
for(int i=0;i<s;i++)
{
cout<<myint.back()<<endl;
myint.pop_back();
}
}
