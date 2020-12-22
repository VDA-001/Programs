def func(arr, a):
    sumi = 0
    for i in range(len(arr)):
        q = arr[i][0]
        if q == "CONTEST_WON":
            if int(arr[i][1]) <= 20:
                sumi += 300+(20-int(arr[i][1]))
            else:
                sumi += 300
        elif q == "TOP_CONTRIBUTOR":
            sumi += 300
        elif q == "BUG_FOUND":
            sumi += int(arr[i][1])
        elif q == "CONTEST_HOSTED":
            sumi += 50
    if a[1] == "NON_INDIAN":
        return (sumi//400)
    else:
        return (sumi//200)


result = []
t = int(input())
for i in range(t):
    lst = []
    a = list(map(str, input().strip().split()))
    for j in range(int(a[0])):
        arr = list(map(str, input().strip().split()))
        lst.append(arr)
    result.append(func(lst, a))
print(*result, sep="\n")
