x=int(input('Enter number1'))
y=int(input('Enter number2'))

z=[]  #empty list
a=x+y
s=x-y
d=x/y
m=x*y

print('Sum=',a)
print('Diff=',s)
print('Div=',d)
print('Multi=',m)


z.append(a) #used adding value to list
z.append(s)
z.append(d)
z.append(m)

print(z)

print(z[0]+z[1],',',z[2]-z[3]) #accessing list and doing operations #',' is for adding comma in print

