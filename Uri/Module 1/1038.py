l = input().split()

code = int(l[0])
quant = int(l[1])

if code == 1:
    total = quant * 4.00
    print("Total: R$ {:.2f}".format(total))
elif code == 2:
    total = quant * 4.50
    print("Total: R$ {:.2f}".format(total))
elif code == 3:
    total = quant * 5.00
    print("Total: R$ {:.2f}".format(total))
elif code == 4:
    total = quant * 2.00
    print("Total: R$ {:.2f}".format(total))
elif code == 5:
    total = quant * 1.50
    print("Total: R$ {:.2f}".format(total))