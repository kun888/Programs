a={}
a['one']='uno'
print(a)
b={}
b['two']=2,'a','z'
print(b)
c={}
c['three']='t',1,'a'
print(c)
d={}
d['4']='kartik'
print(d)
eng={'happy':'sad','joy':'sadness','class':'turing','sub':'python'}
print(eng['class'])
fruits={'apples':430,'bananas':312,'oranges':512,'pears':217}
print(fruits)
del fruits['pears']
print(fruits)
fruits['pears']=0
print(fruits)
k=len(b)
print(k)
print(fruits.get('oranges'))
if 'oranges' in fruits:
    print(fruits['oranges'])
x={'a':1,'b':2}
z={'b':3,'c':4}
c=x.copy()

c.update(z)
z.update(x)
print(z)

print(c.keys())
print(c.values())
print(c.items())
c['a']=123
print(c.items())
c1=c.pop('a')
print(c1)
         
