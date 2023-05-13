import random

number = random.randint(65,90)
alphabet = chr(number)
# print(chr(number))
for i in range(1,10):
    X = str(input("Guess an alphabet between A and Z: "))
    if X == alphabet:
        print("You guessed it bro")
    else:
        print("Nope, Try again Bish")
    
print("The right alphabet was:", alphabet)

