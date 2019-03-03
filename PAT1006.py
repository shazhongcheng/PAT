
instr = input()
outstr = ""
if len(instr)==3:
    outstr += 'B'*int(instr[0])
    outstr += 'S' * int(instr[1])
    for i in range(int(instr[2])):
        outstr += str(i + 1)
elif len(instr)==2:
    outstr += 'S' * int(instr[0])
    for i in range(int(instr[1])):
        outstr += str(i + 1)
else:
    for i in range(int(instr[0])):
        outstr += str(i + 1)

print(outstr)