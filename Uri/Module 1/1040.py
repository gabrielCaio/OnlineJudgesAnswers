l = input().split()

n1 = float(l[0])
n2 = float(l[1])
n3 = float(l[2])
n4 = float(l[3])

avg = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10

if avg >= 7.0:
    print("Media: {:.1f}".format(avg))
    print("Aluno aprovado.")
elif avg < 5.0:
    print("Media: {:.1f}".format(avg))
    print("Aluno reprovado.")
elif avg >= 5.0 or avg < 7:
    print("Media: {:.1f}".format(avg))
    print("Aluno em exame.")
    exam = float(input())
    print("Nota do exame: {:.1f}".format(exam))
    temp = avg + exam
    avg2 = temp / 2
    if avg2 >= 5.0:
        print("Aluno aprovado.")
        print("Media final: {:.1f}".format(avg2))
    elif avg2 < 5.0:
        print("Aluno reprovado.")
        print("Media final: {:.1f}".format(avg2))