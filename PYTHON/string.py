
#Helper Function
def string(str):
    index=0
    least_count=100000000000
    for i in range(len(str)):
        if str.count(str[i])<least_count:
            least_count=str.count(str[i])
            index=i
    # str=str.replace(str[index],"")
    str_n=""
    for i in range(len(str)):
        if i !=index:
            str_n+=str[i]
    print(str_n)
    return str_n                                      

#Driver code
n=int(input())
arr=[input() for i in range(n)]
for i in arr:
    length=len(i)                     # SAMPLE INPUT
    if length%2!=0:                   #    3
        i=string(i)                   #    aba
        length=len(i)                 #    abac
    first=i[0:length//2]              #    abcd
    second=i[length//2:]              # OUTPUT
    if first==second:                 #    YES
        print("YES")                  #    NO
    else:                             #    NO
        print("NO")






