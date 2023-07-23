n = int(input()); lst=[x for x in range(1, n+1)]
# 1 2  3  4 5
# 4 5  1  2
# 2 4  5
# 2  4
# 4

lst1 = []
lst2 = []

while len(lst)>3:
    lst1=lst[:2]
    lst2=lst[3:]
    lst=lst2+lst1

print(lst[1])

# 1 2  3  4 5 6 7 8
# 4 5  6  7 8 1 2
# 7 8  1  2 4 5
# 2 4  5  7 8 
# 7 8  2  4
# 4 7  8
# 4  7
# 7
    
    