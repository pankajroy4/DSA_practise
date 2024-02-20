
# def fun(str):
#     if len(str)==0 or str==None:
#         return -1
#     num=[int(x) for x in str if x=="1" or x=="0"]
#     op=[x for x in str if x=="A" or x=="B" or x=="C"]
#     ans=num[0]
#     num=num[1:]
#     i=0
#     for y in op:
#         x=num[i]       
#         if y=="A":
#             ans=ans & x
#         elif y=="B":
#             ans=ans|x
#         else:
#             ans=ans^x   
#         i+=1
#     return ans

# str="1C0C1C1A0B1"
# print(fun(str))


##---------------------------------------------------------------------------------

# # taking multiline input in list 
    # Input format:
    # 12
    # 34
    # 56
    # 33
    # 23
    #1. By map(if no of input known)                                                  
# fun=lambda z:int(input())
# c=map(fun,range(5))
# print(list(c))

    # OR

# c=map(lambda z:int(input()),range(5))
# print(list(c))

    # 2. By list comprehension(if no of input known)

# c=[int(input()) for i in range(5)]
# print(c)

# #--------------------------------------------------------------------------------------

# # taking multiple single line input 
#     # Input format:
#     # 12 34 56 77 88 22 33 44 55 .....

#     #1. By map

# c=map(int,input().split())
# print(list(c))

#     #2. By list comprehension

# c=[int(x) for x in input().split()]
# print(c)

# ----------------------------------------------------------------

str1="pankaj"
str2="pankaj"
print(str1==str2)    #output---> True ,But in Java ,it is false

    