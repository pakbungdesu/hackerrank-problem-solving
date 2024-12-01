
def counterGame(n):
    # initialize the count
    count = 0

    # play the game until n becomes 1
    while n > 1:
        # check if n is a power of 2
        if (n & (n - 1)) == 0:
            # if n is a power of 2, divide by 2
            n //= 2
        else:
            # if n is not a power of 2, subtract the largest power of 2 less than n
            largest_power = 1 << (n.bit_length() - 1)
            n -= largest_power
        count += 1

    return "Louise" if count % 2 else "Richard"
