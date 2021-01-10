outl=[]
lst=[]
slst=[]
s="beabeefeab"
for i in range(len(s)):
    if not s[i] in outl:
        outl.append(s[i])
        slst.append(s[i])
        for j in range(len(s)):
            if i==j or s[i]==s[j]:
                continue
            slst.append(s[i])
            break
        if len(slst)<2:
            continue
        slst.sort()
        if not slst in lst:
            lst.append(slst)
print(lst)
