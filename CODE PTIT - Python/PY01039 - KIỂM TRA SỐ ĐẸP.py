for _ in range(int(input())):
    n = input()
    a = n[0]
    b = n[1]
    if (a == b):
        print("NO")
        continue

    res = True
    for i in range(2, len(n)):
        if (i % 2 == 0 and n[i] != a):
            res = False
            break
        if (i % 2 == 1 and n[i] != b):
            res = False
            break
    if (res):
        print("YES")
    else:
        print("NO")
