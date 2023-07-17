n = int(input("N = "))
sum = 0
for i in range (1, int((n**0.5))+1):
    if n%i==0:
        if (n/i)==i: sum+=i
        else: sum+=i+(n/i)
print('Tong cac uoc so cua ' + str(n) + " la " + str(int(sum)))
#123456789012
#288065841056