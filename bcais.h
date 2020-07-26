#undef _NO_OLDNAMES
#undef __STRICT_ANSI__
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <time.h>
using namespace std;
 
#define Vector(x) vector<x>
#define Deque(x) deque<x>
#define Stack(x) stack<x>
#define Queue(x) queue<x>
 
#define vbExclamation MB_ICONEXCLAMATION
#define vbInformation MB_ICONINFORMATION
#define vbCritical MB_ICONERROR
#define vbQuestion MB_ICONQUESTION
#define vbOkOnly MB_OK
#define vbOkCancel MB_OKCANCEL
#define vbYesNo MB_YESNO
#define vbYesNoCancel MB_YESNOCANCEL
#define vbAbortRetryIgnore MB_ABORTRETRYIGNORE
 
#ifndef codeup
#include <windows.h>
#define PAUSE system("pause");
#define cls system("CLS");
 
#define CPRNF printf
 
 
#define MsgBox(a,b,c) MessageBoxA(0,a,c,b | MB_APPLMODAL)
#define alert(a) MessageBoxA(0, a, "¾Ë¸²", MB_OK|MB_APPLMODAL|MB_ICONEXCLAMATION)
#define confirm(a) MessageBoxA(0, a, "Áú¹®", MB_OKCANCEL|MB_ICONQUESTION|MB_APPLMODAL)
#define JNSTR(A) A
 
#else
#define PAUSE
#define cls
#define MsgBox(a,b,c)
 
#define JNSTR(A) ""
 
#define CPRNF(...)
 
#endif // codeup
using namespace std;
 
int inpfnc() {
    int x;
    scanf("%d", &x);
    return x;
}
 
#ifndef codeup
int beep(int a, int b) {
    _beep(a,b);
    return 0;
}
 
#else
int beep(int a, int b) {
    return 0;
}
 
#endif
 
int reverse(char* s) {
    int i, j;
    char r[strlen(s)];
    for(i=0, j=strlen(s)-1; i<strlen(s); i++, j--) {
        r[i] = s[j];
    }
    r[strlen(s)] = '\0';
    strcpy(s, r);
}
 
// http://beedub.com/Sprite093/src/lib/c/stdlib/atoi.c
// itoa, atoi ¼Ò½º ºÙ¿©³Ö±â
 
#define input inpfnc()
 
#define C(...)
 
#ifndef codeup
#define log(x) printf("<<< " x "\n");beep(600,5);
#define inpind printf(">>> ");
 
#else
#define log(x)
#define inpind
 
#endif
 
#ifndef codeup
#define cprns(x) printf(x);
#define cprni(x) printf("%d",x);
#define cprnc(x) putchar(x);
 
#define cprintf printf
 
#else
#define cprns(x)
#define cprni(x)
#define cprnc(x)
 
int cprintf(const char* fmt, ...) {return 0;}
 
#endif // codeup
 
#define append push_back
 
#define ife(a,b,c) if(a){b}else{c}
#define ifei(a,b,c,d,e) if(a){b}else if(c){d}else{e}
#define as =
#define set
#define equ ==
#define neq !=
#define leq <=
#define geq >=
#define gtr >
#define lss <
#define forever while(1)
#define ifb(a,b) if(a){b}
#define forb(a,b,c,d) for(a;b;c){d}
#define dowhile(a,b) do{b}while(a)
#define elif else if
#define elseif else if
#define whileb(a,b) while(a){b}
#define in :
vector<int> range(int a, int b, int c = 1) {
    vector<int> retval;
    for(int i=a; i<b; i+=c) {
        retval.push_back(i);
    }
    return retval;
}

#define gets(x) fgets(x, 999999, stdin)
 
#define vbLf "\n"
#define vbCr "\r"
#define vbCrLf "\r\n"
#define vbNewLine "\n"
 
 
// ==================================================
// ==================================================
// ==================================================
 
#define chk(n) chk[n]
 
#define checked true
#define is ==
#define equ ==
#define neq !=
#define gtr >
#define lss <
#define geq >=
#define neq <=
#define mark
#define set
#define as =
#define same true
#define different false
 
