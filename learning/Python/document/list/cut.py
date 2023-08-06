# Replace
lst = list([1, 2, 3, 4])
lst[-1] = list('abc')
print(lst) #[1, 2, 3, ['a', 'b', 'c']]

# Insert
lst2 = list([1, 2, 3, 4])
lst2[1:3] = [1, 2, 3]
print(lst2) #[1, 1, 2, 3, 4]

# Nguoc
lst3= list([1, 2, 3, 4])
print(lst3[3:0:-1]) #[4, 3, 2]
print(lst3[2::-1]) #[3, 2, 1]