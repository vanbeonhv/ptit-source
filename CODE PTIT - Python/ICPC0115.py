def factorial(x):
    if x == 0:
        return 1
    return x * factorial(x - 1)


for i in range(int(input())):
    n = input()
    total = 0
    for j in n:
        total += factorial(int(j))
    if total == int(n):
        print("Yes")
    else:
        print("No")
