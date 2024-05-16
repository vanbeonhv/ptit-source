def my_sum(x):
    if x == 1:
        return 1
    elif x == 2:
        return 1/2
    else:
        return 1/x + my_sum(x - 2)


for _ in range(int(input())):
    n = int(input())
    print(round(my_sum(n), 6))