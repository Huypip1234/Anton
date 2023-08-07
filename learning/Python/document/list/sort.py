lst = list([3, 4, 2, 1])
lst.sort()
print(lst) #[1, 2, 3, 4]

#reverse
lst.sort(key=None, reverse=True)
print(lst) #[4, 3, 2, 1]

#key
lst2 = ["BCA", "ABC"]
lst2.sort(key=str.lower) #chuyen thuong roi moi sort
print(lst2)

lst3 = ["333", "222"]
lst3.sort(key=int) #chuyen sang int roi moi sort
print(lst3)
