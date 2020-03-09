from math import sqrt

l1 = input().split()
l2 = input().split()

x1 = float(l1[0])
y1 = float(l1[1])
x2 = float(l2[0])
y2 = float(l2[1])

temp = (((float(x2) - float(x1))** 2 + ((float(y2) - float(y1)) ** 2)))
dist = sqrt(temp)

print("{:.4f}".format(dist))

