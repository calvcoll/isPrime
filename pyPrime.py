#-------------------------------------------------------------------------------
# Name:        isPrime
# Purpose:
#
# Author:      Calv Collins
#
# Created:     30/04/2014
# Copyright:   (c) Calv Collins 2014
# Licence:     Do Whatever You Want License
#-------------------------------------------------------------------------------

def isPrime(num):
    '''
    The easiest way to use this is:
        if not isPrime():
            code if is prime
        else:
            code if isn't prime -> returns the divisible number.
    '''
    if num <= 1:
        if num < 0:
            return -1
        return num
    for i in range(num // 2):
        if i <= 1:
            continue
        else:
            if num % i == 0:
                return i
    return False


def main():
    user = input("Enter a number to see if it's prime: ")
    try:
        num = int(user)
        returned = isPrime(num)
        print("The number is prime!" if not returned else "The number isn't prime! It's divisible by " + str(returned) + " and " + str(num // returned))
    except ValueError:
        print("You derped, try again.")
        main()

if __name__ == '__main__':
    main()
