
# n=int(input())
# arr=[]
# for i in range(n):
#     arr.append(int(input()))
# arr=sorted(arr,reverse=True)
# sum=0
# count=0
# for i in range(n):
#     for j in range(0,i+1):
#         sum+=arr[j]
#     if sum>0:
#         count+=1
#     sum=0
# print(count)
# input format
    #  5
    #  2
    #  0
    #  -3
    #  6
    #  1



# n=int(input())
# k=int(input())
# arr=[int(x) for x in input().split()]
# exists=[]
# for i in arr[:k]:
#     if i not in exists:
#         exists.append(i)
# print(len(exists))




# def is_special(input1,input2):
#     count=0
#     for i in input1:
#         i=int(i)
#         if i<10:
#             break
#         else:
#             for j in range(10,i+1):
#                 sum=j
#                 while(j>0):
#                     sum+=j%10
#                     j=j//10
#                     if sum==i:
#                         count+=1
#                         break
#     return count
# arr=["12","3"]
# n=2
# print(is_special(arr,n))




# k=int(input())
# sub_c=[int(x) for x in input().split()]
# n=int(input())
# st_c=[int(x) for x in input().split()]
# sub_c=sorted(sub_c)
# limit=0;
# pair=0
# for i in st_c:
#     for j in sub_c:
#      if i>j:
#         pair+=1
# print(pair)
























