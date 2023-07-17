n = int(input("N = "))
sum=0
mau=0
for i in range(1, n+1):
    mau+=i**2
    k = n/mau
    sum+=k
print("F(" + str(n) + ") = " + str('%.7f' %sum))