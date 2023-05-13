answer = input("Do you wanna hear a joke?")

affirmative_responses = ["Yes", "yes", "Y", "y"]
negative_responses = ["No", "no", "N", "n"]

if answer in affirmative_responses:
    print("I'm against picketing, but I dont know how to show it.")
    #Mitch Hedburg (RIP)
elif answer in negative_responses:
    print("Fine.")
else:
    print('I dont understand.')

#or
# answer = input("Do you wanna hear a joke?")

# if "y" in answer.lower():
#     print("I'm against picketing, but I dont know how to show it.")
#     #Mitch Hedburg (RIP)
# elif "n" in answer.lower():
#     print("Fine.")
# else:
#     print('I dont understand.')