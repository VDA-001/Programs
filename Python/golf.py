t = int(input())
for i in range(t):
    n,x,k = map(int,input().split(' '))
    j=0
    flag=1
    while j<=n+1:
        if (j*k>x) and ((n+1)-(j*k)<x):
            break
        elif j*k==x and (n+1)-(j*k)==x:
            flag=0
            print("YES")
            break
        j+=1
    if(flag):
        print("NO")