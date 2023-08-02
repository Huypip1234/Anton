# Bài 1:
s = set(range(100))
for x in s:
    print(x, end= ' ')
    
# Bài 2:
s = set(range(1, 200, 2))
for x in s:
    print(x, end= ' ')

# bài 3:
s = input("Nhập các số, cách nhau bởi ký tự trống: ")
lst = list(map(int, s.split()))
tap_hop = set(lst)
size = len(tap_hop)
max_value = max(tap_hop)
min_value = min(tap_hop)
print("Tập hợp:", tap_hop)
print("Số phần tử của tập:", size)
print("Giá trị lớn nhất trong tập:", max_value)
print("Giá trị nhỏ nhất trong tập:", min_value)

# bài 4:
ho_ten_sinh_vien = []
print("Nhập họ và tên của sinh viên:")
while True:
    ho_ten = input()
    if ho_ten:
        ho_ten_sinh_vien.append(ho_ten)
    else:
        break
print("\nCác họ và tên của sinh viên trong lớp:")
for ho_ten in ho_ten_sinh_vien:
    print(ho_ten)

# Bài 5:
from math import *
n= int( input("Nhap N = "))
uoc = set()
for i in range(1,isqrt(n)+1):
    if n%i==0: 
        uoc.add(i)
        if i != n/i: uoc.add(n//i)
print("Cac uoc so:", uoc)

# Bài 6:
a = int(input("Nhập a: "))
b = int(input("Nhập b: "))
min_value = min(a, b)
usc = set()
for d in range(1, min_value + 1):
    if a % d == 0 and b % d == 0:
        usc.add(d)
print("Các ước số chung của a và b là:", usc)

# Bài 7:
s = input("Nhập dãy số nguyên: ")
lst = s.split(";")
Set = set(map(int, lst))
cnt = len(Set)
print("Day so:", Set)
print("Số lượng số nguyên khác nhau trong dãy:", cnt)

# Bài 8:
def get_valid_number(prompt):
    while True:
        try:
            num = int(input(prompt))
            if 1 <= num <= 45:
                return num
            else:
                print("Số phải nằm trong khoảng từ 01 đến 45.")
        except ValueError:
            print("Vui lòng nhập số nguyên.")

def count_matching_numbers(list1, list2):
    # Hàm này đếm số lượng số trùng nhau giữa hai danh sách
    return len(set(list1) & set(list2))

if __name__ == "__main__":
    # Nhập vào N người chơi
    N = int(input("Nhập số lượng người chơi: "))

    # Nhập vào bộ số của N người chơi
    players = []
    for i in range(N):
        print(f"Nhập bộ số thứ {i + 1} của người chơi (6 số từ 01 đến 45):")
        player_numbers = [get_valid_number(f"Nhập số thứ {j + 1}: ") for j in range(6)]
        players.append(player_numbers)

    # Nhập vào bộ số giải đặc biệt
    print("\nNhập bộ số giải đặc biệt (6 số từ 01 đến 45):")
    special_numbers = [get_valid_number(f"Nhập số thứ {i + 1}: ") for i in range(6)]

    # Tìm và in ra các bộ số của người chơi thắng cuộc
    print("\nCác bộ số của người chơi thắng cuộc:")
    for i, player_numbers in enumerate(players, 1):
        if count_matching_numbers(player_numbers, special_numbers) >= 5:
            print(f"Người chơi {i}: {', '.join(map(str, player_numbers))}")


# bài 9:

if __name__ == "__main__":
    # a. Nhập danh sách mã nhân viên của cả 3 phòng
    employee_list = input("Nhập danh sách mã nhân viên của cả 3 phòng, ngăn cách bởi dấu phẩy: ")
    employee_list = [int(emp_id) for emp_id in employee_list.split(",")]

    # Tạo tập hợp cho từng phòng
    nhansu_set = set(employee_list[:employee_list.index(0)])
    hanhchinh_set = set(employee_list[employee_list.index(0) + 1:employee_list.index(-1)])
    truyenthong_set = set(employee_list[employee_list.index(-1) + 1:])

    # b. Ba phòng ban này sử dụng bao nhiêu nhân viên?
    total_employees = len(nhansu_set) + len(hanhchinh_set) + len(truyenthong_set)
    print(f"Ba phòng ban này sử dụng tổng cộng {total_employees} nhân viên.")

    # c. In ra danh sách các mã nhân viên thuộc cả 3 phòng
    employees_in_all_departments = nhansu_set & hanhchinh_set & truyenthong_set
    print("Các mã nhân viên thuộc cả 3 phòng:", ', '.join(str(emp_id) for emp_id in employees_in_all_departments))

    # d. In ra danh sách các mã nhân viên chỉ thuộc 1 phòng
    employees_in_one_department = (nhansu_set ^ hanhchinh_set ^ truyenthong_set) - employees_in_all_departments
    print("Các mã nhân viên chỉ thuộc 1 phòng:", ', '.join(str(emp_id) for emp_id in employees_in_one_department))

    # e. Tìm cặp phòng dùng chung nhiều nhân viên nhất
    max_shared_employees = len(nhansu_set & hanhchinh_set)
    max_shared_departments = [("Nhân sự", "Hành chính")]
    if len(hanhchinh_set & truyenthong_set) > max_shared_employees:
        max_shared_employees = len(hanhchinh_set & truyenthong_set)
        max_shared_departments = [("Hành chính", "Truyền thông")]
    elif len(nhansu_set & truyenthong_set) > max_shared_employees:
        max_shared_employees = len(nhansu_set & truyenthong_set)
        max_shared_departments = [("Nhân sự", "Truyền thông")]
    elif len(nhansu_set & hanhchinh_set & truyenthong_set) == max_shared_employees:
        max_shared_departments.append(("Nhân sự", "Hành chính", "Truyền thông"))

    print("Các cặp phòng dùng chung nhiều nhân viên nhất:")
    for departments in max_shared_departments:
        print('-'.join(departments))

    # f. Với từng phòng, in ra mã nhân viên đầu tiên của phòng (có mã nhỏ nhất)
    print("Mã nhân viên đầu tiên của từng phòng:")
    print("Nhân sự:", min(nhansu_set))
    print("Hành chính:", min(hanhchinh_set))
    print("Truyền thông:", min(truyenthong_set))


    

