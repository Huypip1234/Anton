# Cut
s = '0123456789'
print(s[3:6]) # 345

print(s[3:]) # 3456789
print(s[:6]) # 012345

print(s[-7:-4]) # 345

print(s[-4:-7]) #
print(s[-4:-7:-1]) # 654 (-1: buoc nhay, default la 1)
print(s[9::-1]) # 9876543210