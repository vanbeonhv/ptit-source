for _ in range(int(input())):
  a, b = map(int,input().split())

  f= [0, 1]
  for i in range(2, b + 1):
    f.append(f[i-1] + f[i-2])

  sliced_list = f[a:b + 1]
  str_list = [str(i) for i in sliced_list]
  print(' '.join(str_list))