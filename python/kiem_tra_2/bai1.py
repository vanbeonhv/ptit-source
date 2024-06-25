for _ in range(int(input())):
    n = input()
    res = 1
    for i in range(0,len(n)):
        if(i % 2 == 0 and n[i] != '0'): 
            res = res * int(n[i])
    print(res)