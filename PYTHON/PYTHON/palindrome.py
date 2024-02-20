# def pelindrome(string):        
#     temp = string[-1::-1]                       
#     if temp == string:               
#         return True
    
#     return False


def pelindrome(string):    
    return string == string[-1::-1]
  

string = input("enter a string tp check it is pelindrome or not: ")
print(pelindrome(string))
