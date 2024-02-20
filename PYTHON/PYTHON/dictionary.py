
# ___________________example (1)__________________________

# def cube_finder(n):
#     cube={}
#     for i in range(1,n+1):
#         cube[i]=i**3

#     return cube

# x=int(input("enter no up to which you want dictionarry of cube: "))
# print(cube_finder(x))
    
# ______________________example (2) ___________________________


user={}
name,age=input("enter name,age: (separated by comma) ").split(",")
age=int(age)
fav_movie=input("enter fav_movie(separated by comma): ").split(",")
fav_song=input("enter fav_song(separated by comma): ").split(",")

user['name']=name
user['age']=age
user['fav_movies']=fav_movie
user['fav_song']=fav_song

for key,value in user.items():
    print(f"{key}:{value}")

# _________________________example (3)_________________________________
  
# x=['4','1','3']
# s=set(x)
# print(type(x))
# print(type(s))
# print(x)
# print(s)

