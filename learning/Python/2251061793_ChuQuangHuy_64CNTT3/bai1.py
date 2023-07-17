n = int(input("Nhập n = "))
s = 0
t = 1
for i in range(1, n+1):
    t*=i
    s+=1.0/t
print("F(N) = " + str('%.8f' %s))