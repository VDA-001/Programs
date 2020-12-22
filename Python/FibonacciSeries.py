n=int(input("Enter the length of series: "))
lst=[0,1]
for i in range(2,n):
    a=lst[i-1]+lst[i-2]
    lst.append(a)
print(lst)
    
