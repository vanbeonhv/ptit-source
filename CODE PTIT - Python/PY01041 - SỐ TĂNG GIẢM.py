for _ in range(int(input())):
  n = input()
  if(int(n) < 100):
    print("NO")
    continue


  lst = [int(digit) for digit in n]
  max_no = max(lst)
  max_index = lst.index(max_no)
  is_valid = True

  for i in range(max_index, 0, -1):
    if(lst[i] <= lst[i-1]):
      is_valid = False
      break
  if(is_valid is False):
    print("NO")
    continue

  for i in range(max_index, len(lst) - 1):
    if(lst[i] <= lst[i+1]):
      is_valid = False
      break

  if(is_valid is False):
    print("NO")
  else:
    print("YES")

