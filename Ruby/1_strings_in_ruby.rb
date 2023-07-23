puts 2+2 #To print an integer
puts "2+2=4" #To print a string
puts "2+2=#{2+2}" #To interpolate a string
puts "Hello World" #To print a string
puts "Hello World".upcase #To convert to uppercase
puts "Hello World".class #To find out the class of an object
puts "Hello World".reverse #To reverse a string
puts "Hello World".downcase #To convert to lowercase
puts "Hello" + "Bye" #To concatenate strings
puts "Hello " + "Bye" #To add a space between words
puts "Hello" + " " + "Bye" #To add a space between words
puts "hello"*5 #To repeat a string
puts "They said, \"Hello\"" #To escape a double quote
puts 'It\'s hot outside' #To escape a single quote
puts "Hello, World".sub("Hello", "Good morning") #To replace a word
puts "Hello, World".sub("l", "s") #To replace the first instance of a character
puts "Hello, World".gsub("l", "s") #To replace all instances of a character
puts "Hello World".include?("World") #To check if a string contains a substring
puts "Hello World".include?("Word") #To check if a string contains a substring
puts "Hello World".include?("H") #To check if a string contains a substring
puts "Hello World".include?("h") #To check if a string contains a substring
puts "Hello World".downcase.include?("h") #To check if a string contains a substring
puts "Hello World" =~ /He/ #To check if a string contains a substring
puts "Hello World"[0] #To access a character in a string
puts "Hello World"[1] #To access a character in a string
puts "Hello World"[-1] #To access a character in a string
puts "Hello World" =~ /World/ #To check if a string contains a substring 
puts "Hello World".match(/He/) #To check if a string contains a substring