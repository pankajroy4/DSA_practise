
# # expression=input("Enter a Valid Postfix Eexpression:")
# # postfix=[]
# # for i in expression:
# #     if 48<=ord(i)<=57:
# #         postfix.append(int(i))
# #     else:
# #         opd1=postfix.pop()
# #         opd2=postfix.pop()
# #         if i=="+":
# #             postfix.append(opd1+opd2)
# #         if i=="-":
# #             postfix.append(opd1-opd2)
# #         if i=="*":
# #             postfix.append(opd1*opd2)
# #         if i=="/":
# #             postfix.append(opd1/opd2)
# #         if i=="%":
# #             postfix.append(opd1%opd2)
# # print(postfix[0])

# x=5
# while(x=x-1):
#     print(x)

# ------------------------------------------------------------
# def solve(i,values=[]):
#     values.append(i)
#     print(values)
#     return values 
# solve(1)
# solve(2)
# solve(3)


# def fun(a,b):
#     return b if a==0 else fun(b%a,a)
# print(fun(30,70))