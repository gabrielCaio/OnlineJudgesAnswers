time = int(input())
hour = 0
minutes = 0
seconds = 0
while time !=0:
    if time >= 3600:
        hour = time // 3600
        time = time % 3600
    else:
        minutes = time // 60
        time = time % 60
        seconds = time
        time = 0

print("{0}:{1}:{2}".format(hour, minutes, seconds))