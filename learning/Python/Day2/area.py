import math

def area(a, b, c):
    p = (a+b+c)/2
    heRong = p*(p-a)*(p-b)*(p-c)
    s = (heRong)**0.5
    return s

a = int(input())
b = int(input())
c = int(input())

print(area(a, b, c))