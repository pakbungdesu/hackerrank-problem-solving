
def lonelyinteger(a):
    res = 0
    for i in a:
        res ^= i

    return res
