
def flippingBits(n):
    binary_str = format(n, '032b')
    res = "".join("1" if ele == "0" else "0" for ele in binary_str)
    return int(res, 2)
