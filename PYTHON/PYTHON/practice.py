
# # ------------------------------------------example 1--------------------------------------------


# def negative_list(abc):
#     negative = []
#     for i in abc:
#         negative.append(-i)
#     return negative


# number = [10, 11, 12, 10, 13, 14, 16, 10, 25, 30, 10]
# print(negative_list(number))

# # ------------------------------------------example 2----------------------------------------------


# def square_list(x):
#     square = []
#     for i in x:
#         square.append(i**2)
#     return square


# number = []
# a = int(input("how many data you want to add in list: "))
# for i in range(a):
#     b = int(input("enter data to add in list: "))
#     number.append(b)

# square = square_list(number)
# print(square)


# # ------------------------------------------example 3-------------------------------------------------

# #                                --------------3(a)-------------


# def list_reverse(x):
#     rev = []
#     for i in range(len(x)):
#        rev.append(x.pop())

#     return rev


# number = [1, 2, 3, 4]
# print(list_reverse(number))

# #                                ----------------3(b)--------------


# def list_reverse(x):
#     x.reverse()
#     return x


# number = [1, 2, 3, 4]
# print(list_reverse(number))

# #                                 -----------------3(c)--------------


# def list_reverse(x):
#     return x[::-1]


# number = [1, 2, 3, 4]
# print(list_reverse(number))


# # -------------------------------------------example 4----------------------------------------------------


# def word_list_reverse(x):
#     rev = []
#     for i in x:
#          rev.append(i[::-1])
#     return rev


# word = ["abc", "def", "ghi"]
# print(word_list_reverse(word))


# # --------------------------------------------example 5--------------------------------------------------

# #                                   -------------5(a)------------------


# def even_odd(x):
#     odd = []
#     even = []
#     for i in x:
#         if i % 2 == 0:
#             even.append(i)
#         else:
#             odd.append(i)

#     output = [odd, even]
#     return output


# num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
# print(even_odd(num))

# #                                ----------------5(b)--------------


# def even_odd(x):
#     odd = []
#     even = []
#     for i in x:
#         if i % 2 == 0:
#             even.append(i)
#         else:
#             odd.append(i)

#     filtered = []
#     filtered.append(odd)
#     filtered.append(even)
#     return filtered


# num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
# print(even_odd(num))


# # --------------------------------------------example 6 - ------------------------------------------------------

# #                                  ---------------6(a)-------------


# def common_element(x, y):
#     common = []
#     for i in x:
#         for j in y:
#             if i == j:
#                 common.append(i)
#     return common


# num1 = [1, 2, 4, 6, 8, 12, 20, 28, 29, 35, 11]
# num2 = [9, 1, 6, 10, 12, 11, 28, 35]

# print(common_element(num1, num2))

# #                                 ----------------6(b)--------------


# def common_element(x, y):
#     common = []
#     for i in x:
#         if i in y:
#            common.append(i)
#     return common


# num1 = [1, 2, 4, 6, 8, 12, 20, 28, 29, 35, 11]
# num2 = [9, 1, 6, 10, 12, 11, 28, 35]

# print(common_element(num1, num2))


# # --------------------------------------------- example(7)------------------------------------------------


# def total_list(x):
#     y = 0
#     for i in x:
#       if type(i) == list:
#           y += 1
#     return y


# number = [1, 2, 3, [4, 5, 6], [7, 8, 9]]
# print(total_list(number))


# # -------------------------------------------- example(8) - -------------------------------------------------

# abc = [1, 1, 2, 2, 3, 4, 5]
# x = []
# x = abc
# y = 0
# for i in abc:

#     if i in x:
#         continue
#     else:
#         y += 1
# print(i)

# # ------------------------------------------------example(9) - -----------------------------------------------

# user = {
#     "name": "pankaj",
#     "age": 24,


# }

# user["address"] = "bhopal"
# user["fav_song"] = ["barish", "tu_chale"]

# print(user)
# x = user.popitem()
# print(x)

# # -----------------------------------------------example 10 (a) - ---------------------------------------------


# def reverse(x):
#     y = []
#     for i in x:
#         y.append(i[::-1])
#     return y


# x = ['abc', 'def', 'ghi']
# print(reverse(x))

# # ------------------------------------------------example 10 (b)------------------------------------------------

# x = ['abc', 'def', 'ghi']
# z = [y[::-1] for y in x]
# print(z)

# # ------------------------------------------------example 11 (a) - -----------------------------------------------


# mix = ["orange", 5, 7, 20, 16, 1.2, True, False, [8, 9, 10], (11, 12, "mango")]
# string_of_num = []
# for i in mix:
#     if type(i) is int:
#        string_of_num.append(str(i))
#     if type(i) is list:
#         for x in i:
#             if type(x) is int:
#                 string_of_num.append(str(x))
#     if type(i) is tuple:
#         for x in i:
#             if type(x) is int:
#                 string_of_num.append(str(x))

