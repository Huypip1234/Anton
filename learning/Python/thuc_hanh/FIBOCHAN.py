import math

def isFibo(n):
    return math.isqrt(5*n*n+4)**2 == (5*n*n+4) or math.isqrt(5*n*n-4)**2 == (5*n*n-4)
    #is so chinh phuong

n = int(input("N = "))
if isFibo(n) and n%2==0:
    print("N la so fibonacci chan")
else:
    print("N khong phai la so fibonacci chan")