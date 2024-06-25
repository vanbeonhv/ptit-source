import math

def ucln(a, b):
  if(b ==0): return a
  return ucln(b, a % b)

def is_prime(n):
  if(n <= 1): return False
  for i in range(2, math.floor(math.sqrt(n)) + 1):
    if(n % i == 0): return False
  return True

for _ in range(int(input())):
  a_str, b_str = input().split()[:2]
  a, b = int(a_str), int(b_str)
  u = ucln(a, b)

  sum = 0
  for i in str(u):
    sum += int(i)
  if(is_prime(sum)): print("YES")
  else: print("NO")