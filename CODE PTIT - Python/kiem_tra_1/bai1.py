nums = ['0', '1', '2', '3', '4']


for _ in range(int(input())):
    n = input()
    total = 0
    ok = True
    for i in n:
        valid = i in nums
        if(valid == False):
            ok = False
            break; 
        total += int(i)
    if(total != 5): 
        ok = False
    if(ok): print("YES")
    else: print("NO")

