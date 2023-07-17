
n = int(input("N = "))
sum=0
rs=0
for i in range (1, n+1):
    sum+=i
    rs+=sum**0.5
print("F(" + str(n) + ") = " + str('%.7f' %rs)) 
#'%.7f' %rs = round() -> Should use instead of round
    
