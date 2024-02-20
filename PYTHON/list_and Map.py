
# Q. Ask user to input five number each on new line. print the list of given number
print("Enter five number each on new line")
a=list(map(lambda z:int(input()),range(5)))
        # OR
# a=[int(input()) for i in range(5)]
print(a)

