s = input("Nhap day: ")
lst = s.split(" ")
maxx=0
x = []
for i in  lst:
    if(len(i)>maxx):
        x=[]
        maxx=len(i)
        maxxStr = i
        x.append(i)
    elif len(i)==maxx:
        x.append(i)
print("Chuoi dai nhat: " + maxxStr)
print("Cac chuoi cung do dai: " + str(x))