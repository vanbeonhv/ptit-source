for i in range(int(input())):
    n = input()
    
    res = True
    total = int(n[0])
    for j in range(len(n) - 1):
        dif = int(n[j]) - int(n[j+1])
        if (dif != 2 and dif != -2):
            res = False
            break
        total += int(n[j+1])
        if((j == len(n) - 2) and total % 10 != 0):
            res = False
    
    if(res):
        print("YES")
    else:
        print("NO")