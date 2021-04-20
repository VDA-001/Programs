from collections import Counter
n=int(input())
for i in range(n):
    flag=1
    stri = input()
    if(len(stri)%2==0):
        str1=stri[:int(len(stri)/2)]
        str2 = stri[int(len(stri)/2):]
    else:
        n=int(len(stri)/2)
        str1=stri[:n]
        str2=stri[n+1:]
    freq1=Counter(str1)
    freq2=Counter(str2)
    for j in str1:
        if freq1[j]!=freq2[j]:
            flag = 0
            break
    if flag==0:
        print("NO")
    else:
        print("YES")
