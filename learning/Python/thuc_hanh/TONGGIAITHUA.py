n = int(input("Nhap N duong: "))
rs=0
t=1
for i in range(1, n+1):
    t*=i
    rs+=t
print("F(" + str(n) + ") = " + str(rs))