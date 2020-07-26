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

#define program int main(int  // �� �ּ� ���� ����

int reverse(char* s) {
	int i, j;
	char r[strlen(s)];
	for(i=0, j=strlen(s)-1; i<strlen(s); i++, j--) {
		r[i] = s[j];
	}
	r[strlen(s)] = '\0';
	strcpy(s, r);
}

// http://beedub.com/Sprite093/src/lib/c/stdlib/atoi.c �Լ� ���� �̸� toint�� ����

// https://android.googlesource.com/kernel/lk/+/qcom-dima-8x74-fixes/lib/libc/itoa.c �Լ� �����ͼ� �̸� tostr�� ����

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

C ( ----- ������� �������� �ڵ� ----- )


NOTE
(

    -- �� ���� ���ڿ� �Լ��� --
     * length of(str) �Ǵ� lengthof(str) -- ���ڿ��� ����
     * copystring(from str to str) -- ���ڿ� ����
     * mergestring(add a to b) -- ���ڿ� ��ġ��
     * comparestring(a with b) -- ���ڿ� ��
       * If comparestring(a with b) are same Then ... -- ���� �� ���ڿ��� ���ٸ�...
       * If comparestring(a with b) areNot same Then ... -- ���� �� ���ڿ��� ���� �ʴٸ�...
       * If comparestring(a with b) first is bigger Then ... -- ���� ù° ���ڿ��� �� ũ�ٸ�...
       * If comparestring(a with b) first is bigger than second Then ... -- ���� ù° ���ڿ��� �� ũ�ٸ�...
       * If comparestring(a with b) first is smaller Then ... -- ���� ù° ���ڿ��� �� �۴ٸ�...
       * If comparestring(a with b) first is smaller than second Then ... -- ���� ù° ���ڿ��� �� �۴ٸ�...
       * comparestring(a with b ignorecase) -- ��ҹ��� ���о��ϴ� ���ڿ� ��
       * comparestring(a with b caseinsensitive) -- ��ҹ��� ���о��ϴ� ���ڿ� ��


    -- �ּ� ���� --
     * "�ּ� ����"; (�� �ٸ� ����)
     * REM ( �ּ� ���� )
     * C ( �ּ� ���� )
     * NOTE ( �ּ� ���� )

)

C ( �ڵ� ������ �����Ѵ�. )

STARTING CODE

C   ( �ڵ��� ���κ��� ���� ���̴�. )
    STARTING HEADER

C       ( ���� �������� �� �� �ȿ��� �����Ѵ�. )
        interface initializer(setvar)

        iEnd

C       ( �Լ��� �����ƾ���� �����ϰ� �����. )
        interface subPrograms

            REM ( �� ���ڸ� ���ϴ� �Լ� )
            integer function addition(integer a, integer b) go
                return a+b;
            end

            REM ( �������� ����ϴ� �����ƾ )
            subroutine hr() go
                printf(" ------------------------------------ \n");
            end

            REM ( �� �Լ��� ���α׷� �� �Ʒ����� �ڵ带 �����Ѵ�. )
            integer function f(int x);
        iEnd

C       ( ����ü���� �����. )
        interface structures
            typedef struct {
                int x;
                int y;
            } coord;
        iEnd

C       ( Ŭ������ �����Ѵ�. ��Ʈ������ �ٸ���! )
        interface classes

        iEnd


    ENDING HEADER

C   ( �ڵ��� ���κκ��� ���� ���̴�. )
    STARTING BODY

C       ( ���α׷� ���� �ڵ�. )
        program cpptest do                                              SN(P0010000)

            If 3 equ 3 Then
                write 1;
            ElseIf 3 equ 4 Then
                write 2;
            Else
                write 3;
            EndIf

            putchar('\n');

C           ( ���ڱ����� ���� )
            set memory m as 1;

C           ( ���ڿ� ���� ���� )
            define character array tsrs[9999];

C           ( ���ڸ� ���ڿ��� ��ȯ�Ͽ� tsrs ������ �ִ´�. )
            toStr(5678, tsrs);

C           ( toInt �Լ��� ���ڷε� ���ڿ��� ������ ��ȯ�Ѵ�. )
            write toInt("1234") _ tsrs _ '\n';

            void(0);    note( �ƹ� �۾��� �� �ϴ� �Լ�. )

            define character variables
                s1[] as "abc",
                s2[] as "def";

C           ( �̳��� ���� ���� ���� )
            define
                ultrasuper variable lf1;
                ultra variable lli1;

C           ( �̳��� ������ �̳�ū ���� ���� )
            set lf1 as 212432124234123423421342.32432434234234;
            set lli1 as 3432422343422434234;

C           ( ����� �� ����. )
            write lf1 _ ' ' _ lli1 _ '\n';

C           ( length of �Լ��� ���ڿ��� ���̸� ���Ѵ�. )
C           ( �� ���� �ڵ带 ���� �ٷ� �ڸ� ��, ���� �ٿ��� �� ĭ �տ� 'N'�� ���ش�. )
            write "lengthof S1: " _ length of (s1) _ "\n" _             SN(P0010435)
          N        "lengthof S2: " _ length of (s2) _ "\n";

            define character variable
                s3[] as "";

C           ( �� ���ڿ��� �ٸ� ���ڿ������� �����Ѵ�. )
            copystring (from s2 to s3);

            write "S3 content: " _ s3 _ '\n';

C           ( �� ���ڿ� ������ ���ڿ��� �߰��Ѵ�. )
            mergestring (add s1 to s3);

            write "S3 content: " _ s3 _ '\n';

C           ( ============================,                          SN(xxx)�� �Ϸù�ȣ�̴�. )
C                                                         ( ������ ��Ʈ���� ����. �־ ��� �ȴ�.)
C           ( �迭 ������ �����. )
            define integer array ARR[6]                                 SN(P0010625)
          N     as {0, 1, 2, 3, 4, 5};

C           ( FOR-LOOP�� �̿��Ͽ� ����Ʈ�� ���Ƽ� ���� ��� )

C           ( �Ʒ��� �ִ� L(x)�� ���� ���̺��̴�. ���� ���̺��� �ٵ��� ���� �׷��̴�. �ִ� 5�ڸ��� �����Ѵ�. )
  L(10)     for loop integer i in ARR do
  L(10)         write i _ ' ';
  L(10)     next

            putchar('\n');

C           ( FOR-LOOP�� 1���� 10���� ���� ���ڸ� ����Ѵ�. )
  L(20)     for loop integer i as 1 until i leq 10 nxt i++ do
  L(20)         write i _ '\n';
  L(20)     next

C           ( �Լ����� ����غ���. )
            call hr();
            write addition(1,2) _ '\n';
            write f(3) _ ' ' _ f(64);

            write '\n';

            define character array inp[666];

C           ( WHILE-LOOP���� ���ڿ����� ����غ���. )
            write "cat�� �Է��Ҷ����� ���α׷��� ��ӵ˴ϴ�... \n";

  L(30)     while comparestring(inp with "cat" ignorecase) areNot same do
  L(30)         write(">>> ");
  L(30)         read inp;
  L(30)     next

            Try
                throw 0001000;
            Catch(e)
                write e;
            EndTry

            write "\n���α׷��� ����Ǿ����ϴ�... \n";
C           ( ���α׷��� ����ģ��. )
            stop
        end

    ENDING BODY

C   ( �ڵ��� ���κ�; �ּ� ���� �߰� )
    STARTING FOOTER

C       ( ������ ������ f(x) �Լ��� �ڵ带 �����Ѵ�. )
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

C( �ڵ尡 �������� �����Ѵ�. )
ENDING CODE