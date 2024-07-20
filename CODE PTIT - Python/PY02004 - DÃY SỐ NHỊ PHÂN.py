cnt = 0
a = input()
n = input().split()
for i in range(len(n) - 1):
    if (n[i] != n[i+1]):
        cnt += 1
print(cnt)