# print(string_of_num)

# # --------------------------------------------example 11 (b)----------------------------------------------------

# mix = ["orange", 5, 7, 20, 16, 1.2, True, False, [8, 9, 10], (11, 12, "mango")]
# string_of_num = []
# string_of_num = [str(i) for i in mix if type(i) is int]
# print(string_of_num)

# # ------------------------------------------------example 12-----------------------------------------------------


# number = {}
# for i in range(1, 6):
#     number[i] = i**2

# print(number)
# print(type(number))

# # -------------------------------------------------example 13----------------------------------------------------

# s = "pankaj"
# temp = ""

# for i in range(len(s)):
#     if s[i] not in temp:
#         temp += s[i]
#         print(f"number of {s[i]} : {s.count(s[i])}")


# #  -------------------------------------------------example 14----------------------------------------------------


# def to_power(num,*args):
#     if args:
#         return [i**num for i in args]     # ------>>list comprehension
#     else:
#        return "hey you did't pass any args."

# list1=[1,2,3]
# power=3
# print(to_power(power,*list1))

# #  -------------------------------------------------example 15------------------------------------------------------


# def fun(name,**string):
#         if string.get('reverse_str'):
#           return [i[::-1].title() for i in name]
#         else:
#            return [i.title() for i in name]

# name=["pankaj","rahul"]
# # print(fun(name))
# print(fun(name,reverse_str=True))

# # --------------------------------------------------example 16 (a)-----------------------------------------------------

# def position_finder(names,string):
#     pos=0
#     for name in names:
#         if name==string:
#             return pos
#         pos +=1

# names=["pankaj","rahul,","ram"]
# print(position_finder(names,"ram"))

# # ---------------------------------------------------example 16 (b)------------------------------------------------

# def position_finder(names, string):
#     for x, name in enumerate(names):
#         if name == string:
#             return x
#     return -1


# names = ["pankaj", "rahul,", "ram"]
# print(position_finder(names, "ram"))


# # ----------------------------------------------------example 17 -----------------------------------------------------
# number=[1,2,3,4]
# num=[]
# def square(a):
#     return  a**2

# for i in number:
#    num.append(square(i))

# print(num)


# # ----------------------------------------------------example 18-----------------------------------------------------


# def sum1(*args):
#     total=0

#     if all([(type(i)==int or type(i)==float) for i in args]):
#         for i in args:
#             total +=i
#         return total
#     else:
#         return "please enter valid input"


# print(sum1(1,2,3.5))
# print(sum1(1,2,3.5,"ram"))


# # ----------------------------------------------------example 20----------------------------------------------------

# guitars=[
#     {"model": "yamaha f310","price":800400},
#     {"model": "faith naptunne","price":50000},
#     {"model": "faith apollo venus","price":3500},
#     {"model": "taylor 814ce","price":450000}
# ]

# # print(sorted(guitars,key=lambda item:item.get("price")))
# l=sorted(guitars,key=lambda item:item["price"])
# for i in l:
#     print(i)

# # ----------------------------------------------------example 21----------------------------------------------------
# guitars=[
#     {"model": "yamaha f310","price":800400},
#     {"model": "faith naptunne","price":50000},
#     {"model": "faith apollo venus","price":3500},
#     {"model": "taylor 814ce","price":450000}
# ]

# # print(sorted(guitars,key=lambda item:item.get("price")))
# l=sorted(guitars,key=lambda item:item["price"],reverse=True)
# for i in l:
#     print(i)


# # ----------------------------------------------------example 21----------------------------------------------------
# def ret(list,**kwargs):
#     if kwargs.keys():

#         return [i[::-1].title() for i in list]

#     else:
#        return [i.title() for i in list]

# x=['pankaj','ram']


# print(ret(x))

# print(ret(x,hello='ram'))


# # ----------------------------------------------------example 21----------------------------------------------------
# def pos_finder(x,s):
#     pos=0
#     for i in x:
#         if s==i:
#             return pos
#         pos +=1
#     return -1

# x=['ram','shyam','mohan']

# print(pos_finder(x,'geeta'))


# # _____________________________________________________________________________________

# def pos_finder(x,s):
#     for i,j in enumerate(x):
#         if i==s:
#             return j
#     return -1

# x=['ram','shyam','mohan']

# print(pos_finder(x,'geeta'))

# # __________________________________________________________________________________


# import math
# num=input("enter the number:")
# temp=set()
# for i in range(len(num)):
#     for j in range(i,len(num)):
#         substr=int(num[i:j+1])
#         temp.add(substr)

