# Week2 WIL
2주차 학습에 대한 복습
## 진수 체계와 컴퓨터
### 진수법
진수 체계를 가장 쉽게 이해하는 방법은, **올림 현상은 10진수만의 전유물이** 아니라는 것
|10진수|2진수 |16진수|
|----:|----:|----:|
|0|0|0|
|1|1|1|
|2|10|2|
|3|11|3|
|4|100|4|
|5|101|5|
|6|110|6|
|7|111|7|
|8|1000|8|
|9|1001|9|
|10|1010|A|
|11|1011|B|
|12|1100|C|
|13|1101|D|
|14|1110|E|
|15|1111|F|
|16|10000|10|
### IEEE 754
실수 표현법
$$(-1)^S \times M \times 2^E$$

## 배열과 문자열
### 1차원 배열
- C언어의 배열은 길이를 할당하고, 사용해야한다
- 초기화 값이 부족할 경우 자동으로 0이 채워진다
- 배열에 값을 할당하기 위해서는 **{}** 안에 원소를 넣어야 한다
```c
int arr1[5] = {1,2,3,4,5};
int arr2[] = {1,2,3,4,5,6,7}; // arr2[7] = {1,2,3,4,5,6,7}
int arr3[5] = {1,2}; // arr3[5] = {1,2,0,0,0}
```
### char형 배열과 문자열
- 널 문자('```\0```') : 문자열 끝에 삽입되어 문자열의 끝을 의미
- **널 문자 vs 공백 문자** : 둘 다 아무것도 출력되지 않지만, 널 문자는 0, 공백 문자는 32이다
- 널 문자가 있으면 **문자열**, 없으면 단순한 **문자 배열**의 의미
### 널 문자가 필요한 이유
- **"배열의 길이"** 와 **"문자열의 길이"** 는 다른 개념
- ```printf()```도 널 문자를 만나기 전까지를 문자열로 보고 출력한다
```c
char str[50] = "I like C programming";
printf("%s \n", str); // I like C programming

str[8] = '\0';
printf("%s \n", str); // I like C

str[6] = '\0';
printf("%s \n", str); // I like

str[1] = '\0';
printf("%s \n", str); // I
```
### 문자열 입력
- 문자열을 입력받을 때는 &을 입력하지 않는다!
```c
char string[10];
scanf("%s", string);
```
### scanf() 띄어쓰기
- ```scanf()```는 **공백**을 기준으로 데이터의 수를 구분한다
- 따라서 공백이 있는 문자열을 입력받으려면 다른 함수를 이용해야한다

## 포인터
### 포인터는 주소를 저장하는 것
- **포인터 변수** : **정수** 형태로 된 **주소 값**을 저장하는 목적으로 선언된다
- 변수는 항상 임의의 주소의 메모리 공간을 차지한다
- 그 주소를 저장하기 위해 포인터가 존재하는 것이다
- 하나의 **자료형**처럼 받아들이면 편하다
### 포인터를 사용하기 위한 연산자
- ```*``` : 포인터 변수에 쓰인다
- ```&``` : 변수의 주소값을 알아낼 때 쓰인다
```c
int num; // 정수형 변수를 선언
int* pnum; // 정수형 포인터 변수를 선언
pnum = &num; // 변수의 주소값을 포인터 변수에 저장
```
- 포인터 변수 ```pnum```이 변수 ```num```을 가리킨다
- 자료형에 맞춰서 저장해야 한다 (int형 변수는 int형 포인터 변수에)
- 이미 선언 및 초기화 된 포인터 변수에서, 해당 포인터가 가리키는 기존 변수의 값을 참조하기 위해서는 포인터 변수앞에 ```*```을 붙이면 된다
### 널 포인터
- 포인터 변수의 값을 0 또는 NULL로 초기화

