#include <stdio.h>
  
//WEEK1

int main() {
    printf("Merhaba, Dünya!");
    return 0 ;  //tamamlandığını belirtiyomuss



//WEEK
/*
int main() {
    int number1 = 10;
    int number2 = 2;

    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("summation :%d, and modulo: %d\n",sum,modulo);
    printf("adress int:%d \n",&sum);
    printf("adress hex: %x \n",&sum);


    int number1 , number2;
    printf("please give me number1:");
    scanf("%d", &number1);
    printf("please give me number2:");
    scanf("%d",&number2);


    int sum = number1 + number2;
    int mod = number1 % number2;

    printf("sumation: %d, and modulo:%d\n",sum,mod);


    int a = 5;
    printf("a:%d\n",a);
    int b= a++;
    printf("b: %d\n", b);
    int c = ++a;
    printf("c: %d\n", c);*/


    int age;
    printf("please give me the age:");
    scanf("%d", &age);
    if (age>=18){
        printf("you are an adult.\n");
    }
    else if (age<16){
        printf("you cannot get moto dl.\n ");
    }
    else{
        printf("you are a minor.\n");
    }
    return 0;
}