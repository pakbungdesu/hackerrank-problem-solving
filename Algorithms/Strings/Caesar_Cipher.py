
def caesarCipher(s, k):
    res = []
    k %= 26
    for ele in s:
      if ele.islower():
        res.append(chr((ord(ele) - 97 + k) % 26 + 97))

      elif ele.isupper():
          res.append(chr((ord(ele) - 65 + k) % 26 + 65))
      else:
          res.append(ele)

    return "".join(res)
