n = int(input("Nhap N: "))
a = []
b = []
tbc=0
for i in range(1, n+1):
    inp = input("Nhap gia tri thu " + str(i) + ": ")
    try: #int
        val = int(inp)
        a.append(val)
        tbc+=val
    except ValueError:
        try:
            #float
            val = float(inp)
            a.append(val)
            tbc+=val
        except ValueError: 
            #string
            b.append(inp)
if len(a)!=0: print("TBC cua A = " + str(tbc/len(a)))
print("B = " + str(b))