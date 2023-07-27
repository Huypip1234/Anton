s = input("Nhap chuoi: ")
lst = list(s)

count={}
for i in lst:
    if i in count:
        count[i]+=1
    else:
        count[i]=1
#print
for i in count:
    print(i, count[i])