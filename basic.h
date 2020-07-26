#include <stdio.h>
#undef __STRICT_ANSI__
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <iostream>
#include <ctype.h>
#include <strings.h>

using namespace std;


#define write cout<<
#define read cin>>
#define _ <<
#define $ >>

#define program int main(int  // 이 주석 삭제 금지

int reverse(char* s) {
	int i, j;
	char r[strlen(s)];
	for(i=0, j=strlen(s)-1; i<strlen(s); i++, j--) {
		r[i] = s[j];
	}
	r[strlen(s)] = '\0';
	strcpy(s, r);
}

// http://beedub.com/Sprite093/src/lib/c/stdlib/atoi.c 함수 쓰고 이름 toint로 변경

// https://android.googlesource.com/kernel/lk/+/qcom-dima-8x74-fixes/lib/libc/itoa.c 함수 가져와서 이름 tostr로 변경

#define CInt toint
#define itoa CInt
#define cint CInt
#define toInt CInt
#define atoi tostr
#define ichar toInt
#define toStr tostr

int value, result;

int input_func() {
    int a;
    scanf("%d", &a);
    return a;
}

int puti(int x, char* e = "\n") {
    printf("%d%s", x, e);
}

void* mem;


#define ifn(a,b,c) a ? b : c
#define IF ifn

#define EndIf }
#define If if(
#define Then ){
#define ElseIf }else if(
#define Else }else{
#define then ){
#define endif }
#define elseif ElseIf

#define integer int
#define ultra long long
#define longest ultra
#define super ultra
#define ultrasuper long double

#define character char

#define INT(x) (int)x
#define int(x) INT(x)
#define real(x) (float)x
#define dble(x) (double)x

FILE nul;

#define set
#define as =
#define equ ==
#define neq !=
#define input input_func()
#define FOR for(
#define for FOR
#define do ){
#define next }
#define WHILE while(
#define while WHILE
#define gtr >
#define lss <
#define geq >=
#define leq <=
#define OR |
#define AND &
#define NOT !
#define until ;
#define nxt ;
#define end }
#define function
#define go {
#define forin foreach
#define foreach for_each
#define init
#define interface
#define iend
#define initial(name)
#define initialize(x)
#define initializer(x)
#define variable
#define define
#define con stdout
#define conin stdin
#define con_in conin
#define conout stdout
#define con_out conout
#define STARTING
#define ENDING
#define CODE
#define REM(...)
#define rem(...)
#define HEADER
#define FOOTER
#define HEAD
#define FOOT
#define BUILD
#define in :
#define IN
#define BUILTIN
#define BUILT
#define array
#define addr(x) &x
#define address(x) &x
#define content(x) *x
#define data(x) *x
#define BODY
#define body
#define stop exit(0);
#define declare
#define loop
#define BELOW
#define LINE
#define AS
#define COMMENT
#define LOADING
#define of strlen
#define length
#define lengthof of
#define to ,
#define from
#define add
#define note(...)
#define NOTE(...)
#define precision
#define doubleprecision double
#define real float
#define subroutine void
#define recursive
#define call
#define global
#define void(...)
#include <assert.h>
#define variables
#define C(...)
#define N
#define iEnd
#define structures
#define module(x) class x{
#define classes
#define functions
#define modules
#define subprograms
#define subPrograms
#define L(label_number)
#define SN(line_number)
#define endtry }
#define TRY try{
#define Try TRY
#define CATCH(x) }catch(int x){
#define Catch CATCHc
#define EndTry }
#define print write

integer function comparestring(const char* a, const char* b, bool ig = false) {
    If ig equ false then
        return strcmp((const char*)a, (const char*)b);
    Else
        Try
            return strcasecmp((const char*)a, (const char*)b);
        Catch(e)
            return stricmp((const char*)a, (const char*)b);
        EndTry
    EndIf
}
#define with ,
#define are ==
#define same 0
#define first
#define is ==
#define bigger 1
#define smaller -1
#define isnot !=
#define isNot !=
#define arenot !=
#define areNot !=
// comparestring(a with b) are same
// comparestring(a with b) first is bigger
#define than
#define second
#define caseinsensitive ,true
#define ignorecase ,true

#define memory integer
#define memories integer

integer function mergestring(const char* a, char* b) {
    strcat(b,a);
    return 0;
}
integer function copystring(const char* a, char* b) {
    strcpy(b,a);
    return 0;
}
#define Print print
#define Read read

C ( ------------------------------------------- )

C ( ----- 여기부터 본격적인 코드 ----- )


NOTE
(

    -- 몇 가지 문자열 함수들 --
     * length of(str) 또는 lengthof(str) -- 문자열의 길이
     * copystring(from str to str) -- 문자열 복사
     * mergestring(add a to b) -- 문자열 합치기
     * comparestring(a with b) -- 문자열 비교
       * If comparestring(a with b) are same Then ... -- 만약 두 문자열이 같다면...
       * If comparestring(a with b) areNot same Then ... -- 만약 두 문자열이 같지 않다면...
       * If comparestring(a with b) first is bigger Then ... -- 만약 첫째 문자열이 더 크다면...
       * If comparestring(a with b) first is bigger than second Then ... -- 만약 첫째 문자열이 더 크다면...
       * If comparestring(a with b) first is smaller Then ... -- 만약 첫째 문자열이 더 작다면...
       * If comparestring(a with b) first is smaller than second Then ... -- 만약 첫째 문자열이 더 작다면...
       * comparestring(a with b ignorecase) -- 대소문자 구분안하는 문자열 비교
       * comparestring(a with b caseinsensitive) -- 대소문자 구분안하는 문자열 비교


    -- 주석 사용법 --
     * "주석 내용"; (한 줄만 가능)
     * REM ( 주석 내용 )
     * C ( 주석 내용 )
     * NOTE ( 주석 내용 )

)

