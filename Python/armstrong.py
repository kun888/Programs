num=(input("ENTER NUMBER: "));
l=len(num);
num=int(num);
a=num;
s=0;
while(num!=0):
    temp=int(num%10);
    s=s+temp**l;
    num=int(num/10);
if(s==a):
    print("ARMSTRONG");
else:
    print("NOT")