#define If if(
#define Then ){
#define then Then
#define Else }else{
#define ElseIf }else if(
#define EndIf }
#define endif EndIf
 
#define For for(
#define To ;
#define to ;
#define Step ;
#define step ;
#define forever while(1)
#define do ){
#define next }
#define Next }
 
#define Chemical(n) Chemical[n]
#define meetings Chemical
 
#define IF If
#define ELSE Else
#define ELSEIF ElseIf
#define ENDIF EndIf
#define FOR For
#define TO To
#define NEXT Next
#define DO do
#define Begin {
#define While while(
#define WHILE While
#define Sub void
#define sub Sub
#define SUB Sub
#define function
#define FUNCTION
#define Function
#define BEGIN Begin
#define begin Begin
#define Dim
#define dim Dim
#define DIM dim
#define AS as
#define As as
int INPUT(const char* p, int &n) {
    printf("%s", p);
 
    scanf("%d", &n);
 
    return 0;
}
int INPUT(const char* p, double &n) {
    printf("%s", p);
 
    scanf("%lf", &n);
 
    return 0;
}
int INPUT(const char* p, char &n) {
    printf("%s", p);
 
    scanf("%c", &n);
 
    return 0;
}
int INPUT(const char* p, char* &n) {
    printf("%s", p);
 
    fgets(n, 9999, stdin);
 
    return 0;
}
int INPUT(const char* p, long long int &n) {
    printf("%s", p);
 
    scanf("%lld", &n);
 
    return 0;
}
 
#define Input input
#define end }
#define End end
#define END end
#define program(Name) main(){
#define endprogram }
#define ENDPROGRAM endprogram
#define EndProgram endprogram
#define C(...)
#define REM(...)
#define rem(...)
#define Rem(...)
#define Program program
#define PROGRAM Program
#define Return return
#define Do do
#define String
#define Set
#define Short short
#define Long long long
#define Memory
#define memory Memory
#define MEMORY Memory
#define DECLARE
#define Declare DECLARE
#define declare DECLARE
#define _ <<
#define $ `
#define Read(f, ...) cin>>
#define read Read
#define READ Read
#define PRINT cout<<
#define print PRINT
#define Print PRINT
#define WRITE(f, ...) PRINT
#define write WRITE
#define Write WRITE
#define CheckList bool
#define CHECKLIST CheckList
#define checklist CheckList
#define Mark
#define mark Mark
#define MARK Mark
#define BOOLEAN bool
#define ENDIF endif
#define THEN Then
#define GETINPUT Input
#define RETURN return
#define LEQ leq
#define GEQ geq
#define GTR gtr
#define LSS lss
#define NEQ neq
#define EQU equ
#define STEP(X) ;(X)){
#define SET Set
#define WEND }
#define IN :
#define EACH
#define SORT sort
#define CHECKED checked
#define UNCHECKED false
#define NOT  !
#define OR |
#define AND &
#define XOR ^
#define IS ==
#define BREAK break;
#define CONTINUE continue;
#define TYPEDEF typedef
#define STRUCT typedef struct
#define ENDSTRUCT }
#define TYPE(X) typedef struct X {
#define ENDTYPE }
#define VARIABLE
#define ARRAY
#define WITHTYPE
#define MEMBER
#define VARIABLES
#define FUNCTIONS
#define SUBROUTINE void
#define PASS ;
#define RECURSIVE
#define SKIP ;
#define DONOTHING ;
#define NONE
#define IMPLICIT
#define IFEL(A,B,C) A ? B : C
#define ULTRA long long
#define SUPER long long
#define STRUCTURE
#define STANDARD std::
#define EXIT exit(0);
#define STOP EXIT
#define UPDATE
#define VALUE
#define L(X)
#define RANDOMIZE srand(time(0));
#define TIMER
#define NLINE puts("");
#define E
#define LF "\n"
#define CR "\r"
#define CRLF "\r\n"
#define NEWLINE "\n"
#define SPACE " "
#define SPC " "
#define SP " "
#define STARTING
#define ENDING
#define CODE
#define HEADER
#define BODY
#define FOOTER
#define INTERFACE
#define IEND
#define INITIALIZER(NAME)
#define FUNCTIONS
#define SUBROUTINES
#define SUBROUTINE VOID
#define RECURSIVE
#define CLASSES
#define TYPES
#define ENDINTERFACE
#define WEND }
#define FNUM "%d"
#define FDEC "%d"
#define FHEX "%x"
#define FOCT "%o"
#define BEL "\a"
#define BELL "\a"
#define SOH ""
#define ESC ""
#define DC4 ""
#define STX ""
#define SYN ""
#define US  ""
#define PAS "€"
 
 
int NUMBER, RESULT;
 
