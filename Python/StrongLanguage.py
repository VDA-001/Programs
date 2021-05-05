# cook your dish here
t = int(input())
for _ in range(t):
    n,k=[int(x) for x in input().split()]
    st = "*"*k
    ch = str(input())
    if st in ch:
        print("YES")
    else:
        print("NO")
