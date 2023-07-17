def average(a, b, c, d, e):
    lst = [a, b, c, d, e]
    s=0
    for i in lst: s+=i
    s/=5
    return s

a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

print(average(a, b, c, d, e))