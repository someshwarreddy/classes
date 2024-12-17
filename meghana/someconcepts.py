number = input("enter the value: ")
#result = number / 10 TypeError: unsupported operand type(s) for /: 'str' and 'int'
#result = number % 10  TypeError: not all arguments converted during string formatting
#result = number + 10 typeError: can only concatenate str (not "int") to str
#result = int(number) + 5  # the int method converts the string into number. 
result = int(number)
#print(result) #<class 'str'>

# print(f"{result} * {1} : {result * 1}")
# print(f"{result} * {2} : {result * 2}")
# print(f"{result} * {3} : {result * 3}")
# print(f"{result} * {4} : {result * 4}")
# print(f"{result} * {5} : {result * 5}")
# print(f"{result*9 }")

name = "meghana"
print(name, end = "someshwar") # by using end function we can print next line value in existing single line.
edu = "doctor"
print(edu)
print("kjhkjhjkhk")

collection = [1,2, 3, 4, 5,6,7 ,8 ,9,10]

for i  in range(1, 11):
    print(f"{result} * {i} : {result * i}")


if 10 > 11:
  print("Meghana is doctor")
elif 10 != 10: 
    print("some what  a doctor")
else:
    print("not a doctor") 
    

products = [1,2,3,4,5,6]
product_name = ["headphones","projecter","smartwatch", "cameras", "", "ball"]

    
print(f"your booked product is {products[0]}")
print(f"your booked product is {product_name[2]}")
print(f"your booked product is {product_name[4]}")
print(len(products))

ran = range(1, 10)

print(range(1, 10))


list = [1,2,3,4,5]

print(len(list))
print("hi meghana be happy") # global one(scope)
yes = True # boolean

if False:
   #pass
    print("hi every thing will be okay") #this one belongs to if local one (scope)
elif False:
    print("i am meghana i will achive what ever i want ")
elif False:
    print("i am meghana 2 i will achive what ever i want ")
elif False:
    print("i am meghana 3 i will achive what ever i want ")
else:
    print("i am going to get every things soon")

