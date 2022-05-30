import os
import sys
import urllib.request
import json

client_id = "8n7RvFxhADTZh5gs6NLe" # 개발자센터에서 발급받은 Client ID 값
client_secret = "uYVPxvwXPD" # 개발자센터에서 발급받은 Client Secret 값
trans_str = input("한국어 입력 : ")
encText = urllib.parse.quote(trans_str)
data = "source=ko&target=ja&text=" + encText
url = "https://openapi.naver.com/v1/papago/n2mt"
request = urllib.request.Request(url)
request.add_header("X-Naver-Client-Id",client_id)
request.add_header("X-Naver-Client-Secret",client_secret)
response = urllib.request.urlopen(request, data=data.encode("utf-8"))
rescode = response.getcode()
if(rescode==200):
    response_body = response.read()
    trans_data =  json.loads(response_body)
    print(trans_data["message"]["result"]["translatedText"])
else:
    print("Error Code:" + rescode)
