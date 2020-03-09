timeInDays = int(input())
years = 0
month = 0
days = 0

while timeInDays != 0:
    if timeInDays > 365:
        years = timeInDays // 365
        timeInDays = timeInDays % 365
    else:
        month = timeInDays // 30
        timeInDays = timeInDays % 30
        days = timeInDays
        timeInDays = 0

print("{} ano(s)".format(years))
print("{} mes(es)".format(month))
print("{} dia(s)".format(days))