n = input()
l = len(n)
a = n[l-3] + n[l-2] + n[l-1]
if(a=='.py'):
  print('yes')
else:
  print('no')