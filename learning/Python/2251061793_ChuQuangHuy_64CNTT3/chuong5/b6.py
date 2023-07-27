n = int(input("Nhập số nguyên n: "))
fibonacci = [0, 1]  
while fibonacci[-1] < n:
    fibonacci.append(fibonacci[-1] + fibonacci[-2])  
fibonacci.pop()  # Loại bỏ số Fibonacci cuối cùng lớn hơn n
print("Dãy Fibonacci nhỏ hơn", n, "là:", fibonacci)
