#include<iostream>
#include<cstdio>
using namespace std;
class emp
{
	float eno,bsal,hra,da,total;
	char ename[50];

	public:
void get()
{
	cout<<"enter the employ no.\n";
	cin>>eno;
	getchar();
	cout<<"enter the employ name\n";
	cin.getline(ename,50);
	cout<<"enter the employ basic salary\n";
	cin>>bsal;
}
void cal()
{
   if(bsal>15000)
   {
   	hra = bsal/10;
   	da = (bsal * 8)/100;
   	total = hra + da + bsal;
   }
   if(bsal<15000 && bsal>0)
   {
   	hra = (bsal * 8)/100;
   	da = (bsal * 5)/100;
   	total = hra + da + bsal;
   }
   if(bsal<0)
   {
   	cout<<"incorrect basic salary\n";
   }

}
void disp()
{
	cout<<ename<<" basic salary is "<<bsal<<" and total salary is "<<total;
}


};
int main()
{
	emp e;
	e.get();
	e.cal();
	e.disp();

}

