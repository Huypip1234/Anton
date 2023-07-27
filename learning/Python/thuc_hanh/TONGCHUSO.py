n = int(input("N = "))
k = 2**n
s=str(k) 
lst = [int(x) for x in s] 
# or lst = list(s) => ['1', '2', '3']
# lst = list(map(int, lst))
print("Tong = " + str(sum(lst)))

