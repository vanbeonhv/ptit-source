k = input()

for i in range(int(k)):
    n = input()
    if n[0] + n[1] == n[-2] + n[-1]:
        print("YES")
    else:
        print("NO")
