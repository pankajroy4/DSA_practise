def fibonacci(x):
    a=0
    b=1
    if x==1:
        print(a)
    elif x==2:
        print(a,b)
    else:
        print(a,b,end=" ")
        for i in range(x-2):
            c=a+b
            a=b
            b=c
            print(b,end= " ")    


x=input("how many number you want to print  from fibonacci series :")
x=int(x)
fibonacci(x)





