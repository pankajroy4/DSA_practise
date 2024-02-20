def greater(num1,num2,num3):
    # if num1>num2:
    #     if num1 >num3: 
    #         return num1
    #     else:
    #         return num3
    # else:
    #     if num2>num3:
    #         return num2
    #     else:
    #         num3  

    # -------------------------------------------
    
    if num1>num2 and num1> num3:
        return num1
    elif num2>num1 and num2>num3:
        return num2
    else:
        return num3        
    
          
x,y,z=input("enter three no: ").split(",")
x=int(x)
y=int(y)
z=int(z)
large=greater(x,y,z)
print(f"{large} is greater.")
