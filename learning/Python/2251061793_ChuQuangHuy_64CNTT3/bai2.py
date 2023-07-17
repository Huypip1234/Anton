s = input("Nhập họ tên đầy đủ: ")
k = s.split(" ")
dem=""
print("Họ: " + k[0])
for i in range(1, len(k)-1):
    dem+=k[i]
    dem+=" "
print("Đệm: " + dem)
print("Tên: " + k[len(k)-1])