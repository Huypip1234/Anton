#1)
anbatocom = {x for x in range(0, 100)} 
print("0-99: ", anbatocom)
print("")
#2)
anbatocom = {x for x in range(200) if x%2!=0}
print("so le 1-199: ", anbatocom)
print("")
#3)
s = input("Nhap tap hop: ")
anbatocom = s.split() #split not only by " "
anbatocom = {int(x) for x in anbatocom} #convert to int
print("Size: ", len(anbatocom))
print("Max: ", max(anbatocom))
print("Min: ", min(anbatocom))
#4) 
anbatocom = set()
s = input("Nhap ho ten day du: ")
anbatocom.add(s)
while s!='':
    s = input("Nhap ho ten day du: ")
    if s!='':
        anbatocom.add(s)
for i in anbatocom:
    print("Sv " + str(i) + ": ")
    k = i.split()
    print("Ho: ", k[0])
    print("Ten: ", k[-1])
#5) 
from math import *
ucab = set()
a = int(input("a = "))
b = int(input("b = "))
k = min(a, b)
c = (isqrt(k))+1
print(c)
for i in range(1, c):
    if a%i==0 and b%i==0: 
        ucab.add(i)
        ucab.add(k//i)
print(ucab)


    
