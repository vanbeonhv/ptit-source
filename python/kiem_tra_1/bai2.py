for _ in range(int(input())):
    n = input()
    ok = True
    found = False
    for i in range(len(n) - 1):
        if(i == 0): continue
        if(found == False):
            if(int(n[i + 1]) > int(n[i])):
                found = True
        else:
            if(int(n[i + 1]) < int(n[i])):
                ok = False
                break
    if(ok and len(n) == 8): print("YES")
    else: print("NO")

            





            
        