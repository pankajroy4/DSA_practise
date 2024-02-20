n = input("enter four digit number: ")
sum = 0
i = 0

while i < len(n):
    sum += int(n[i])
    i += 1
print(f"sum is {sum}")
