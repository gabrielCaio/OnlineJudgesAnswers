entrada = [int(i) for i in input().split()]

hi = entrada[0]
mi = entrada[1]
hf = entrada[2]
mf = entrada[3]

hd = hf - hi + 24 * int(hf < hi or (mf < mi and hf <= hi) or (hf == hi and mf == mi)) - int(mf < mi)
md = mf - mi + 60 * int(mf < mi)

print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hd, md))