## 포인터와 배열
### 배열의 이름 == 포인터 변수 == 배열[0]
- 배열의 **시작 주소 값**(배열[0]의 주소) **포인터**가 **배열의 이름**이다
- 즉, **배열 이름**에 **\* 연산자**를 이용하여 메모리에 접근이 가능함
```c
int arr[3] = {10, 20, 30};
printf("%p\n", arr); // 0x16f8db6a8
printf("%p\n", &arr[0]); // 0x16f8db6a8
```
- 즉, 배열의 이름을 포인터 처럼 사용할 수 있다
### 포인터 증감 연산
- **포인터 변수**의 **저장된 값**을 **증감 연산** 할 수 있다
- 포인터 변수 대상으로 증감 시, ```sizeof(자료형)```만큼 증가한다
- **결론** : ```arr[i] == *(arr+i)```
### 문자열 표현 방식
- **문자열이 저장된 배열** vs **문자열의 주소 값을 저장하는 방식**
- 변수 성향(변경 가능) vs 상수 성향(변경 불가능)
```c
char str1[] = "My String";
char* str2 = "Your String";
```
### 상수 형태의 문자열
- 문자 할당 후 반환되는 주소 값 저장
- 문자열이 선언된 위치로 주소 값 반환
- 문자열 전달만 봐도 매개 변수 형을 앎
### 문자열이 널 문자까지인 이유
- 배열의 길이에 대한 정보가 전달이 안되서, ```\0```까지 출력하는 것이다
### 포인터 배열
```c
int* arr1[20]; // 길이가 20인 int형 포인터 배열
double* arr2[30]; // 길이가 30인 double형 포인터 배열
char* arr3[3] = {"Simple", "String", "Array"};
```

## 포인터와 함수
### 인자 전달 방식
- 인자 전달의 기본 방식 : **복사**
- **C 언어는 매개변수로 배열을 사용할 수 없다**
- 배열을 통으로 복사해서 전달하는 방식은 불가능하다
- 따라서 **배열의 주소 값을 전달하는 방식**을 사용한다
### 배열을 함수의 인자로 전달하는 방법
- 배열의 인자로 포인터 변수 전달하면, 배열처럼 사용 가능하다
```c
void Function(int* param) { // 또는 (int param[])
    printf("%d\n", param[0]);
}
```
### Call-by-value vs. Call-by-reference
- **call-by-value**: 함수를 호출할 때 단순히 값만 전달한다
 (함수 외부에 선언된 변수에 접근이 불가능)
- **call-by-reference**: 메모리 접근에 사용되는 주소값을 전달한다
 (함수 외부에 선언된 변수에 접근이 가능)
- 구분 기준 : **함수의 인자로 전달되는 대상**
### const의 위치
```c
const int* ptr = &num;
```
- 포인터 변수 ptr을 통해서 ptr이 가리키는 변수에 저장된 값을
변경하는 것을 허용하지 않는다
```c
int * const ptr = &num;
```
- 포인터 변수 ptr에 저장된 값을 상수화한다
- 즉, 가리키는 대상(주소)을 변경할 수 없다

## 과제
### 삽입 정렬 (Insertion Sort)

삽입 정렬은 리스트의 각 요소를 순차적으로 정렬된 부분 리스트에 삽입하여 정렬한다

**과정:**
1. 두 번째 요소(인덱스 1)부터 시작한다. 첫 번째 요소(인덱스 0)는 이미 정렬된 부분으로 간주한다.
2. 현재 요소를 정렬된 부분 리스트의 적절한 위치에 삽입한다.
   - 현재 요소를 이전 요소들과 비교하여 자신의 위치를 찾을 때까지 왼쪽으로 이동한다.
   - 이동할 때마다 현재 요소보다 큰 요소들은 오른쪽으로 한 칸씩 이동한다.
3. 이 과정을 리스트의 마지막 요소까지 반복한다.

### 버블 정렬 (Bubble Sort)

버블 정렬은 인접한 요소들을 비교하고 필요시 교환하여 리스트의 요소를 순차적으로 정렬한다.

**과정:**
1. 리스트의 처음부터 시작하여 인접한 두 요소를 비교한다.
2. 만약 두 요소가 순서가 틀렸다면 교환한다.
3. 리스트의 끝까지 이 과정을 반복한다.
4. 리스트를 끝까지 순회한 후, 가장 큰 요소가 맨 끝에 위치하게 된다.
5. 이 과정을 리스트가 정렬될 때까지 반복한다. 각 반복마다 마지막 정렬된 요소는 다음 반복에서 제외한다.

### 선택 정렬 (Selection Sort)

선택 정렬은 리스트에서 최솟값을 찾아 이를 맨 앞의 요소와 교환하는 방식으로 작동한다.

**과정:**
1. 리스트에서 최솟값을 찾는다.
2. 그 최솟값을 리스트의 첫 번째 요소와 교환한다.
3. 다음으로, 두 번째 요소부터 끝까지 반복하여 최솟값을 찾고 이를 두 번째 요소와 교환한다.
4. 리스트의 마지막까지 이 과정을 반복한다.