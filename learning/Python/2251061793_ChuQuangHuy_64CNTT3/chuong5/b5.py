def pascal(n):
    triangle = []

    for i in range(n):
        row = [1] * (i + 1)
        for j in range(1, i):
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
        triangle.append(row)

    return triangle

def print_pascal(triangle):
    max_width = len(" ".join(map(str, triangle[-1])))
    for row in triangle:
        row_str = " ".join(str(num) for num in row)
        print(row_str.center(max_width))

n = int(input("Nhập số dòng của tam giác Pascal: "))
pascal_triangle = pascal(n)
print_pascal(pascal_triangle)
