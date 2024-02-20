# n=int(input("Enter a number to find sum of it's Digits:"))
# sum=0
# while(n>0):
#     sum+=n%10
#     n=n//10
# print("Sum is ",sum )

n=int(input("Enter a number to reverse it:"))
reverse=0
while(n>0):
    reverse=(reverse*10)+(n%10)
    n=n//10
print("Reverse number is ",reverse)