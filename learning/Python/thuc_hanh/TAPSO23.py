n= int(input("N = "))
lst = [1]
while len(lst) <= n**1.2:
    lst2 = [2*x+1 for x in lst]
    lst3 = [3*x+1 for x in lst]
    lst = lst + lst2 + lst3
    a = set(lst)
    lst = list(a)
lst.sort()
print("{0} so dau tien cua N23: ".format(n), end='')
for i in range(n-1):
    print(lst[i],end=' ')
print(lst[n-1])
#10
#1 3 4 7 9 10 13 15 19 21
#20
#1 3 4 7 9 10 13 15 19 21 22 27 28 31 39 40 43 45 46 55
