the_count = [1, 2, 3, 4, 5]
stocks = ["AAPL", "GOOG", "TSLA"]
random_things = ["Puppies", 55, "Anthony Weiner", 1/2, ["Oh no", "A list inside a list"]]

# this for-loop goes through a list
for number in the_count:
    print("this is count", number)

#same as above
for stock in stocks:
    print("Stock ticker:", stock)

#we can go through mixed lists too
#I called it i (short for item) since i dont know what is in it
for i in random_things:
    print("Here's a random thing:", i)

#we can also build lists, first let's start with an empty one
people = []

people.append("Mattan")
people.append("Sarah")
people.append("Chris")

#now we can print them out too
print(people)

#and remove some
people.remove("Sarah")
print(people)

for person in people:
    print("Person is:", person)

#challenge: Print out square of numbers from 1 to 10
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for number in numbers:
    print(number,"Squared is:", number*number)

#OR
for number in list(range(1, 11)):
    print(number,"Squared is:", number*number)

#here is how you access elements of a list
animals = ['bear', 'tiger', 'penguin', 'zebra']
first_animal = animals[0]
print(first_animal)
third_animal = animals[2]
print(third_animal)

print("There are this many things:", len(random_things))
print("Things is a:", type(random_things))

another_list = random_things[-1]
print(another_list)
print(type(another_list))