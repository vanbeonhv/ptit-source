import math
def ucln(a, b):
  if(b == 0): return a
  return ucln(b, a%b)

def is_prime(n):
  if(n <= 1):
    return False
  for i in range(2, math.floor(math.sqrt(n)) + 1):
    if(n % i == 0):
      return False
  return True

for _ in range(int(input())):
  n = int(input())
  cnt = 0
  for i in range(1, n):
    if(ucln(i, n) == 1): cnt += 1

  if(is_prime(cnt)): print("YES")
  else: print("NO")