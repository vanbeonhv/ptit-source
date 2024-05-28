def thuan_nghich(n):
    if(len(n) % 2 != 0 or n != n[::-1]):
        return False
    for i in n:
        if(int(i) % 2 != 0):
            return False
    return True


k = int(input())
for _ in range(k):
    list = []
    n = int(input())
    for i in range(22, n, 2):
        i = str(i)
        if (thuan_nghich(i)):
            list.append(i)
    print(" ".join(list))
