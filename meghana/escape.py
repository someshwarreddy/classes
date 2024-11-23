# printing with varibles and escape chracters
text = "meghana doctor"
print(text)

text = "meghana\ndoctor"
print("(1)i am newline "  +text+ " newline is ended.") #format % 

text = "meghana \rdoctor dent"
print(f"1234567899{text} carriage")

text = "meghana567\bdoctor"
print(f"(3)i am backspace return  {text}")

text = "meghana \\****doctor***\\"
print(f"i am double quote return  {text}")

text = "MEGHANA \'doctor\'"
print(f"(4)i am single quote return  {text}")

text = "meghana \f     doctor"
print(f"(5)i am function  return  {text}")