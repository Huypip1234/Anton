n = int(input("N = "))
# s=0
# for i in range(1, n+1, 2):
#     s+=i*i

#(n*(n+1)*(n+2))/6: tong bp so le (tu 1 -> n le) or chan tu (2 -> n chan)
s = (n*(n+1)*(n+2))//6

print("P(" + str(n) + ") = " + str(s))
