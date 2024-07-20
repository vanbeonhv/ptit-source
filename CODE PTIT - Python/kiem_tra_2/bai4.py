team = []

for _ in range(int(input())):
    name1 = input()
    diem1, hieu_so1, fair1 = [int(i) for i in input().split()]
    team.append([name1, diem1, hieu_so1, fair1])

sort_team = sorted(team, key=lambda x: (x[1], x[2], x[3]), reverse=True)

for i in range(len(team)):
    print(" ".join([str(a) for a in sort_team[i]]))