s = input("Nhap S: ")
if "!" not in s:
    s+="!!"
    print("Chuoi S sau khi xu ly: " + s)
    exit()
else:
    if s.count("!")%2!=0:
        s+="!"
        print("Chuoi S sau khi xu ly: " + s)
        exit()
print("Chuoi S sau khi xu ly: " + s)
    
