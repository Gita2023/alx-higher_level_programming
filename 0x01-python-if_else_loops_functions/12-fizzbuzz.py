#!/usr/bin/python3
def fizzbuzz():
    for T in range(1, 101):
        if T % 5 is 0 and T % 3 is 0:
            word = "FizzBuzz"
        elif T % 5 is 0:
            word = "Buzz"
        elif T % 3 is 0:
            word = "Fizz"
        else:
            word = str(T)
        print("{:s}".format(word), end=" ")
