age=input("enter your age: ")
age=int(age)

if 0<age<=3:
    print("icket price: free.")
elif 3<age<=10:
    print("ticket price: 150")   
elif 10<age<=60:
    print("ticket price: 250")
else:
     print("ticket price: 200")            