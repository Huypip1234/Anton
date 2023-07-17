#CHUA TEST

import math

def area2(x1, y1, x2, y2, x3, y3):
    a = ((x2-x1)**2 + (y2-y1)**2)**0.5
    b = ((x3-x2)**2 + (y3-y2)**2)**0.5
    c = ((x3-x1)**2 + (y3-y1)**2)**0.5
    p = (a+b+c)/2
    heRong = p*(p-a)*(p-b)*(p-c)
    s = (heRong)**0.5
    return s

x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())
x3 = int(input())
y3 = int(input())

print(area2(x1, y1, x2, y2, x3, y3))