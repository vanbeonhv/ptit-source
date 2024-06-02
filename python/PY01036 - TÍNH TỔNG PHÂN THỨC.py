# --------some how the recursive way didn't correct
# def my_sum(x):
#     if x == 1:
#         return 1
#     elif x == 2:
#         return 1/2
#     else:
#         return 1/x + my_sum(x - 2)


# for _ in range(int(input())):
#     n = int(input())
#     print("{:.6f}".format(my_sum(n)))

for _ in range(int(input())):
    n = int(input())
    sum = 0
    for i in range(2 - n % 2, n + 1, 2):
        sum += 1/i
    print("{:.6f}".format(sum))
