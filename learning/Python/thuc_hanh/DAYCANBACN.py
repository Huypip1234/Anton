n = int(input("N = "))
sum=0
trongCan=0
for i in range(1, n+1):
    trongCan += i
    k = trongCan**(1/i)
    sum+=k
print("F(" + str(n) + ") = " + str('%.7f' %sum))