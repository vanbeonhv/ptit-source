# -*- coding: utf-8 -*-
"""code ptit.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1YKufqXkSMEUgeK-4x9RM0gVUG9FaAbY4
"""

for k in range(int(input())):
    n = int(input())
    i = 2
    dic = {
        1: 1,
    }
    while n >= i:
        while n % i == 0:
            if i in dic:
                dic[i] += 1
            else:
                dic[i] = 1
            n = n / i
        i += 1

    res = "1 "
    for key, value in dic.items():
        if key != 1:
            res += f"* {key}^{value} "
    print(res)
