name = input("enter your name: ")
i = 0
temp = ""
while i < len(name):
    if name[i] not in temp:
         temp= temp+name[i] 
         c= name.count(name[i])
         print(f"number of {name[i]} is {c} ")
    i += 1
