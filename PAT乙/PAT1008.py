
def my_reverse(nums,begin,end):
    mid = (begin+end)/2
    i=0
    while (i+begin)<mid:
        nums[i+begin],nums[end-i] = nums[end-i],nums[begin+i]
        i+=1
    return

def my_print(nums):
    nums_len = len(nums)
    i=0
    while i<nums_len-1:
        print(nums[i],end=" ")
        i+=1
    print(nums[i])
# nums=[1,2,3,4,5,6]
# my_reverse(nums,0,6-1)
# print(nums)

str = input()
str = str.split()
num = int(str[0])
count = int(str[1])%num
nums = input().split()

my_reverse(nums,0,num-count-1)
my_reverse(nums,num-count,num-1)
my_reverse(nums,0,num-1)

my_print(nums)
