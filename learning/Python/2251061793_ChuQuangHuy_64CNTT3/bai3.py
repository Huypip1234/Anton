from datetime import datetime, timedelta

d = int(input("Nhập ngày d = "))
m = int(input("Nhập tháng m = "))
y = int(input("Nhập năm y = "))
k = int(input("Nhập số ngày k = "))

# ktra input
while d < 1 or d > 31 or m < 1 or m > 12 or y < 0:
    print("Nhập lại!")
    d = int(input("Nhập ngày: "))
    m = int(input("Nhập tháng: "))
    y = int(input("Nhập năm: "))
    k = int(input("Nhập số ngày k = "))

x = datetime(y, m, d)

newDate = x + timedelta(days=k)

newD = newDate.day
newM = newDate.month
newY = newDate.year

print(str(k) + " ngày tiếp theo là ngày: " + str(newD) + " / " + str(newM) + " / " + str(newY))
