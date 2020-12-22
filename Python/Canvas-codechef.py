def func(arr, n):
    count = 1
    x = arr[0]
    for i in range(n):
        if i != n-1:
            if arr[i] > arr[i+1] and x >= arr[i+1]:
                count += 1
        if arr[i] < x:
            x = arr[i]
    return count


t = int(input())
result = []
for i in range(t):
    n = int(input())
    ar = list(map(int, input().strip().split()))
    result.append(func(ar, n))
print(*result, sep="\n")
