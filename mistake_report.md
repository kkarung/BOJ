#### 2156
DP 정석 문제. 해결 못 함. **최댓값이 나올 수 있는 모든 경우의 수를 비교**하는 방식으로 풀 수 있다.<br><br>
**MAX macro (3 parm)**: 
#define MAX(a, b, c) (((a) > (b)) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

#### 2193
10007과 같이 **소수로 나누라고 하지 않아도 답이 int의 범위를 넘어갈 때**가 있다.<br>
따라서 항상 int 범위를 넘는지 체크할 것

#### 2438
**문자열 곱셈 연산 안 됨**(java가 아님!)

#### 2741
출력 속도가 중요할 땐 **endl 쓰지 말 것**<br>
#[ 출력 속도 비교](https://www.acmicpc.net/blog/view/57) #[ (혹시 모른) 하나의 string으로 만드는 방법](https://www.acmicpc.net/source/24809285)

#### 9465
DP 정석 문제로 문제를 해결하지 못 했다. 점화식을 만드는 것에 실패했다.

#### 10818
출력 속도를 신경쓰지 않고 풀었음<br>
어디까지 빨라질 수 있는지 궁금할 때 이 문제 #[ 맞은 사람](https://www.acmicpc.net/problem/status/10818/84/1)을 확인해보자

#### 10844
문제에서 나머지를 출력하라고 할 때는 **module 연산을 꾸준히** 할 것<br>
분명 중간에 overflow가 발생할 수 있기 때문!

#### 10952
문제 조건을 제대로 안 읽고 깜빡함

#### 11053
DP 문제. 못 풀었다. 풀이 방법은 생각했는데 겁 먹음.<br>
#[ 다른 신박한 풀이](http://melonicedlatte.com/algorithm/2018/07/15/172615.html)

#### 11718
문자열 입력 받고 출력하는데 미숙함<br>
**getline** 사용법 반드시 숙지하자<br>
#[ getline](https://kyu9341.github.io/C-C/2020/01/17/C++getline()/) #[ 11718 참고](https://noosphere.tistory.com/5) #[ (혹시 모른) scanf 행으로 입력 받기](https://www.acmicpc.net/source/16084304)<br>
(첫번째 블로그에서 delimiter 전까지 받는 게 아니라 delimiter는 버리고 그 전까지만 저장한다는 점이 틀림 [# 참고](http://www.cplusplus.com/reference/string/string/getline/))

#### 11720

**char으로 입력받으면 한 글자씩 입력 받을 수 있음**<br>
참고로 scanf 서식 이용하면 원하는 글자 수 만큼 입력 받을 수 있다.<br>
#[ 11720 참고](https://blockdmask.tistory.com/78) #[ scanf 한 글자 입력 받기](https://www.acmicpc.net/source/7479073)

#### 11721

**string은 한 글자씩 인덱스 쓸 수 있음**을 잊지 말기<br>
string은 **length, substr 함수**를 쓸 수 있다.<br>
#[ 11721 참고](https://ldgeao99.tistory.com/224)
