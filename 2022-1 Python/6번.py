t=("섭씨to화씨","화씨to섭씨")
def fc(temper,action):
    if(action==1):
        temp=(temper-32)*5/9 
        print(t[action],":", temper," => ", temp)
    if(action==0):
        temp=(temper*9/5)+32
        print(t[action],":", temper," => ", temp)
temper=int(input("온도를 입력하세요 ? : "))
action=int(input("변환(0:섭씨to화씨, 1:화씨to섭씨) : "))
fc(temper,action)