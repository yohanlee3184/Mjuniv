h= int(input("본인의 키(cm) : "))*0.01
kg=int (input("본인의 몸무게(kg) :  "))

bmi = kg/h/h
if(bmi<18.5):
    print("저체중 입니다.")
elif(bmi<23 and bmi>=18.5):
    print("정상 입니다.")
elif(bmi<25 and bmi>=23 ):
    print("과체중 입니다.")
elif(bmi<30 and bmi>=25 ):
    print("경도 비만 입니다.")
elif(bmi<35 and bmi>=30 ):
    print("중등도 비만 입니다.")
elif(bmi>=35):
    print("고도 비만 입니다.")