#number of n digits which are equal to the sum of nth power of its digits.
#ex- 5 has one digit so n = 1, 5^1 = 5, so 5 is an armstrong number.
#22 has two digits so n = 2, 2^2 = 4 and 2^2 = 4, 4+4 = 8, 8 is not equal to 22, so 22 is not an armstrong number.
#153, n = 3, 1^3 = 1, 5^3 = 125, 3^3 = 27, 1+125+27 = 153, 153 is equal to actual number, so 153 is an armstrong number.

for i in range(1001):
    num = i
    result = 0
    n = len(str(i))
    while(i != 0):
        digit = i % 10
        result = result + digit**n
        i = i // 10
    if num == result:
        print(num)
