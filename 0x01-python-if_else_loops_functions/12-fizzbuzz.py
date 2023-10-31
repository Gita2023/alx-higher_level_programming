#!/usr/bin/python3
def fizzbuzz():
    for T in range(1, 101):
        if T % 15 == 0:
            print("FizzBuzz ", end='')
        elif T % 3 == 0:
            print("Fizz ", end='')
        elif T % 5 == 0:
            print("Buzz ", end='')
        else:
            print("{:d} ".format(T), end='')
