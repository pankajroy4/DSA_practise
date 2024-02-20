import random
win_n=random.randint(1,100)
n = int(input("enter any no between 1 to 100:"))
x=1
for i in range(1, 100):
 
    if n == win_n:
        print(f"you win,and you win in {x}th attempt")
        break

    elif n < win_n:
        print("too low.")
        x+=1
        n = int(input("guss agin: "))
        continue

    else:
        print("too high.")
        n = int(input("guss agin: "))
        x+=1
        continue

        
