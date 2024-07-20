p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

while True:
    list_input = input().split()
    k = ""
    n = ""
    if len(list_input) == 2:
        k, n = list_input
    else:
        break

    k = int(k)
    res = ""
    for i in n:
        j = p.find(i)
        res += p[(j + k) % 28]
    print(res[::-1])
