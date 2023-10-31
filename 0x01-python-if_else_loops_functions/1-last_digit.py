#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
argam = abs(number) % 10
if number < 0:
    argam = -argam
print("Last argam of {} is {} and is ".format(number, argam), end="")
if argam > 5:
    print("greater than 5")
elif argam == 0:
    print("0")
else:
    print("less than 6 and not 0")
