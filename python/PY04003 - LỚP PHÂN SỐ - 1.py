def ucln(a, b):
  if(b == 0): return a
  return ucln(b, a%b)

class PhanSo:
  def __init__(self, t, m):
    self.t = t
    self.m = m
  def rut_gon(self):
    u = ucln(self.t, self.m)
    new_t = round(self.t / u)
    new_m = round(self.m / u)
    print(f"{new_t}/{new_m}")

if __name__ == '__main__':
    arr = input().split() 
    p = PhanSo(int(arr[0]), int(arr[1]))
    p.rut_gon()
