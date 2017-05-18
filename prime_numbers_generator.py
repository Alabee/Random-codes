def prime_numbers_generator(n):
    array = []
    if not isinstance(n, int):
        return "Only integers allowed"

    elif n < 0:
        return "Invalid input, only positive numbers allowed"

    elif n == 0:
        return "No prime numbers between 0 and 0"

    else:
        for x in range(2, n + 1):
            prime = True

            for y in range(2, x):
                if ( x % y == 0):
                    prime = False
                    break

            if prime is True:
                array.append(x)

    return array



