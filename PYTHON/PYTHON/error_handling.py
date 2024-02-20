# def division(a,b):
#     try:
#       x= a/b     
#     except ZeroDivisionError as err:
#       return err
#     except TypeError as err:
#       return err
#     except:
#         return "pelase input intrger onlly!"
#     else:
#         return x    

# print(division(10,5))
# print(division('4',2))
# print(division(20,0))
# print(division('3',0))




# from PIL import Image

# img=Image.open("1.jpg")
# # img.save("1.pdf")
# img.show()


# -----------------------pronic number----------------------------
import math
instr=input("enter the value: ")
temp=set()
outarr=[]
for i in range(0,len(instr)):
    for j in range(i,len(instr)):     
        substr=int(instr[i:j+1])     
        temp.add(substr)


temp=sorted(list(temp))
print("substrings: ",temp)

for num in temp:
    for val in range(1,int(math.sqrt(num))+1):
        if val*(val+1)==num:
            outarr.append(num)
            break

print(outarr)

