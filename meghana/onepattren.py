row = 1
column = 1

n = int(input("please enter the value n = 5:"))
if n==5:
    for i in range(1, n+1):
    # Start by printing '1'
        for j in range(1, n+1):
            if j <= i:
             print(j, end="")
            else:
                print(i, end="")
        print()  # Newline after each row
else:
    exit()
