def Sort(sub_li): 
    l = len(sub_li) 
    for i in range(0, l): 
        for j in range(0, l-i-1): 
            if (sub_li[j][1] > sub_li[j + 1][1]): 
                tempo = sub_li[j] 
                sub_li[j]= sub_li[j + 1] 
                sub_li[j + 1]= tempo 
    return sub_li 
n=int(input())
card=[[]]*n
for i in range(n):
    name = input()
    score = float(input())
    card[i]=[name,score]
Sort(card)
f=0
tr=0
for d in range(n):
    if(card[d][1]==card[d+1][1]):
        tr+=1
    else:
        tr+=1
        break
x=card[tr][1]
count=0
nam=[]
for j in range(n):
    if(card[j][1]==x):
        count+=1
        nam.append(card[j][0])
if(count==1):
    print(card[tr][0])
else:
    nam.sort()
    for k in range(len(nam)):
        print(nam[k])

