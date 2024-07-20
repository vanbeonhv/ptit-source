n = input()

res = ""
for i in range(len(n) - 1, -1, -1):
    res = n[i] + res
    if ((len(n) - 1 - i) % 3 == 2) and i != 0:
        res = "," + res

print(res)
