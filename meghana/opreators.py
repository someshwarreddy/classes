#operators
#assignment, arthamatic, relational, logical, bitwise,
#assignment

#to store a information in a variable we use = (equal assignement operator)
product_type = 'dress'
product_name = 'tshirt'
product_price = 300
product_discount = 10
car_model = '2020 Mahindra Thar LX D 4WD MT CONVERTIBLE'
car_numberof_owners = "2"
car_prsent_owner ="1stowner" 
iscarinspected = True
user_mobienumber = 8899765


# arthmatic
# +
# -
# *
# /
# %

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

# relational opreator
#> < >= <= == !=  the out put always true or false if value is number
# if value is string only two operators will work == and !== example a = "somesh" b= "meghna"

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

# logical and or ! not 

print (a < b  and b < a)
print(a<b or a>b)
print(a>b or b<a)
tr = True
print(  not tr)

# relational , logical, assignment, arthamatic
# bitwise operators

print(a | b)
print (a & b)
a = 5
b=3
print(a | b)
print(~a)

a = 5   #0 1 0 1
b = 7   #0 1 1 1

print(f" hi i am 5 {a & b}")

print(a | b)

print (a ^ b)

print( a >> 1)

print(a << 1)

print(~ a)

a = a+5 # 10 oid value
a = 100 # new value
a = 'meghana'
d = "someshwar"
d = 9
print(f"i am a + 5 {a}")
#  a will be 10

d+=5 # short form of a + 5  10 + 5
print(f" i am a+=5 {d}") 
d&=5
print(d)  # 1 1 1 0  #  0 1 0 1



