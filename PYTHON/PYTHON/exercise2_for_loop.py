n=input("enter any no: ")
sum=0
for i in range(len(n)):  #--------> range(len(n)+1) : this is wrong becz i starts with zero
    sum += int(n[i])
print("sum is :",sum)    