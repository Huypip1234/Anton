import re

def check_email(email):
    pattern = r'^[\w\.-]+@[\w\.-]+\.\w+$'
    if re.match(pattern, email):
        return True
    else:
        return False

chuoi = input("Nhập vào chuỗi cần kiểm tra: ")
if check_email(chuoi):
    print("Chuỗi là một địa chỉ email hợp lệ.")
else:
    print("Chuỗi không phải là địa chỉ email hợp lệ.")
