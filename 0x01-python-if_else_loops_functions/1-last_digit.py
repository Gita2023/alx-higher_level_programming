#!/usr/bin/python3
import random
import random
number = random.randint(-10000, 10000)
argam = number % 10 if number > 10 else number % -10 
print(
    "Last argam of {} is {} and is ".format(number, argam), end="")
if argam > 5:
    print("greater than 5")
elif argam == 0:
    print("0")
else:
    print("less than 6 and not 0)