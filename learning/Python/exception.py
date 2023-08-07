while True: 
    try:
        n = int(input("N = "))
        if n==0: break
        if n<0:
            raise ValueError("Loi so am!")
    except ValueError as ex:
        if str(ex)=="Loi so am!":
            print(str(ex))
        else: print("Loi gi do!")
        
    
