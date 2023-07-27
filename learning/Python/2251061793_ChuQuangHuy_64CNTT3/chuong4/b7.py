def find_max(s):
    lst = []
    for j in range(len(list(s))):
        lst_tmp = list(s).copy()
        lst_tmp.pop(j)
        lst.append(int(''.join(lst_tmp)))
    return str(max(lst))

s = input()
n =  int(input())
i = 0
while i < n:
    i = i + 1
    s = find_max(s)
print(s)