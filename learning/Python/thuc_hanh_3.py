import math

#b6
a = int(input())
b = int(input())

sets = set()

for i in range(1, a+1):
    if(a%i==0):
        sets.add(i)
for i in range(1, b+1):
    if(b%i==0):
        sets.add(i)

print(sets)
