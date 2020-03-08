code1, num1, valuePiece1 = input().split()
code2, num2, valuePiece2 = input().split()

value1 = int(num1) * float(valuePiece1)
value2 = int(num2) * float(valuePiece2)

print("VALOR A PAGAR: R$ {:.2f}".format(value1 + value2))