# temp=sorted(list(temp))
# print(temp)
# outarr=[]

# for num in temp:
#     for i in range(1,int(math.sqrt(num))+1):
#         if i*(i+1)==num:
#             outarr.append(num)
#             break


# print(outarr)


# # __________________________________________________________________________________

# number = [1, 2, 3, 4, 5, 6]
# even = list(map(lambda i: i**2, number))
# print(even)
# even = list(filter(lambda i: i**2, number))
# print(even)

# # __________________________________________________________________________________

# number = [2,3,4,5,6,7]
# even = list(map(lambda i: i % 2 == 0, number))
# print(even)
# even = list(filter(lambda i: i % 2 == 0, number))
# print(even)
# # __________________________________________________________________________________

# list1=['user1','user2','user3']
# list2=['pankaj','angad','mohan']
# list3=[21,22,23]

# zipped=list(zip(list1,list2,list3))
# print(zipped)

# # __________________________________________________________________________________

# list1=[('pankaj',21),('raju',22),('mohan',23)]
# print(dict(list1))
# # __________________________________________________________________________________
# num1=[2,9,6,8,4]
# num2=[1,10,4,15,3]

# greater=zip(num1,num2)
# result=[]
# for i in greater:
#     result.append(max(i))

# print(result)
# # __________________________________________________________________________________
# def average(x,y,z):
#     avg=[]
#     obj=zip(x,y,z)
#     for i in obj:
#        avg.append(sum(i)/len(i))
#     return avg

# a=[1,2,3]
# b=[4,5,6]
# c=[7,8,9]
# print(average(a,b,c))

# # __________________________________________________________________________________

# def average(*args):
#     avg=[]
#     obj=zip(*args)
#     for i in obj:
#          avg.append(sum(i)/len(i))
#     return avg

# a=[1,2,3]
# b=[4,5,6]
# c=[7,8,9]
# d=[10,11,12]
# e=[13,14,15]
# print(average(a,b))
# print(average(a,b,c))
# print(average(a,b,c,d))
# print(average(a,b,c,d,e))

# # __________________________________________________________________________________


# average=lambda *args:[sum(i)/len(i) for i in zip(*args)]
# a=[1,2,3]
# b=[4,5,6]
# c=[7,8,9]
# print(average(a,b,c))

# # _____________________vvi concept__________________________

# i,j=map(int,input("enter no:").split())
# print(i)
# print(j)
# print(type(i),type(j))

# # __________________________________________________________________________________

# class phone:
#     def __init__(self, brand, name, price):
#         self.brand = brand
#         self.name = name
#         self.price = price

#     def __add__(self, other):
#         return self.price+other.price


# p1 = phone("samsung", "samsung fold A", 580000)
# p2 = phone("nokia", "nokiia 110", 2400)
# print(p1+p2)


# #_________________________________________________________________________________

# class mobile:
#     def __init__(self,name):
#         self.name=name

# class mobilestore:
#     def __init__(self):
#         self.mobiles=[]

#     def addmobile(self,newmobile):
#         if isinstance(newmobile,mobile):
#             self.mobiles.append(newmobile)
#         else:
#             raise IndentationError (f" \"{newmobile}\" should be the object  of mobile class.")


# obj1=mobile("oneplus 8T")
# obj2=mobilestore()
# print(obj1.name)

# obj2.addmobile(obj1)
# z=obj2.mobiles
# print(z[0].name)

# x='samsung galaxy star pro '
# obj2.addmobile(x)
# print(obj2.mobiles)

# # _________________________________________________________________________________

# class animal:
#     def __init__(self,name):
#         self.name=name

#     def sound(self):
#         return (" you must have to define sound class in subclaas or child class.")   

# class dog(animal):
#     def __init__(self,name):
#      super().__init__(name)


#     def sound(self):
#         return "bhow bhow"


# class cat(animal):
#     def __init__(self,name):
#         super().__init__(name)
    
    


# obj1 =dog('TOMMY')
# print(obj1.sound())     


# obj2=cat("pussy")
# print(obj2.sound())


# # _________________________________________________________________________________
   
#    *******************decimal precision***************


# x=2.363688294
# y="{:.5}".format(x)
# print(y)

# x=tuple(range(1,5))
# print(x)


# s="pankaj"
# pos=s.find("raj")
# print(pos)
# s=input("enter your name: ")
# len=len(s)
# for i in range(len):
#     for j in range(len-i):
#         print(" ",end="")
#     for k in range(i+1):
#         print(f'{s[k]} ',end="")    
#     print()    



# phonebook=map(dict ,input("enetr name and phoone numbers").split())

# print(phonebook["rahul"])
n=0
p=2
print(n%2)
