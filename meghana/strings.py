single = 'meghana is doctor'
print(single)

double = "doctor"
print(double)

triple ="""
Meghana 
is doctor

i am multiline string
To convert meters to feet, multiply the number of meters by 3.28084.

165
 
meters
×
3.28084
=
541.3386
 
feet
165meters×3.28084=541.3386feet
So, 165 meters is approximately 541.34 feet.
"""
print(triple )

print(" i am slicing with index\t"+ single[1])

print("finding lengthof string",len(single)) # finding length of string

print("finding index position character \t" + single[-1])
print("finding index \t" +single[-2])

#slicing 
#if you want a substring from the a string mention the index staring postion and end postion.

print("slicing"+ single[0:6]) 
print("slicing" + single[:6]) 
print("slicing" + single[:-0]) 
print("slicing of negative\t"+ single[-5:-1])
print("slicing of negative \t"+ single[0::4])

print(single.capitalize())
print(single.title())
print(single.upper())

# check string
print(single.isalpha())
print(single.isdigit())


text = "apple banana cherry"
words = text.split()  # Splits the string by spaces
print(words)  # Outputs ['apple', 'banana', 'cherry']

words = ['apple', 'banana', 'cherry']
result = " ".join(words)  # Joins the list with spaces
print(result)  # Outputs 'apple banana cherry'


string = "someshwar \t"
print(f"hi {string + single}")  # Outputs: someshwar hi
#Here, {string} is replaced with the value of the string variable.
