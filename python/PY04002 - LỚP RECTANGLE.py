class Rectangle:
    def __init__(self, h, w, c):
        if not (isinstance(h, int) and isinstance(w, int) and isinstance(c, str)):
            print("INVALID")
        self.h = int(h)
        self.w = int(w)
        self.c = str(c)

    def perimeter(self):
        return 2 * (self.h + self.w)

    def area(self):
        return self.h * self.w

    def color(self):
        return self.c.lower().capitalize()


if __name__ == '__main__':
    arr = input().split() 
    if int(arr[0]) > 0 and int(arr[1]) > 0: 
      r = Rectangle(int(arr[0]), int(arr[1]), arr[2]) 
      print("{} {} {}".format(r.perimeter(), r.area(), r.color()))
    else: print("INVALID")
