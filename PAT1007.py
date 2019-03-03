# import math
# import time


def bulid_table(num):
    table = [1 for i in range(num+1)]
    for i in range(2,num+1):
        if(table[i]==0):
            continue
        j=2
        while j*i< num+1:
            table[j*i]=0
            j=j+1

    return table


# def is_prime(num):
#     flag =True
#     for i in range(2, math.ceil(math.sqrt(num)+1)):
#         if num%i==0:
#             flag = False
#             break
#     return flag
#
# count = 0
# num = int(input())
# start = time.clock()
# a = 2
# b = 3
# if num<5:
#     print("0")
# else:
#     for i in range(5, num + 1):
#         if is_prime(i):
#             a=b
#             b=i
#             if b-a==2:
#                 count = count+1
#     print(count)
#
# end = time.clock()
# print (end-start)

count = 0
num = int(input())
# start = time.clock()
a = 2
b = 3
table = bulid_table(num)
if num<5:
    print("0")
else:
    for i in range(5, num + 1):
        if table[i]:
            a=b
            b=i
            if b-a==2:
                count = count+1
    print(count)
# end = time.clock()
# print (end-start)
