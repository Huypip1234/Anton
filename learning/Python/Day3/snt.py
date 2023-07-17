n = int(input("Nhập số N: "))
x = 2
while x < n**0.5:
    if (n % x) == 0:
        print("N không phải số nguyên tố")
        exit()
    x = x + 1
print("N là số nguyên tố")