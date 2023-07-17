a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))
if(a < 0 or b<0 or c<0):
    print("Khong phai tam giac")
    exit()
if(a+b>c and a+c>b and b+c>a):
    print("Dung la tam giac")
else:
    print("Khong phai tam giac")
