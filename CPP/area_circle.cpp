#include<iostream>
using namespace std;
void arrect()
{
	int a,b;
	cout<<"enter the lengeth and breadth of the reactangle\n";
	cin>>a>>b;
	cout<<"area of rectangle is = "<<a*b;

}
void arsq()
{
		int a,b;
	cout<<"enter the sides of the square\n";
	cin>>a>>b;
	cout<<"area of square is = "<<a*b;
}
void first()
{
	int a;
	cout<<"enter the number to get the first digit\n";
	cin>>a;
	cout<<"first digit is = "<<a%10;
}
void larg()
{
	int a,b,c;
	cout<<"enter the two no. is\n";
	cin>>a>>b;
	c = (a>b)?a:b;
	cout<<"greatest no. is = "<<c;

}
void avg()
{
	int a,k=0,i;
	cout<<"enter the no. of digit\n";
	cin>>a;
	int b[a];
	for(i=0;i<a;i++)
	{
		cin>>b[i];
		k = k + b[i];
	}
	k = k/a;
	cout<<"average  is "<<k;
}
void circir()
{
	int a;
	cout<<"enter the radius of the circle\n";
	cin>>a;
	cout<<"circumference is "<<(2*3.14*a);
}
void grade()
{
	int a;
	cout<<"enter the number of student";
	cin>>a;
	if(a>=90 && a<=100)
	{
		cout<<"grade of student is A+\n";
	}
	if(a>=80 && a<90)
	{
		cout<<"grade of student is A\n";
	}
		if(a>=70 && a<80)
	{
		cout<<"grade of student is B+\n";
	}
		if(a>=60 && a<70)
	{
		cout<<"grade of student is B\n";
	}
	else
	{
		cout<<"not so good marks try hard\n";
	}
}








main()
{
	int a;
	
	cout<<"1. area of rectangle\n";
	cout<<"2. area of square\n";
	cout<<"3. print the first digit\n";
	cout<<"4. print the largest number\n";
	cout<<"5. find the average of the number\n";
	cout<<"6. print grade acc to marks\n";
	cout<<"7. circumference of the circle\n";
	cin>>a;
	switch(a)
	{
		case 1:
			{
			
		        arrect();
		        break;
		    }
		case 2:
			{
			
		        arsq();
		        break;
		    }
		case 3:
			{
			
		        first();
				break;
			}
		case 4:
			{
			
		        larg();
		        break;
		    }
		case 5:
			{
		        avg();
		        break;
		    }
		case 6:
			{
		       grade();
		       break;
		   }
		case 7:
		      {
			  
			  circir();
		      break;
		  }
	   default:
	   	{
	   cout<<"invalid input\n";   
	   break; 
}
	 	  	   				        
	}
}
