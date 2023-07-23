def abc():
    return 'abc version 1'
def abc(a):
    return 'abc version 2'
def abc(a, b):
    return 'abc version 3'
#print(abc()) # lỗi, hàm abc cần 2 tham số a và b
print(abc(1, 2)) # ok, in ra 'abc version 3'

# tham số tùy biến (Dau * ko phai con tro, de thong bao custom tham so)
def sayhello(*names):
# duyệt các tham số
    for name in names:
        print("Hello", name)
# gọi hàm với 4 tham số
sayhello("Monica", "Luke", "Steve", "John")
# gọi hàm với 3 tham số
sayhello("Aba", "Donald", "Pence")