#define Integer int
#define integer int
#define INTEGER int
 
#define Boolean bool
 
#define EndSub }
 
/*
// €€€
 */
 
///================================================================================================///
 
STARTING CODE
 
    STARTING HEADER
        #define COIN(x) COIN[x]
        #define ANSV(x) ANSV[x]
        #define CTYPS(X) CTYPS[X]
 
        INTERFACE VARIABLES
            INTEGER MEMORY COIN(505), ANSV(505), CTYPS(8) AS
                             {0, 500, 100, 50, 10, 5, 1};
        IEND
    ENDING HEADER
 
 
    STARTING BODY
 
        PROGRAM( µ¿ÀüÀÚÆÇ±â )
            IMPLICIT NONE
 
            INTEGER MEMORY N, ANSC AS 0,
                MONEY, CNT, TGC, I, J,
                CTYP AS 500;
 
            INPUT( JNSTR("°¡°Ý> "), N );
 
            INPUT( JNSTR("500¿ø> ") ,COIN(500) );
            INPUT( JNSTR("100¿ø> ") ,COIN(100) );
            INPUT( JNSTR("50¿ø> ") ,COIN(50) );
            INPUT( JNSTR("10¿ø> ") ,COIN(10) );
            INPUT( JNSTR("5¿ø> ") ,COIN(5) );
            INPUT( JNSTR("1¿ø> ") ,COIN(1) );
 
            SET MONEY AS 500*COIN(500) + 100*COIN(100) + 50*COIN(50) +
           E              10*COIN(10) + 5*COIN(5) + 1*COIN(1);
 
            SET CNT AS COIN(500) + COIN(100) + COIN(50) + COIN(10) +
           E            COIN(5) + COIN(1);
 
            SET TGC AS MONEY - N;
 
            SET ANSC AS 0;
 
            FOR J = 1 TO J LEQ 6 STEP ( J++ )
                UPDATE CTYP AS CTYPS(J);
                FOR I = COIN(CTYP) TO I GEQ 1 STEP( I-- )
                    IF TGC - (I * CTYP) < 0 THEN
                        CONTINUE
                    ENDIF
 
                    UPDATE TGC AS TGC - (I * CTYP);
                    UPDATE ANSV(CTYP) AS I;
 
                    BREAK
                NEXT I;
            NEXT J;
 
 
            SET ANSC AS 0;
 
            FOR I = 1 TO I LEQ 6 STEP ( I++ )
                UPDATE ANSC AS ANSC + (COIN(CTYPS(I)) - ANSV(CTYPS(I)));
            NEXT I;
 
            WRITE(*,*) ANSC _ LF;
 
            FOR I = 1 TO I LEQ 6 STEP ( I++ )
                WRITE(*,*) COIN(CTYPS(I)) - ANSV(CTYPS(I)) _ SP;
            NEXT I;
        END
 
    ENDING BODY
 
 
    STARTING FOOTER
 
    ENDING FOOTER
 
ENDING CODE
 
/*
 * <C++ ÄÚµåº¯È¯±â (MS-DOS ¸í·ÉÁÙ)>
 * "D:\Program Files\CodeBlocks\MinGW\bin\mingw32-g++.exe" -E "D:\Users\Dev\Documents\ÇÁ·Î±×·¥\µ¿Àü\main.cpp" > "D:\Users\Dev\desktop\ecode.txt"
 */