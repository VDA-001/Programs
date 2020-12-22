def func(arr):


result = []
t = int(input())
for i in range(t):
    lst = list(map(int, input().strip().split()))
    result.append(func(lst))
print(result)
