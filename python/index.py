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

import json


with open('test.json') as f:
  data = json.load(f)
  print(data)