for _ in range(int(input())):
    a, d = input().split()
    a, d = int(a), int(d)
    res = ''
    list = [0] * a

    input_list = input().split()

    for i in range(a):
        if (i >= d):
            list[i - d] = input_list[i]
        else:
            list[i + a - d] = input_list[i]
    print(" ".join(list))
