number = input("enter the value: ")
#result = number / 10 TypeError: unsupported operand type(s) for /: 'str' and 'int'
#result = number % 10  TypeError: not all arguments converted during string formatting
#result = number + 10 typeError: can only concatenate str (not "int") to str
#result = int(number) + 5  # the int method converts the string into number. 
result = int(number)
#print(result) #<class 'str'>

print(f"{result} * {1} : {result * 1}")
print(f"{result} * {2} : {result * 2}")
print(f"{result} * {3} : {result * 3}")
print(f"{result} * {4} : {result * 4}")
print(f"{result} * {5} : {result * 5}")
print(f"{result*9 }")

name = "meghana"
print(name, end = "") # by using end function we can print next line value in existing single line.
edu = "doctor"
print(edu)

