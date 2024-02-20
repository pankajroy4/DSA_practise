# class Laptop:
#     def __init__(self,brand_name,model_name,price):
#         self.b_name=brand_name
#         self.m_name=model_name
#         self.p=price


# l1=Laptop('Hp','PAVILION 15P028TX',45000)
# l2=Laptop("Dell","Inspire 2002",55000)

# print(f"{l1.b_name},{l1.m_name},{l1.p}")
# print(f"{l2.b_name},{l2.m_name},{l2.p}")




# ___________________________________________________________________________


# class Laptop:
#     def __init__(self,brand_name,model_name,price):
#         self.b_name=brand_name
#         self.m_name=model_name
#         self.p=price


#     def full_name(abc):
#         return f"{abc.b_name} {abc.m_name}"    



# l1=Laptop('Hp','PAVILION 15P028TX',45000)
# l2=Laptop("Dell","Inspire 2002",55000)
# print(l1.full_name()) 


# ________________________________________________________________________


# class Laptop:
#     def __init__(self,brand_name,model_name,price):
#         self.b_name=brand_name
#         self.m_name=model_name
#         self.p=price

#     def discount(self,percentage):
#         return self.p-(percentage/100)*self.p
            
    
# l1=Laptop('Hp','PAVILION 15P028TX',45000)
# l2=Laptop("Dell","Inspire 2002",55000)


# print(l1.discount(20)) 
# print(l2.discount(20)) 



# ________________________________________________________________________

# class Person:
#     instance_count=0
#     def __init__(self):
#         Person.instance_count +=1



# p1=Person()
# p2=Person()

# print(Person.instance_count)

# ________________________________________________________________________


# class person:
#     count=0
#     def __init__(self,first_name,last_name,age):
#         self.first_name=first_name
#         self.last_name=last_name
#         self.age=age

# ________________________________________________________________________

class phone:
    def __init__(self,brand,model,price):
        self.brand=brand
        self.model=model
        self.price=price



    # def __repr__(self):
    #         return  f"Phone(\'{self.brand}\' , \'{self.model}\' , {self.price})"      


    # def __str__(self):
    #     return f"{self.brand} {self.model} and price is  {self.price} "


    def __add__(self,other):
        return self.price+other.price

 
 


p1=phone("nokia","111aa",2000)
p2=phone("samsung","galaxy star pro",8000)
p3=phone("samsung_new","galaxy fold",1000)
print(p1+p2)
# print(p)
# print(str(p))
# print(repr(p))
# print(p.__repr__())
# print(p.__str__())
print(p1)
    
        


