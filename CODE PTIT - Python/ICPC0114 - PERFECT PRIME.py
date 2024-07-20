import math


def is_prime(x):
  if (x <= 1): return False
  for i in range(2, round(math.sqrt(x)) + 1):
    if (x % i == 0): return False
  return True


for _ in range(int(input())):
  n = input()
  if not (is_prime(int(n))):
    print('No')
    continue

  reversed_n = int(n[::-1])
  if not (is_prime(reversed_n)):
    print('No')
    continue

  sum = 0
  is_out = False
  for j in n:
    if not (is_prime(int(j))):
      is_out = True
      break

  if (is_out):
      print('No')
      continue

  sum += int(j)

  if not (is_prime(sum)):
      print('No')
      continue
  
  print("Yes")