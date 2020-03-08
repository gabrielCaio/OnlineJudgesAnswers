def lastdigit(a):
    if a > 10:
        return lastdigit(a % 10)
    else:
        return a

'''def numbersSort(arr, d):
    for i in range(5):
        a = arr[i]
        b = lastdigit(a)
        print(b)

arr = []
n, d = input().split()

for i in range(int(n)):
    arr.append(int(input()))

arr.sort(reverse=True)

numbersSort(arr, d)'''

n, d = input().split()


