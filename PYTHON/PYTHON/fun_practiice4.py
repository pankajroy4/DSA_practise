# def greater (num1, num2):
#     if num1> num2:
#         return num1
#     else:
#          return num2    

# x,y=input("enter two no to find greater noo: ").split(",")
# large=greater(x,y)
# print(f"{large} is greater.")         


# <<---------------equality handling------------------->>

def greater (num1, num2):
    if num1> num2:
        return num1
    elif num1<num2:
         return num2  
    else:
         print("both are equal.")       

x,y=input("enter two no to find greater noo: ").split(",")
x=int(x)
y=int(y)
large=greater(x,y)
if large ==x or large == y:
    print(f"{large} is greater.")           