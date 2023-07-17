import math

def isPerfectSquare(x):
    s = int(math.sqrt(x))
    return s*s == x
def isFibo(n):
    return isPerfectSquare(5*n*n+4) or isPerfectSquare(5*n*n-4)

n = int(input("N = "))
if isFibo(n) and n%2==0:
    print("N la so fibonacci chan")
else:
    print("N la so fibonacci chanc")