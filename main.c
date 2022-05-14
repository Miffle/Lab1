#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
extern void asm_func1(void);
extern void asm_func2(void);
extern void asm_func3(void);
extern void asm_func4(void);
signed int a1,b1,c1,num1,den1,res1;
unsigned int a2,b2,c2,num2,den2,res2;
signed char a3, b3, c3, num3,den3,res3;
unsigned char a4,b4,c4,num4,den4,res4;

void first();
void second();
void third();
void fourth();

int main() {
    printf("Input a, b, c for signed int\n");
    printf("a = ");
    scanf("%d", &a1);
    printf("b = ");
    scanf("%d", &b1);
    printf("c = ");
    scanf("%d", &c1);
    asm_func1();
    printf("Numinator=%d Denominator=%d result = %d\n", num1,den1,res1);
    first();

    printf("Input a, b, c for unsigned int\n");
    printf("a = ");
    scanf("%d", &a2);
    printf("b = ");
    scanf("%d", &b2);
    printf("c = ");
    scanf("%d", &c2);
    asm_func2();
    printf("Numinator=%d Denominator=%d result = %d\n", num2,den2,res2);
    second();

    printf("Input a, b, c for signed char\n");
    printf("a = ");
    scanf("%d", &a3);
    printf("b = ");
    scanf("%d", &b3);
    printf("c = ");
    scanf("%d", &c3);
    asm_func3();
    printf("Numinator=%d Denominator=%d result = %d\n", num3,den3,res3);
    third();

    printf("Input a, b, c for unsigned char\n");
    printf("a = ");
    scanf("%d", &a4);
    printf("b = ");
    scanf("%d", &b4);
    printf("c = ");
    scanf("%d", &c4);
    asm_func4();
    printf("Numinator=%d Denominator=%d result = %d\n", num4,den4,res4);
    fourth();
}
void first() {
    num1 = (a1 + b1 * c1 - 1);
    den1 = a1 / 3 + 1;
    res1 = num1 / den1;
    printf("Chislitel=%d Znamenatel=%d result=%d\n", num1, den1, res1);
}
void second(){
    num2 = (a2 + b2*c2 - 1);
    den2 = a2/3+1;
    res2 = num2/den2;
    printf("Chislitel=%d Znamenatel=%d result=%d\n", num2, den2, res2);
}
void third(){
    num1 = (a3 + b3*c3 - 1);
    den1 = a3/3+1;
    res1 = num3/den3;
    printf("Chislitel=%d Znamenatel=%d result=%d\n", num3, den3, res3);
}
void fourth(){
    num4 = (a4 + b4*c4 - 1);
    den4 = a4/3+1;
    res4 = num4/den4;
    printf("Chislitel=%d Znamenatel=%d result=%d\n", num4, den4, res4);
}