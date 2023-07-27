a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))
set = {a, b, c} #Set type
sortedSet = sorted(set)
print("Xep tang dan: ", end='')
for i in range (len(sortedSet)-1):
    print(str(sortedSet[i]), end=' ')
print(str(sortedSet[len(sortedSet)-1])) 
