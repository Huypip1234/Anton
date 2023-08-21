print([1, 2, 1].count(1)) #2

print([1, 2, 1].index(1)) # giong find -> 0

a = [1, 2, 3]
a.clear()
print(a) #[]

a.append(1) #[1]

a.extend([1, 2 , 3]) #Giong append nhung truyen vao list
print(a) #[1, 1, 2 ,3]

a.insert(0, 99)
print(a) #[99, 1, 1, 2 ,3]

a.pop(1) #Delete tu cuoi, neu ko tham so thi delete cuoi
a.remove(1) #Delete tu dau
print(a) #[99, 2 ,3]

a.reverse()
print(a) #[3, 2, 99]

print(max(a)) #99
print(sum(a)) #104