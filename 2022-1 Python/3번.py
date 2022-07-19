data=[29,5,18,7,9,32,13,11,24,0,10,20,30]
num=0
while True:
    if num==len(data):
        break
    
    if data[num]>=10:
        print(data[num]," ",end=' ')
        for i in range(data[num]):
            print('♣',end=' ')
    else:
        print(data[num],"  ",end=' ')
        for i in range(data[num]):
            print('♣',end=' ')
    print()
    num+=1