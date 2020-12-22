from numpy import *
m1=int(input('Enter the number of rows of Matrix 1: '))
n1=int(input('Enter the number of columns of Matrix 1: '))
m2=int(input('Enter the number of rows of Matrix 2: '))
n2=int(input('Enter the number of columns of Matrix 2: '))
if n1==m2:
    arr1=[]
    print("Enter elements of Matrix 1: ")
    for i in range(m1):          
        a =[] 
        for j in range(n1):     
            a.append(int(input())) 
        arr1.append(a) 
    arr2=[]
    print("Enter the elelemnts of Matrix 2: ")
    for i in range(m2):          
        b =[] 
        for j in range(n2):     
            b.append(int(input())) 
        arr2.append(b) 
    arr3=zeros((m1,n2))
    for i in range(0,m1):
        for j in range(0,n2):
            sum=0
            for k in range(0,n1):
                print(k)
                sum=sum+(arr1[i][k]*arr2[k][j])
                arr3[i][j]=sum

    print("Matrix 1 = ",arr1)
    print("Matrix 2 = ",arr2)
    print("The matrix obtained after multiplication is : ",arr3)
else:
    print("Invalid Matrices ")
    
