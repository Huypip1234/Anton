n = int(input())
lst = [0]*999

lst[0]=1
lst[1]=1
i=2
while True:
    lst[i]=lst[i-2]+lst[i-1]
    if lst[i]>n: 
        print(lst[i-1])
        break
    i+=1