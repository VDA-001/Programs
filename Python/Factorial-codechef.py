def func(n):
    i = 1
    x = 0
    sumi = 0
    while i < 50:
        x = n//(5**i)
        if(x <= 0):
            break
        sumi += x
        i += 1
    return sumi


result = []
t = int(input())
for i in range(t):
    n = int(input())
    result.append(func(n))
print(*result, sep='\n')
