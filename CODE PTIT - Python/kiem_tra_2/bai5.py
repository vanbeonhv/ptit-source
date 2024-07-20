# cho file json:
# đọc dữ liệu từ file

# cho n số bộ test
# cho 2 năm: x, y
# in ra tổng số khách hàng có year nằm trong khoảng x, y

import json

with open('flights.json', 'r') as file:
    data = json.load(file)

a = data["flights"]

cnt = 0
for _ in range(int(input())):
    x, y = [int(a) for a in input().split()]
    for i in a:
        if(int(i['year']) >= x and int(i['year']) <= y):
           cnt += int(i['passengers']) 
    if(cnt == 0):
        print("INVALID")
    else:
        print(cnt)