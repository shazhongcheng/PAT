i = 0

N = int(input())
flag = set()
my_list = list()
need = list()
while len(my_list) != N:
    str_in = input()
    num = [int(n) for n in str_in.split()]
    my_list.extend(num)
for n in num:
    while n != 1:
        if n % 2:
            n = (3 * n + 1) / 2
            i += 1
        else:
            n = n / 2
            i += 1
        flag.add(int(n))
for n in num:
    if not(n in flag):
        need.append(n)
need.sort(reverse=True)
for i in range(len(need)):
    if i != len(need) - 1:
        print(need[i], end=' ')
    else:
        print(need[i])
