name = input()
wage = float(input())
sales = float(input())

comission = sales * 0.15

print("TOTAL = R$ {:.2f}".format(wage + comission))