n = int(input("N = "))
m = int(input("M = "))
count=0
if n%5000==0 and n/5000<=m:
    count+=1
if n%2000==0 and n/2000<=m:
    count+=1
if n%1000==0 and n/1000<=m:
    count+=1

