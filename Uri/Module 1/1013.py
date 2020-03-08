e1, e2, e3 = input().split()
a = int(e1)
b = int(e2)
c = int(e3)

def greater(a, b):
    temp = (a + b + abs(a - b))
    return temp / 2

m = greater(a, b)
maior = greater(m, c)
print("{} eh o maior".format(int(maior)))