def fun(arr, n):
    m = dict()
    m1 = dict()
    max = 0
#     result = ""
    result=[]
    k = 1
 
    for i in range(0, n):
        if arr[i] in m1.keys():
            continue
 
        m1[arr[i]] = k
        k += 1
 
    for i in range(0, n):
        if arr[i] in m.keys():
            m[arr[i]] += 1
        else:
            m[arr[i]] = 1
 
        if max <= m[arr[i]]:
 
            if max < m[arr[i]]:
                max = m[arr[i]]
                result = arr[i]
            else:
                if m1[result] < m1[arr[i]]:
                    max = m[arr[i]]
                    result = arr[i]
 
    return result

arr=[str(x) for x in input().split(",")]
len=len(arr)
print(fun(arr,len))
