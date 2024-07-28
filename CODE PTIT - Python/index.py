# filename = 'test_text.txt'

# with open(filename) as file_object:
#     lines = file_object.readlines()
#     print(lines)

# i = 0
# for line in lines:
#     print(f"Dong thu {i + 1} co noi dung la {line.rstrip()}")
#     i += 1


# with open('test.txt', 'w') as file_write_blae:
#   file_write_blae.write('test')

# import json


# with open('test.json') as f:
#     data = json.load(f)
#     print(data)

diem = []

for _ in range(int(input())):
  name = input()
  toan, ly, hoa = [int(i) for i in input().split()]
  diem_tb = round((toan + ly + hoa)/3, 3)
  diem.append([name, toan, ly, hoa, diem_tb])



sorted_team = sorted(diem, key= lambda x: x[4], reverse=True)
for i in range(len(sorted_team)):
  print(" ".join(str(a) for a in sorted_team[i]))