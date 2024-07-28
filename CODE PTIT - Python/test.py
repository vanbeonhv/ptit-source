class Toan:
  def __init__(self, ten, diem1, diem2):
    self.ten = str(ten)
    self.diem1 = int(diem1)
    self.diem2 = int(diem2)
    self.diem_tb = round((diem1 + diem2)/2, 2)

  def sort(self):
    return sorted()