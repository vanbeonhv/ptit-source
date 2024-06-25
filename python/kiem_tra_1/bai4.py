for _ in range(int(input())):
    n = input()
    ok = True
    if(n[0] + n[1] != n[len(n) - 1] + n[len(n) - 2]):
        ok = False
    if(ok): print("YES")
    else: print("NO")