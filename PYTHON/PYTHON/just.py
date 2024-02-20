# a,b=int(input("enter two no:").split(","))
# # a=int(a)
# # b=int(b)
# a=a+2
# b=b+3
# print(f"sum is {a+b}")

string="Hrithik"
x=len(string)
for i in range(x):
    for j in range(x-i):
        print(" ",end='')
    for k in range(i+1):
        print(string[k],end=" ")  
       
    print(end="\n")