import math

def isChinhPhuong(x):
    s = int(math.sqrt(x))
    return (s * s == x)

def isFibo(n):
    return isChinhPhuong(5 * n * n + 4) or isChinhPhuong(5 * n * n - 4)

n = int(input())
print(isFibo(n))