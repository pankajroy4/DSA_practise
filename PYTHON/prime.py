# # List of prime number between 0 and 100
# import math
# def prime(a,b):
#     list=[]
#     for i in range(2,b+1):
#         j=int(math.sqrt(i))+1
#         flag=1
#         for x in range(2,j):
#             if i%x==0:
#                 flag=0
#                 break
#         if flag==1:
#             list.append(i)
#     return list

# print(prime(1,100))


# ------------------------------------------------------------------------

# n=int(input())
# arr=[int(x) for x in input().split()]
# arr2=[x for x in arr if x>=0]
# leen=len(arr2)
# if leen%2==0:
#     print(arr2[leen//2-1])
# else:
#     print(arr2[leen//2])

# -------------------------------------------------------------------
def solve(n,s):
    buff,x,count=s[0],1,1
    for i in range(1,n):
        if buff==s[i]:
            count+=1
        else:
            x*=count
            count,buff=1,s[i]
    return x*count

s=input()
leen=len(s)
print(solve(leen,s))

# sample input:aabbccdd
#             aabcdffgg
#             abcdefffrrgggtt

 
# ------------------------------------------------------------------

