name,age=input("enter your name and age,separated with comma:").split(",")
age=int(age)
print(name,age)
if age>=10 and (name[0]=="a" or name[0]=="A"):
   print("you can watch the movie.")
else:
    print("sorry! you cann't watch the movie")     