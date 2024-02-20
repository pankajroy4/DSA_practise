# from functools import wraps
# def print_function_data(any_function):
#     @wraps(any_function)
#     def wrapper_function(*args,**kwargs):
#         print(f"you are calling {any_function.__name__} function")
#         print(f"{any_function.__doc__}")
#         return any_function(*args,**kwargs)
#     return wrapper_function


# @print_function_data
# def add(a,b):
#      '''this function takes two number as arguments and return its sum'''
#      return a+b


# print(add(3,4))


# _________________________________________________________________________________________________
# import time
# from functools import wraps
# def calculate_time(fun):
#     @wraps(fun)
#     def wrapper(*args,**kwargs):
#        print(f"executing {fun.__name__} function")
#        t1=time.time()
#        returned_value=fun(*args,**kwargs)
#        t2=time.time()
#        print(f"this function take {t2-t1} to execute")
#        return returned_value

#     return wrapper

# @calculate_time
# def fun(a):
#     return [i**2 for i in range(1,a)]


# print(fun(10000))
# # fun(2000000)


# _________________________________________________________________________________________________


from functools import wraps


def only_int_allow(fun):
    @wraps(fun)
    def wrapper(*args, **kwargs):
        data_types = []
        for i in args:
            data_types.append(type(i) == int)
        if all(data_types):
            return fun(*args, **kwargs)
        else:
            return "invalid arguments"
    return wrapper


@only_int_allow
def addition(*args):
    total = 0
    for i in args:
        total += i
    return total


print(addition(1, 2, 3, 4,[2,4,5]))
