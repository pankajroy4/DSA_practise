# arr=[1,2,3,4,5,6,7,8]
# sub=[1]
# x=0
# y=4
# ans=0
# # sub=arr[y:x]
# # print(sub)
# while len(sub)>0:
#     sub=arr[x:y]
    
#     ans+=min(sub)
    
#     x=len(sub)+1
#     y=x+len(sub)+1
# print(ans)


# n=int(input())
# arr=[int(x) for x in input().split()]
# arr=sorted(arr,reverse=True)
# laddos=0
# laddos+=len(arr)
# for i in range(len(arr)-1):
#     if arr[i]>arr[i+1]:
#         laddos+=1
# print(laddos)


# __________________command line argument_____________________________

import sys
if int(sys.argv[1])%2==0:
    print("Even")
else:
    print("Odd")
print(sys.argv)
