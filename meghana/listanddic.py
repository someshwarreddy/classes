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