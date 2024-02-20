def greater(a, b):
    if a > b:
        return a
    else:
        return b


def greatest(a, b, c):
    bigger = greater(a, b)
    return greater(bigger, c)


x, y, z = input("enter three no. to find greatest: ").split(",")
x = int(x)
y = int(y)
z = int(z)
print(f"greatest is {greatest(x,y,z)}")
