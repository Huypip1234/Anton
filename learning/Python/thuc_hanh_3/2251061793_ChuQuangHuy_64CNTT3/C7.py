# Bài 1
D = {
    0: "zero",
    1: "one",
    2: "two",
    3: "three",
    4: "four",
    5: "five",
    6: "six",
    7: "seven",
    8: "eight",
    9: "nine"
}
for key in sorted(D.keys()):
    print(D[key])

# Bài 2
D = {
    "a": 2,
    "b": 1,
    "c": 3,
    "d": 4,
    "e": 1
}

unique_values = set(D.values())
for value in unique_values:
    print(value)

# bài 3:
D = {
    "a": 1,
    "b": 2,
    "c": 3,
    "d": 4,
    "e": 5,
    "f": 6
}

values = list(D.values())
values.sort(reverse=True)
for value in values[:3]:
    print(value)

# BÀi 4:
s = "dai hoc thuy loi"
d = { x:s.count(x)  for x in s}
print(d)

# Bài 5:
prices = { "banana": 4, "apple": 2, "orange": 1.5, "pear": 3 }
stock = { "banana": 6, "orange": 32, "pear": 15 }

total_value = {}
for fruit in prices:
    total_value[fruit] = int(prices[fruit] * stock.get(fruit, 0))

fruits = sorted(total_value.items(), key=lambda x: x[1], reverse=True)

for fruit, value in fruits:
    print(f"{fruit.ljust(7)} {str(value).rjust(5)}")

# bài 6:
import random
r = {}
for month in range(1, 13):
    r[month] = [random.uniform(100, 4000) for _ in range(20)]
print(r)

# Bài 7:
A = {'a': 3, 'b': 5, 'h': 15}
B = {'e': 3, 'b': 7, 'c': 12, 'h': 12, 'w': 8}

C = {}
for key in set(A.keys()) | set(B.keys()):
    if key in A and key in B:
        C[key] = max(A[key], B[key])
    elif key in A:
        C[key] = A[key]
    else:
        C[key] = B[key]
print(C)

