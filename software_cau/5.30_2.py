# 네이버 검색 API예제는 블로그를 비롯 전문자료까지 호출방법이 동일하므로 blog검색만 대표로 예제를 올렸습니다.
# 네이버 검색 Open API 예제 - 블로그 검색
import os
import sys
import urllib.request
import json

def string_filter(input_string):
    filter_data = {'<b>':'', '</b>':'', '&nbsp;' : ' ', '&lt;' : '<', '&gt;' : '>', '&quot;':'"', '&amp;':'&'}
    result = input_string
    for key, value in filter_data.items():
        result = result.replace(key, value)
    return result

client_id = "_PousGbwtp95d4P5wgwH"
client_secret = "pA9yyCRPvX"
search_str = input("뉴스 검색할 단어를 입력하세요 : ")
encText = urllib.parse.quote(search_str)
url = "https://openapi.naver.com/v1/search/news.json?query=" + encText # json 결과
# url = "https://openapi.naver.com/v1/search/blog.xml?query=" + encText # xml 결과
request = urllib.request.Request(url)
request.add_header("X-Naver-Client-Id",client_id)
request.add_header("X-Naver-Client-Secret",client_secret)
response = urllib.request.urlopen(request)
rescode = response.getcode()
if(rescode==200):
    response_body = response.read()
    j = json.loads(response_body)
    for i in j["items"]:
        title = i["title"]
        description = i["description"]

        title = string_filter(title)
        description = string_filter(description)
        print("뉴스제목 : %s" % title )
        print("내용 : %s" % description)
        print("-------------------------")
else:
    print("Error Code:" + rescode)

