# Write a program that prints the number from 1 to 100
# But for multiples of three print "Fizz" instead of the number
#and for multiples of five print "Buzz"
#For multiples of both three and five print "FizzBuzz"

#Hint: % (modulo) tells you whats left over when you divide one number by another
#ex number % 3 == 0

for num in range(1, 101):
 if num % 3 == 0 and num % 5 == 0:
  print("FizzBuzz")
 elif num % 3 == 0:
  print("Fizz")
 elif num % 5 ==0:
  print("Buzz")
 else:
  print(num)
