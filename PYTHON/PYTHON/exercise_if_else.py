number=10
gnumber=int(input("guss a number and win prize. Entr a no: "))
if number==gnumber:
    print("congrats! you win.")
# if gnumber<number:
#     print("it's low.")
# if   gnumber>number:
#     print("it's high")
else:
    if gnumber>number:
        print("it's too high.")
    else:
        print("it's too low")    


