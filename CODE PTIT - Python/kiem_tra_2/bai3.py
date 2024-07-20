for _ in range(int(input())):
    n = input()
    cnt = 0
    max1 = 0
    for i in n:
        if(i == '1'):
            cnt = 0
        else:
            cnt += 1
            max1 = max(max1, cnt)
    print(max1)