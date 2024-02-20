# Leetcode:
# Set matrix zero;

# matrix=[
#             [0,1,2,0],
#             [3,4,5,2],
#             [1,3,1,5]
#         ]

matrix=[
            [1,1,1],
            [1,0,1],
            [1,1,1]
        ]

rows=len(matrix)
cols=len(matrix[0]) 
flag=False
for i in range(rows):
    if matrix[i][0]==0:
        flag=True
    for j in range(1,cols):
        if matrix[i][j]==0:
            matrix[i][0] = matrix[0][j]=0

for i in range(rows-1,-1,-1):
    for j in range(cols-1,0,-1):
        if matrix[i][0]==0 or matrix[0][j]==0:
            matrix[i][j]=0
    if flag:
        matrix[i][0]=0

for i in range(rows):
    for j in range(cols):
        print(matrix[i][j],end=" ")
    print();