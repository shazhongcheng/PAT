
class stu:
    def __init__(self,name,num,grade):
        self.name = name
        self.num = num
        self.grade = grade

list = []

num = int(input())


for i in range(num):
    pra = input().split(' ')
    temp = stu(pra[0],pra[1],int(pra[2]))
    list.append(temp)

list = sorted(list,key=lambda stu:stu.grade,reverse=True)


print("{} {}".format(list[0].name,list[0].num))
print("{} {}".format(list[num-1].name,list[num-1].num))
