def generate_strings(X, N):
    if N <= 0:
        return set()
        
    strings = set()
    for string in X:
        if len(string) < N:
            strings.add(string)
    for A in X:
        for B in X:
            new_string = A + B
            if len(new_string) < N:
                strings.add(new_string)
    return strings
X = ('()',)
N = int(input("Nhập độ dài N: "))
result = generate_strings(X, N)
print("Các chuỗi độ dài ít hơn", N, "của tuple X là:")
print(result)