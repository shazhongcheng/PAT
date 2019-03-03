
n = int(input())

i=0

while i<n:
    str = input().split()
    A = int(str[0])
    B = int(str[1])
    C = int(str[2])
    if A+B > C:
        print("Case #%d: true" % (i + 1))
    else:
        print("Case #%d: false" % (i + 1))
    i+=1