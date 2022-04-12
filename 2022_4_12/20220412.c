//통합 개발 환경 IDE: 코딩, 디버깅, 컴파일, 배포를 관리해주는 프로그램
//프로젝트 생성방법: 파일 -> 새로 만들기 -> 프로젝트 -> 빈프로젝트
//소스파일 생성방법: 소스파일 오른쪽 마우스 -> 추가 -> 새항목
//소스파일 이름 규칙: 언더바(_)사용 X, 특수 문자 사용 X
//C++은 C언어를 확장한 프로그래밍 언어로써 C언어의 기능을 포함, 따라서 C++프로젝트에서 C언어 파일(.c)동작
//소스코드 실행 방법: 디버그 -> 디버깅 시작
//소스코드는 알아서 꺼지기 때문에 system("pause")함수로 콘솔창 닫힘방지

//hello world 출력프로그램
//#include <stdio.h> //라이브러리 불러오기(표준입출력함수 = standardInputOutput = stdio)
//int main(void) { //항상 main함수로 시작 반환값은 없는것(void)이 일반적
//	printf("hello world"); //stdio.h파일에 들어있는 출력 함수
//	system("pause"); //c언어에서 system()함수를 이용해서 운영체제의 기본적인 기능을 이용할 수 o
//	//명령 프롬프트에서 pause 명령어는 키보드를 입력하기 전까지 대기하는 기능 수행
//	return 0;
//}
//다 만들어진 프로그램을 배포하는 방법: 빌드 -> 솔루션 빌드 클릭(솔루션 재빌드 클릭)
//프로젝트 빌드 결과 확인: 솔루션탐색기 오른쪽 마우스 -> 파일탐색기에서 폴더열기 클릭 -> 디버그 폴더 -> .exe파일
//소스파일 ~ 실행파일 과정
//설계도 -(에디터)-> 소스코드 -(전처리기)-> 향상된 소스코드 -(컴파일러)-> 목적코드 -(링커)-> 실행파일(.exe)


//변수(variable): 변할 수 있는 데이터 
//상수(constant): 변하지 않는 데이터
//변수 선언: 자료형 변수형(int a;) 원할 경우 초기값 적용

//정수 변수 선언 후, 출력하는 프로그램
//#include <stdio.h>
//int main(void) {
//	int a = 7;
//	printf("The number is %d\n", a); //%d 7이 어디에 출력될지 알려주는 형식지정자
//	system("pause");
//	return 0;
//}

//초기화 되지 않은 변수에는 쓰레기 값이 들어가지만, 정적변수(main 함수 밖)로 선언되면 기본적으로 0값 초기화
//정적변수가 아닌 변수를 0으로 초기화 하려면 일일이 넣어주어야 함

//정적변수 선언 후, 출력하는 프로그램
//#include <stdio.h>
//int a;
//int main(void) {
//	
//	printf("The number is %d\n", a); //%d 7이 어디에 출력될지 알려주는 형식지정자
//	system("pause");
//	return 0;
//}

//변수와 상수 6가지
//int: 4bite - 정수형(억단위)
//long long: 숫자가 긴 정수형 표현
//double: 실수형
//striong: 문자열
//bool: true or false
//char: 한 문자
//메모리 공간을 차지하는 영역은 언어나 실행환경에 따라 바뀐다.

//예약어와 식별자
//식별자(identifier): 변수나 함수 등의 고유한 이름을 지정할 때 사용 
//이떄 c언어 문법으로 정해진 예약어는 식별자로 사용할 수 없다. string, for, void, bool, if

//정수가 컴퓨터 내부에서 표현되는 방법
//정수는 2진수 숫자로 표현, 8비트 공간 중에 부호, 2의 6승 크기의 숫자 표현
//부호 절대값 방식: 0 - 양수 , 1 - 음수 (다양한 값의 연산을 수행하기에 적합하지 않음)
//2의 보수 = 1의 보수 + 1 (연산 수행에 용이해서 사용)

//실수의 표현
//실수를 정확히 표현하지 못하므로 부호, 지수, 유효숫자로 비트를 나눠서 표현

//기본입출력

//scanf()이용하여 입력한 값 출력하는 프로그램
//scanf()는 취약하기 때문에, 경고를 해줘야한다._CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main(void) {
//	int a = 0;
//	scanf("%d", &a); //&는 특정변수의 주소를 의미한다
//	//실제로 컴퓨터가 특정 메모리 주소에 접근하여 데이터를 수정하므로 &를 사용하는 것
//
//	printf("The number that you input is %d", a);
//	system("pause");
//	return 0;
//}

//특정 메모리 주소에 접근하여 데이터를 수정하는 컴퓨터를 사용할때
//메모리 주소에 얼마만큼의 크기로 데이터를 쓸 지 결정해야 한다.
//데이터의 크기를 지정해주는 것이 형식지정자이다
//int - %d (4bytes)
//long long - %lld (8bytes)
//double - %lf(입력) %f(출력) (8bytes) 
//double -> 입력 받을때는 특정주소에 특정크기만큼 입력해야하지만 출력은 주소가 아닌 값 자체를 출력하므로 크기 지정 안해도 된다.
//float - %f (4bytes)
//string - %s (제한없음)
//char - %c (1bytes)

//%를 출력하고 싶으면 %%를 입력하면 된다.

//실수형을 입력 받아서 소수점 셋째 자리까지 출력하기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	double a = 0;
//	scanf("%lf", &a);
//	printf("%.3f", a);
//	system("pause");
//	return 0;
//}

//두 숫자를 입력 받아 순서 바꾸어 출력하기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", b, a);
//	system("pause");
//	return 0;
//}

//한자리 씩 끊어서 입력 받기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int a, b, c;
//	scanf("%1d%1d%1d", &a, &b, &c);
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}

//c언어에서 입출력을 할때 형식 지정자를 적절히 따라야 한다.
//출력은 단순히 데이터를 넘기지만, 입력은 입력받을 주소를 & 사용으로 지정해줘야 한다.

//연산자의 의미와 연산자의 우선순위
//연산자(operator) +=-... <-> 피연산자(operand) 변수, 상수

//대입연산자: = 우변항을 좌변항에 넣음
//사칙연산: + - * / %(나머지)

//사칙연산
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d % %d = %d\n", a, b, a % b);
//	system("pause");
//	return 0;
//}

//이스케이프 시퀀스
//\n - 줄바꿈
//\t - 수평 탭 넣기
//\\ - 백슬래시 넣기
//\" - " 넣기
//\b - 백 스페이스 넣기

//관계연산자
// >, <, ==, !=, >=, <=
//참일때 1출력, 거짓일때 0출력
//0일때 거짓입력, 나머지는 참 입력

//관계연산자 실습
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a > b);
//	
//	system("pause");
//	return 0;
//}

//논리연산자
// ! 부정
// && 그리고
// || 또는

//논리연산자 실습
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", !a);
	printf("%d\n", a && b);
	printf("%d\n", a || b);

	system("pause");
	return 0;
}

//증감연산자
//++(변수): i값을 1 증가시킨 후에 반환
//(변수)++: 반환 후에 i 값에 1 증가
//--도 마찬가지

 