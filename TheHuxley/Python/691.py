def greater(num1, num2):
    if num1 < num2:
        print("{0} {1}".format(num1, num2))
    else:
        print("{0} {1}".format(num2, num1))

num1, num2 = input().split()

greater(int(num1), int(num2))