def my_sum(x):
    if(x <= 2):
        return 1/x
    return 1/x + my_sum(x - 2)



for _ in range(int(input())):
    n = int(input())
    print(round(my_sum(n), 6))
    
