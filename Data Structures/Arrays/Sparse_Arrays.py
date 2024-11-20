
def matchingStrings(stringList, queries):
    res = []
    for ele in queries:
        res.append(stringList.count(ele))

    return res
