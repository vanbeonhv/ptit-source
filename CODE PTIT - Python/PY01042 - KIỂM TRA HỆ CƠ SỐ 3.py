for _ in range(int(input())):
    n = input()
    lst = ['0', '1', '2']

    is_ok = True
    for i in n:
        if (i not in lst):
            is_ok = False
            break
    if (is_ok):
        print("YES")
    else:
        print("NO")
