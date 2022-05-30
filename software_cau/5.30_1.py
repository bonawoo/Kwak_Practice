#인터넷 url에 접속하기 위한 모듈
import urllib.request as URL

#호출하고자 하는 open api 주소
api = "http://api.openweathermap.org/data/2.5/weather?"

#파라미터 설정을 위한 변수
city = "Seoul"
mode = "json"
appid = "26262cbdee846b1b4d9d79bf51995b53"

api = api + "q=" + city
api = api + "&mode=" + mode
api = api + "&appid=" + appid

print(api)

data = URL.urlopen(api)
result = data.read()

#json 형태
print(result)

import json

j = json.loads(result)
weather = j["weather"]
current = weather[0]["main"]

main = j["main"]
current_temp = main["temp"] - 273.15

wind = j["wind"]
speed = wind["speed"]

print("%s의 현재 날씨 : %s" % (city, current))
print("현재온도 : %.1f" % current_temp )
print("현재풍속 : %.1f" % speed )
