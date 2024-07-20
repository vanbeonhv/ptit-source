def ucln(a,b):
  if(b == 0): return a
  return ucln(b, a%b)

for i in range(int(input())):
  n = input()
  m = n[::-1]
  if(ucln(int(n), int(m)) == 1): print("YES")
  else: print("NO")
