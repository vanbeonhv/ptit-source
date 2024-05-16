for _ in range(int(input())):
  n = int(input())
  res = n
  isFound = False
  for i in range(1000):
    if(res % 7 == 0):
      isFound = True
      break
    res += int(str(res)[::-1])
  if(isFound):
    print(res)
  else:
    print(-1)

