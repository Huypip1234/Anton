s = input("S = ")
d = []
dem = 0
k = int(input("k = "))
for i in range(0, len(s), k):
    d.append(s[i:i+k])
for i in range(len(d)):
    try:
        if d[i]==d[i+1]:
            dem+=1
    except:
        break
if dem==0:
    print("Day khong lap")
else:
    print("Day lap bac", k)
        
