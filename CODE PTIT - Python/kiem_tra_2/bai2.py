for _ in range(int(input())):
    n = input().split()
    m = input().split()
    if(len(n) != len(m)):
        print('INVALID')
        break
        
    
    res = 0
    for i in range(len(n)):
        res += abs(int(n[i]) - int(m[i]))
    print("{:.5f}".format(res))
