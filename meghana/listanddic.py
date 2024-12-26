list = [1,2,3,[],{},(),4,]

print(list[3]) # empty list

# list is a mutable data type
# which of the following data types are mutable?
# A. list
# B. tuple 
# C. set
# D. dictionary
# E. None
# F. string
# G. int
# H. float
# I. bool
# J. range
# K. frozenset
# L. bytearray
# M. bytes
# N. complex
# O. object
# P. memoryview
# Q. None

#access the first element of the 

print(list[2])

# What will be the output of the above code snippet?
# 3
# find the length of the list
print(len(list))

# add an element to the list
list.append(4)
# length of the list
print(len(list))

list[3] = [1,2,3,4,5]
print(list[3]) # 5
# length of the list
print(len(list))

list[6] = None

# remove an element from the list
print(list.remove(4))


print(len(list))


list[3] = ""
print(list)
list[3] = ""

print(list.pop(3))

print(list)


# tuple
tuplenew = (1,2,3,[],{},(),4,)
# tuple is an immutable data type

# tuple[3] = [1,2,3,4,5]

print(f"{tuplenew[3]} this is access of particular item in the tuple") 
# print(tuple.append(4))
# Traceback (most recent call last):
#   File "D:\classes\meghana\listanddic.py", line 69, in <module>
#     print(tuple.append(4))
#           ^^^^^^^^^^^^
# AttributeError: 'tuple' object has no attribute 'append'

# Traceback (most recent call last):
#   File "D:\classes\meghana\listanddic.py", line 66, in <module>
#     tuple[3] = [1,2,3,4,5] // this is assignment
#     ~~~~~^^^
# TypeError: 'tuple' object does not support item assignment

# print(tuple.pop(3)) 
# Traceback (most recent call last):
#   File "D:\classes\meghana\listanddic.py", line 66, in <module>
#     tuple[3] = [1,2,3,4,5]
#     ~~~~~^^^
# TypeError: 'tuple' object does not support item assignment

# do tuple support item assignment
# A. Yes
# B. No
# do tuple support index based item assignment
# A. Yes
# B. No


for i in tuplenew:
    if(i == 4):
        print(i)
print(len(tuplenew))

# do tuple support item deletion
# A. Yes    
# B. No

# print(tuple.remove(4))
# del tuple[3]
# print(tuple)

# File "D:\classes\meghana\listanddic.py", line 104, in <module>
#     del tuple[3]
#         ~~~~~^^^
# TypeError: 'tuple' object doesn't support item deletion

# del tuplenew
print(tuplenew)
    
litsnew = [1,2,3,4,5,6,7,8,9,10]
# access the first element of the list by using the index which is starting from 0
print(len(litsnew))

dictnew = {1: 'meghana', 2: 'doctor', 3: 'dentist', "four": "someshwar"}
# dictionary is a mutable data type
# dictionary is a key value pair data type
# dictionary is an unordered data type
# dictionary is a collection of items
#print(dictnew)
print(dictnew[1])
print(dictnew["four"])

for i in dictnew:
    print(i) # keys
    print(dictnew[i]) # values

# add an element to the dictionary
dictnew[5] = "reddy"
for i in dictnew:
    print(i) # keys
    print(dictnew[i]) # values


empdata= {"employees":[    
    {"name":"Ram", "email":"ram@gmail.com", "age":23},    
    {"name":"Shyam", "email":"shyam23@gmail.com", "age":28},  
    {"name":"John", "email":"john@gmail.com", "age":33},    
    {"name":"Bob", "email":"bob32@gmail.com", "age":41}   
]} 
print(empdata["employees"])

for i in empdata["employees"]:
    # print(i)
    print(i["name"], i["email"], i["age"])

userdata = {
    "id": 10,
    "name": "Clementina DuBuque",
    "username": "Moriah.Stanton",
    "email": "Rey.Padberg@karina.biz",
    "address": {
      "street": "Kattie Turnpike",
      "suite": "Suite 198",
      "city": "Lebsackbury",
      "zipcode": "31428-2261",
      "geo": {
        "lat": "-38.2386",
        "lng": "57.2232"
      }
    },
    "phone": "024-648-3804",
    "website": "ambrose.net",
    "company": {
      "name": "Hoeger LLC",
      "catchPhrase": "Centralized empowering task-force",
      "bs": "target end-to-end models"
    }
  }

print(userdata["address"]["geo"]["lat"])

for i in userdata:
    print(i, userdata[i])
    for i in userdata["address"]:
        print(i, userdata["address"][i])
        for i in userdata["address"]["geo"]:
            print(i, userdata["address"]["geo"][i])
            
# remove an element from the dictionary
# print(dictnew.remove(5))