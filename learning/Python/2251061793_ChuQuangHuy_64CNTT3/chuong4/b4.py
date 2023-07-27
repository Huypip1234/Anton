s = input("Nhap chuoi: ")
s2=""
for i in s:
    if i not in "0123456789":
        s2+=i
print(s2)
    