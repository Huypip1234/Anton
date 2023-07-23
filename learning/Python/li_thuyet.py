#Dit me may
print(type (12 + 0.1))

#input always is string

#string much line
longer = """This string has
multiple lines in it"""
#raw data

#loop
print("Hello " * 3) #Hello Hello Hello 

# chia bthg: /
# chia lấy nguyên: //
# a mu b: ũ a**b

#x **= 5 <=> x = x ** 5

#membership operator
print("Code" in "Codelearn") #true
print("Py" not in "Python") #false

#identity operator: check co tro toi cung 1 doi tuong ko
print(1 is 1) #true
print(1 is not 1) #false

#So sanh
x = True
y = False
print(x and y) #false
print(x or y) #true
print(not x) #false (nguoc lai value)

#isalnum(), isalpha(), isnumeric()

s = 'Python String'
# s[0] là phần tử đầu tiên trong chuỗi
print(s[0])
# s[-1] là phần tử cuối cùng trong chuỗi
print(s[-1])

#range slice
print(s[0:2]) #Py
print(s[3:5]) #ho
print(s[7:]) #String
print(s[:6]) #Python
print(s[7:-4]) #St

#remove while looping
lst=[]
for i in lst.copy():
    if(i%2!=0): 
        lst.remove(i)
