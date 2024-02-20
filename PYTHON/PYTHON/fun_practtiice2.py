def odd_even(a):
    if a != 0:
        if a % 2 == 0:
            return "even"
        else:
            return "odd"
    else:
        return "zero"


x = int(input("ENTER A NO. TO CHECK ODD EVEN: "))
print(odd_even(x))

