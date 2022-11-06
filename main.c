#include <stdio.h>

int main (void) {
    // 1. Переменные типа int, short, long, long long - целые числа
    int num = 16;
    printf("10 = %d, #o8 =  %o, #x16 = %x\n", num, num, num); //десятичное, восьмеричное, шестнадцатеричное числа

    int number = 2147483647; // 32-разрядное слово
    short shortnum = 32767; // 16-разрядное слово
    long longnum = 2147483647; // 32-разрядное слово
    long long longlongnum = 9223372036854775807; // 64-разрядное слово
    printf("%d, %hd, %ld, %lld", number, shortnum, longnum, longlongnum);
    return 0;
}
