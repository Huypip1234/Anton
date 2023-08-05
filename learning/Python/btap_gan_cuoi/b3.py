import math
n = int(input())

def isNTo(n):
    if n<2: return False
    for i in range(2, math.isqrt(n)):
        if(n%i==0): 
            return False
    return True

lst = []
i=2
while n>1:
    if isNTo(i):
        if n%i==0:
            lst.append(i)
            n //= i
        else: i+=1
    else: i+=1  
    
print(lst)