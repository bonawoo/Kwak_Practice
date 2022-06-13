class Car:
    #생성자를 이용하여 속성 초기값 설정하기
    def __init__(self, mk, md, c, y, p):
        self.maker = mk
        self.model = md
        self.color = c
        self.year = y
        self.price = p


    #메소드 정의(클래스 내부 함수 정의)
    def drive(self):#항상 self 파라미터가 기본적으로 존재
        print("기어를 D로 놓고 앞으로 이동합니다.")

    def turn(self, x): #실제 파라미터는 self 뒤에 이어서 붙임
        print("%s 방향으로 회전합니다." % x)

    def parking(self):
        print("기어를 P로 놓고 주차브레이크를 작동합니다.")


#클래스 외부, 코드 시작
if __name__ == "__main__":
    #객체 생성시 속성값을 설정, 테스트로 객체를 2개 생성
    car1 = Car("현대자동차", "그랜저", "white", 2022, 3400)
    car2 = Car("기아자동차", "모닝", "yellow", 2021, 1200)

    #객체 사용
    print("%d년식 %s %s %d만원 입니다" % (car1.year, car1.maker, car1.model, car1.price))
    print("%d년식 %s %s %d만원 입니다" % (car2.year, car2.maker, car2.model, car2.price))
else :
    print(__name__)
