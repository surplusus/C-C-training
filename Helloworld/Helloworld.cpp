// #include 는 전처리기. 
// stdafx.h는 헤더파일
// stdafx.h 파일을 까보면 stdio.h 와 tchar.h가 있다
#include "stdafx.h"

// main() 함수는 화면에 출력시킬 시작점
int main()
{
	//printf를 까보고 싶다면, (Visual Studio 한정) F12
	//printf는 문자열을 다룬다.
	// \n을 입력하지 않는다면 문장이 계속 이어진다.
	printf("HelloWorld!\n");

	// return 0는 프로그램이 잘 끝났다는 신호, 오류 종료는 return -1로 표현
    return 0;
}

