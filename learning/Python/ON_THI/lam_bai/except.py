n = int(input("Nhap N: "))
a = []
b = []
for i in range(1, n+1):
    k = input("Nhap gia tri thu: " + str(i) + ": ")
    try:
        a.append(int(k)) #int
    except:
        try:
            a.append(float(k)) #float
        except:
            b.append(k) #string
print("Tong cac phan tu cua A =", sum(a))
b.sort(key=None, reverse=True)
print("B = ", b)
    