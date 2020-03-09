from math import sqrt

l = input().split()

def bhaskara(a, b, c, delta):
    r1 = (-b + sqrt(delta)) / (2*a)
    r2 = (-b - sqrt(delta)) / (2*a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))

a = float(l[0])
b = float(l[1])
c = float(l[2])
delta = ((b**2) - (4*a*c))

if delta < 0 or a == 0:
    print("Impossivel calcular")
else:
    bhaskara(a, b, c, delta)