temp=""
name=input("enter yout name: ")
for i in range(len(name)):
    if name[i] not in temp:
        temp += name[i]
        print(f"no. of {name[i]} : {name.count(name[i])}")
