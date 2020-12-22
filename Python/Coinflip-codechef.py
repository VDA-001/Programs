def func(i, n, q):
    if n % 2 == 0:
        return n//2
    else:
        if i == 1:
            if q == 1:
                return (n//2)
            else:
                return (n//2)+1
        else:
            if q != 1:
                return (n//2)
            else:
                return (n//2)+1


t = int(input())
result = []
for i in range(t):
    g = int(input())
    for j in range(g):
        lst = list(map(int, input().strip().split()))
        result.append(func(lst[0], lst[1], lst[2]))
print(*result, sep='\n')