C ( 코드 시작을 선언한다. )

STARTING CODE

C   ( 코드의 윗부분을 쓰는 곳이다. )
    STARTING HEADER

C       ( 전역 변수들을 이 블럭 안에서 선언한다. )
        interface initializer(setvar)

        iEnd

C       ( 함수와 서브루틴들을 정의하고 만든다. )
        interface subPrograms

            REM ( 두 숫자를 더하는 함수 )
            integer function addition(integer a, integer b) go
                return a+b;
            end

            REM ( 수평줄을 출력하는 서브루틴 )
            subroutine hr() go
                printf(" ------------------------------------ \n");
            end

            REM ( 이 함수는 프로그램 블럭 아래에서 코드를 정의한다. )
            integer function f(int x);
        iEnd

C       ( 구조체들을 만든다. )
        interface structures
            typedef struct {
                int x;
                int y;
            } coord;
        iEnd

C       ( 클래스를 정의한다. 포트란과는 다르다! )
        interface classes

        iEnd


    ENDING HEADER

C   ( 코드의 메인부분을 쓰는 곳이다. )
    STARTING BODY

C       ( 프로그램 메인 코드. )
        program cpptest do                                              SN(P0010000)

            If 3 equ 3 Then
                write 1;
            ElseIf 3 equ 4 Then
                write 2;
            Else
                write 3;
            EndIf

            putchar('\n');

C           ( 숫자기억공간 선언 )
            set memory m as 1;

C           ( 문자열 변수 선언 )
            define character array tsrs[9999];

C           ( 숫자를 문자열로 변환하여 tsrs 변수에 넣는다. )
            toStr(5678, tsrs);

C           ( toInt 함수로 숫자로된 문자열을 정수로 변환한다. )
            write toInt("1234") _ tsrs _ '\n';

            void(0);    note( 아무 작업도 안 하는 함수. )

            define character variables
                s1[] as "abc",
                s2[] as "def";

C           ( 겁나긴 숫자 변수 선언 )
            define
                ultrasuper variable lf1;
                ultra variable lli1;

C           ( 겁나긴 변수에 겁나큰 숫자 대입 )
            set lf1 as 212432124234123423421342.32432434234234;
            set lli1 as 3432422343422434234;

C           ( 출력을 해 본다. )
            write lf1 _ ' ' _ lli1 _ '\n';

C           ( length of 함수로 문자열의 길이를 구한다. )
C           ( 한 줄의 코드를 여러 줄로 자를 때, 다음 줄에서 두 칸 앞에 'N'을 써준다. )
            write "lengthof S1: " _ length of (s1) _ "\n" _             SN(P0010435)
          N        "lengthof S2: " _ length of (s2) _ "\n";

            define character variable
                s3[] as "";

C           ( 한 문자열을 다른 문자열변수로 복사한다. )
            copystring (from s2 to s3);

            write "S3 content: " _ s3 _ '\n';

C           ( 한 문자열 변수에 문자열을 추가한다. )
            mergestring (add s1 to s3);

            write "S3 content: " _ s3 _ '\n';

C           ( ============================,                          SN(xxx)은 일련번호이다. )
C                                                         ( 사용법은 포트란과 같다. 있어도 없어도 된다.)
C           ( 배열 변수를 만든다. )
            define integer array ARR[6]                                 SN(P0010625)
          N     as {0, 1, 2, 3, 4, 5};

C           ( FOR-LOOP를 이용하여 리스트를 돌아서 값을 출력 )

C           ( 아래에 있는 L(x)은 줄의 레이블이다. 같은 레이블의 줄들은 같은 그룹이다. 최대 5자리로 설정한다. )
  L(10)     for loop integer i in ARR do
  L(10)         write i _ ' ';
  L(10)     next

            putchar('\n');

C           ( FOR-LOOP로 1부터 10까지 돌아 숫자를 출력한다. )
  L(20)     for loop integer i as 1 until i leq 10 nxt i++ do
  L(20)         write i _ '\n';
  L(20)     next

C           ( 함수들을 사용해본다. )
            call hr();
            write addition(1,2) _ '\n';
            write f(3) _ ' ' _ f(64);

            write '\n';

            define character array inp[666];

C           ( WHILE-LOOP문과 문자열비교을 사용해본다. )
            write "cat을 입력할때까지 프로그램은 계속됩니다... \n";

  L(30)     while comparestring(inp with "cat" ignorecase) areNot same do
  L(30)         write(">>> ");
  L(30)         read inp;
  L(30)     next

            Try
                throw 0001000;
            Catch(e)
                write e;
            EndTry

            write "\n프로그램이 종료되었습니다... \n";
C           ( 프로그램을 끝마친다. )
            stop
        end

    ENDING BODY

C   ( 코드의 끝부분; 주석 등을 추가 )
    STARTING FOOTER

C       ( 위에서 정의한 f(x) 함수의 코드를 정의한다. )
        interface functions
            integer function f(int x) go
                If x%2 equ 0 Then
                    return x/2;
                Else
                    return 3*x+1;
                EndIf
            end
        iEnd

    ENDING FOOTER

C( 코드가 끝났음을 선언한다. )
ENDING CODE