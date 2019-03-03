

nums = input().split()
nums = list(map(int,nums))
flag = 1
for i in range(0,len(nums),2):
    if(nums[i+1]>0):
        if flag==1:
            print("%d %d"%(nums[i]*nums[i+1],nums[i+1]-1),end="")
            flag=0
        else:
            print(" %d %d" % (nums[i] * nums[i + 1], nums[i + 1] - 1), end="")

if(flag==1):
    print("0 0")
    