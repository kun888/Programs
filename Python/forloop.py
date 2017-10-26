"""for i in range(0,10):  #here 10 is exclusive
    print(i)
    
for i  in range(0,10,2): #here it will print the multiple of 2
    print(i)

for i  in range(0,-10,-1): #here it will print the negative values
    print(i)

for i in range (1,11):  #here it will print the table of 5
    print (i*5)

print("the table of 7")
for i in range (1,10):  #here it will print the table of 7
    print (i*7)
print("the table of 9")
for i in range (1,10):  #here it will print the table of 9
    print (i*9)

n = int(input("enter the number : "))
print("the table of ",n,"\n")
for i in range (1,10):  #here it will print the table of n
    print (i*n)
x=05
for i in range(1,11):
    x=x+i
print(x)

x=int(input("enter the number : "))
for i in range(1,x):
    x=x*i
print(x)"""


x=int(input("enter the number : "))
l=x
s=0
while(x!=0):
    k=int(x)%10
    s=s+(k*k*k)
    x/=10
if(l==s):
    print("armstrong no")
else:
    print("not")

