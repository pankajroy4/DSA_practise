# #if value of A=1,B=10,C=100,D=1000 and so on
# #then find the sum of string as per their value
# #input : BBC
# #outpput: 120
# #Explaination: BBC=10+10+100=120

# #Solution 1:

# # str=input()
# # str2="BCDEFGHIJKLMNOPQRSTUVWXYZ"
# # num=1
# # dict={"A":1}
# # for x in str2:
# #     num=num*10
# #     dict[x]=num
# # ans=0
# # print(dict)
# # for x in str:
# #     if x in dict:
# #         ans+=dict[x]
# # print(ans)

# # Solution 2:
# e=input()
# sum=0
# for i in e:
#     p=ord(i)-ord('A')
#     ran=pow(10,p)
#     sum+=ran
# print(sum)
# ---------------------------------------------------------------

# p=4
# q=3
# r=7
# for i in range(3,5):
#     if((p&q)<q):
#         continue
#     p=q+p
#     q=3^q


# print(p+q)


# a=2
# b=5
# c=10
# a=(c+6)&a
# b=(c^5)&c
# if(c>b and (b-8)<(8+b)):
#     c=(b+a)&c
# print(a+b+c)









# Read-Onnly Code below
#input read from STDIN
# a=int(input())
# b=int(input())
# result=GCD(a,b)
# #Value in result printed to STDOUT
# # Write your code 
# import math
# def GCD(a,b):
#     return math.gcd(a,b)


# -----------------------------------------------------------
# arr=[52,66,64,36,45,24,32]
# arr=[33,7,21,14]
# l=len(arr)
# sum=arr[-1]
# falg=0
# for i in range(l-1):
#     falg=0
#     for j in range(i+1,l):
#         if arr[i]>arr[j]:
#             falg=1
#             continue
#         else:
#             falg=0
#             break
#     if falg==1:
#         sum+=arr[i]
#         print(arr[i])


# print(sum)

# def frequency(l):
#     minm=min(l)
#     maxx=max(l)
#     min_count=l.count(minm)
#     max_count=l.count(maxx)

#     ans1=[]
#     ans2=[]
#     for i in l:
#         if l.count(i)==min_count:
#             if i not in ans1:
#                ans1.append(i)
#         if l.count(i)==max_count:
#             if i not in ans2:
#                 ans2.append(i)
#     return sorted(ans1),sorted(ans2)


# def frequency(l):
#     min_count=1000
#     max_count=0
#     for i in l:
#         x=l.count(i)
#         if x<min_count:
#             min_count=x
#         if x>max_count:
#             max_count=x
#     ans1=[]
#     ans2=[]
#     for i in l:
#         if l.count(i)==min_count:
#             if i not in ans1:
#                 ans1.append(i)
#         if l.count(i)==max_count:
#             if i not in ans2:
#                 ans2.append(i)
#     return sorted(ans1),sorted(ans2)
# arr=[13,12,11,13,14,13,7,11,13,14,12,14,14,7]
# print(frequency(arr))

# ---------------------------------------------------------------------

# def matched(s):
#     counter=0
#     i=0
#     while counter>=0 and i<len(s):
#         if s[i]=="(":
#             counter+=1
#         elif s[i]==")":
#             counter-=1
#         i+=1
#     if counter ==0:
#         return True
#     return False

# # s="Zb%78"
# # s="(7)a"
# # s="a)*(?"
# s="((jkl)78(A)&I(8(dd(FJI:),):)?)"
# print(matched(s))

print(10|5)