money = int(input())

print(money)

div100 = 0
div50 = 0
div20 = 0
div10 = 0
div5 = 0
div2 = 0
div1 = 0

while money != 0:   
    if money % 100 != money:
        div100 = money // 100
        money = money % 100
    elif money % 50 != money:
        div50 = money // 50
        money = money % 50
    elif money % 20 != money:
        div20 = money // 20
        money = money % 20
    elif money % 10 != money:
        div10 = money // 10
        money = money % 10
    elif money % 5 != money:
        div5 = money // 5
        money = money % 5
    elif money % 2 != money:
        div2 = money // 2
        money = money % 2
    elif money % 1 != money:
        div1 = money // 1
        money = money % 1

print("{} nota(s) de R$ 100,00".format(div100))
print("{} nota(s) de R$ 50,00".format(div50))
print("{} nota(s) de R$ 20,00".format(div20))
print("{} nota(s) de R$ 10,00".format(div10))
print("{} nota(s) de R$ 5,00".format(div5))
print("{} nota(s) de R$ 2,00".format(div2))
print("{} nota(s) de R$ 1,00".format(div1))