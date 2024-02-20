# # str=input()
# # n=0
# # exist=""
# # for ch in str:
# #     if ch not in exist:
# #         exist+=ch
# #         x=str.count(ch)
# #         if(x==2):
# #             n+=1
# # print(n) 

# # --------------------------------------------------------------   
# # n=int(input())
# # ans=10**6
# # while(n>=1):
# #     x=int(input())
# #     if x<ans:
# #         ans=x
# #     n-=1    
# # print(ans)  
# # ---------------------------------------------------------------------------
# # n=int(input())
# # array=[]
# # for i in range(n):
# #     array.append(int(input()))
# # for i in array:
# #     if(i<0):
# #         array.remove(i)
# # length=len(array)
# # if length%2==0:
# #     print(array[(length//2)-1])
# # else:
# #     print(array[(length//2)])
                          


# print(4/2)
import datetime
age=int(input("Enter your age:"))
name=input("Enter your name:")
current_date=datetime.date.today()
req=100-age
current_year=current_date.year
print(name,req+current_year) 