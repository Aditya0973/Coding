import random
number = random.randint(1,10)

for i in range(1,6):
    X = int(input("Guess a number between 1 and 10: "))
    if X == number:
        print("Yay! You guessed the number!")
    else:
        print("Nope! Try again!")

print("The number was", number)
