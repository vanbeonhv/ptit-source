import math

def is_prime(n):
    if(n <= 1): return False
    for i in range(2, math.floor(math.sqrt(n) + 1)):
        if(n % i == 0): return False

    return True

for _ in range(int(input())):
    n = int(input()[-4:])
    if(is_prime(n)): print("YES")
    else: print("NO")
