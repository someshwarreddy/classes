#operators
#assignment, arthamatic, relational, logical, bitwise,

# Assignment Operators
# Used to assign values to variables.
product_type = 'dress'
product_name = 'tshirt'
product_price = 300
product_discount = 10
car_model = '2020 Mahindra Thar LX D 4WD MT CONVERTIBLE'
car_numberof_owners = "2"
car_prsent_owner ="1stowner" 
iscarinspected = True
user_mobienumber = 8899765

# Arithmetic Operators
# Used to perform mathematical operations.
# +
# -
# *
# /
# %
# **
# The exponentiation operator (**) raises the left operand to the power of the right operand.
# For example, 2 ** 3 will be 8 (2 raised to the power of 3).

add = 1 + 3
print(add)
subtract = 3-1
print(subtract)
mul = 3*3
print(mul)
# division gives quotient 
getqu = 3/3
print(getqu)
# get reminder by % module symbol
getmo = 3%3
print(getmo)

# Relational Operators
# Used to compare two values.
# > < >= <= == !=
# The output is always True or False if the value is a number.
# If the value is a string, only two operators will work: == and !=.

a = 5
b = 6
s = "somesh"
m = "meghana"
print(f"string {s!=m}")
print(a>b) 
print(a<b)
print(a == b)
print(a<=b)
print(a>=b)
print(a!=b)

# Logical Operators
# Used to combine conditional statements.
# and or not

print (a < b  and b < a)
print(a<b or a>b)
print(a>b or b<a)
tr = True
print(  not tr)

# Bitwise Operators
# Used to perform bit-level operations.
# & | ^ ~ << >>
# The bitwise AND operator (&) compares each bit of its operands.
# If both bits are 1, the result is 1. Otherwise, the result is 0.
# For example, if a = 5 (which is 0101 in binary) and b = 3 (which is 0011 in binary),
# a & b will be 1 (which is 0001 in binary).

# The bitwise OR operator (|) compares each bit of its operands.
# If either bit is 1, the result is 1. Otherwise, the result is 0.
# For example, if a = 5 (which is 0101 in binary) and b = 3 (which is 0011 in binary),
# a | b will be 7 (which is 0111 in binary).

# The bitwise XOR operator (^) compares each bit of its operands.
# If the bits are different, the result is 1. If they are the same, the result is 0.
# For example, if a = 5 (which is 0101 in binary) and b = 3 (which is 0011 in binary),
# a ^ b will be 6 (which is 0110 in binary).

# The bitwise NOT operator (~) inverts all the bits of its operand.
# For example, if a = 5 (which is 0101 in binary), ~a will be -6.
# This is because ~a is equivalent to -(a+1).

# The bitwise left shift operator (<<) shifts the bits of its left operand to the left
# by the number of positions specified by its right operand.
# For example, if a = 5 (which is 0101 in binary), a << 1 will be 10 (which is 1010 in binary).

# The bitwise right shift operator (>>) shifts the bits of its left operand to the right
# by the number of positions specified by its right operand.
# For example, if a = 5 (which is 0101 in binary), a >> 1 will be 2 (which is 0010 in binary).

print(a | b)
print (a & b)
a = 5
b=3
print(a | b)
print(~a)

# Example of XOR operator
a = 5   # 0101 in binary
b = 3   # 0011 in binary
print(a ^ b)  # 0110 in binary, which is 6

a = 5   #0 1 0 1
b = 7   #0 1 1 1

print(f" hi i am 5 {a & b}")

print(a | b)

print (a ^ b)

print( a >> 1)

print(a << 1)

print(~ a)

# Assignment Operators with Arithmetic Operations
a = a+5 # 10 old value
a = 100 # new value
a = 'meghana'
d = "someshwar"
d = 9
print(f"i am a + 5 {a}")
#  a will be 10

d+=5 # short form of d = d + 5
print(f" i am d+=5 {d}") 
d&=5
print(d)  # 1 1 1 0  #  0 1 0 1

# Multiplication Table using Arithmetic Operators
a = 1

print(a * 1) 
print(a * 2) 
print(a * 3)
print(a * 4) 
print(a * 5) 
print(a * 6) 
print(a * 7)