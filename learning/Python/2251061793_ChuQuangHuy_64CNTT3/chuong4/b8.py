s = input("Nhap s:")
for i in s:
    if i in '1234567890':
        s = s.replace(i, '?')
print(s)