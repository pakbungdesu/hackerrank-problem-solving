
def pageCount(n, p):
    total = n // 2
    page = p // 2

    return min(page, total - page)
