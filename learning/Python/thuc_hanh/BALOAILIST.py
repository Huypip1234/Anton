n = int(input("Nhap N: "))
a = []
b = []
c = []
for i in range (1, n+1):
    inp = input("Nhap gia tri thu " + str(i) + ": ")
    try: #int
        val = int(inp)
        a.append(val)
    except ValueError:
        try:
            #float
            val = float(inp)
            b.append(val)
        except ValueError: 
            #string
            c.append(inp)
a.sort(reverse=True)
print("A = " + str(a))
b.sort(reverse=True)
print("B = " + str(b))
c.sort(reverse=True)
print("C = " + str(c))