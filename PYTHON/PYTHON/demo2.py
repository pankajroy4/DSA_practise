# age = input("enter your age: ")
# age = int(age)
# if age >= 14:
#     print("you can play this game")
# else:
#     print("sorry, you can not play this game.")

# name = 'pankaj'
# age = 21
# print("hello {}, your age is {}".format(name, age))
# print("hello {}, your age is {}".format(name+" kumar", age+2))

#__________________________________________________________________________


# name=input("enter your name:")
# i=0
# temp=""
# while(i<len(name)):
#     if name[i] not in temp:
#        temp+=name[i] 
#        print(f"{name[i]}:{name.count(name[i])}")
#     i +=1    



#_______________________________________________________________________    

#num=int(input("enter a no to check whether it is primme or not: "))
# for i in range(2,num):
#     if num%i==0:
#         print("not a prime.")
#         break
# if i==num-1:
#       print("prime.")

#_______________________________________________________________________ 

# num=int(input("enter a no to check whether it is primme or not: "))
# i=2
# while i<num:
#     if(num%i==0):
#         print("it is not prime.")
#         break
#     i +=1

# if i==num:
#     print("it is prime no.")    
# 
# ____________________________________________________________________
# 
# num=[8,7,6,12,10]
# num[2:]="r"

# print(num)


# ____________________________________________________________________

# def reverse(x,y):
#     common=[]
#     for i in x:
#         if i in y:
#              common.append(i)s
        
#     return common   
# x=[1,2,3,4,5,6,7,8,9,10]
# y=[2,5,6,8,9,11]
# print(reverse(y,x))      

# ____________________________________________________________________

# users={
#     'user1':{
#         'name':'pankaj',
#          'age':21,
#          'fav_movie':'panchyat'
#     },

#     'user2':{
#         'name':'rahul',
#         'age':22,
#         'fav_movie':'mirzapur'     
#     }
# }
# print(users)
# print(users['user1'])
#
# print(users['user2'])



# ____________________________________________________________________


# user1 ={
#         'name':'pankaj',
#          'age':21,
#          'fav_movie':'panchyat'
#     }    

# print(user1['name'])
# print(user1.get("names"))
# x=user1.items()
# print(x)
# print(type(x))

# ____________________________________________________________________

# def cube_finder(x):
#     cube={}
#     for i in range(1,x+1):
#         cube[i]=i**2
#     return cube  

# print(cube_finder(5))      

# ____________________________________________________________________

# def word_counter(s):
#     result={}
#     for i in s:
        
#         result[i]=s.count(i)
#     return result


# print(word_counter("pankaj"))        

# ____________________________________________________________________

# from math import sqrt
# import math
# temp=set()
# instr=input("enter a no :")
# for i in range(len(instr)):
#     for j in range(i,len(instr)):
#         substr=int(instr[i:j+1])
#         temp.add(substr)

# temp=sorted(list(temp))
# print(temp)

# outarr=[]
# for num in temp:
#     for val in range(1,int(math.sqrt(num))+1):
#        if val*(val+1)==num:
#         outarr.append(num)
#         break

# print(outarr)

# ____________________________________________________________________
name='pankaj'
first={i:name.count(i) for i in name}

print(first)
    
