def ucln(a, b):
    if (b == 0):
        return a
    return ucln(b, a % b)


class PhanSo:
    def __init__(self, t, m):
        self.t = t
        self.m = m

    def tong(self, q: 'PhanSo'):
        new_t = self.t * q.m + self.m * q.t
        new_m = self.m * q.m
        u = ucln(new_t, new_m)
        print(f"{round(new_t / u)}/{round(new_m / u)}")


if __name__ == '__main__':
    arr = input().split()
    p = PhanSo(int(arr[0]), int(arr[1]))
    q = PhanSo(int(arr[2]), int(arr[3]))
    p.tong(q)
