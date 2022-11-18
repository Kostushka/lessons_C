#include <stdio.h>
#include <string.h>
#include <limits.h> // целочисленные пределы
#include <float.h> // пределы для чисел с плавающей запятой
#define PHRISE "Hello my friend!"


int main (void) {
    // 1. Переменные типа int, short, long, long long - целые числа
    int num = 16;
    printf("10 = %d, #o8 =  %o, #x16 = %x\n", num, num, num); //десятичное, восьмеричное, шестнадцатеричное числа
    // тип long, когда предоставляет возможность работы с нужными числами, а тип int не способен этого сделать
    // если тип long > int, использоват тип int
    // если тип long == int, использовать тип !long для 32-разрядных чисел!, чтобы перенести на 16-разрядную машину 
    // тип !short в целях экономии памяти, когда нужна 16-разрядная величина!, а int - 32-разрядный тип данных
    int number = 2147483647; // 32-разрядное слово
    short shortnum = 32767; // 16-разрядное слово
    long longnum = 2147483647; // 32-разрядное слово
    long long longlongnum = 9223372036854775807; // 64-разрядное слово
    printf("%d, %hd, %ld, %lld\n", number, shortnum, longnum, longlongnum);

    // 2. Константы типа char для символов
    char grade = 'A';
    char gradeNumber = 65;
    // char errorGrade = 'AB'; нельзя, потому что это строка, а не символ
    char quotes = '\"'; 
    char beep = '\a'; //управляющая последовательность для непечатаемых символов
    printf("%c, %c, %c, %c\n", grade, gradeNumber, quotes, beep);

    // 3. Числа с плавающей запятой: float: 6 цифр после запятой, double: 10
    float el = 2.0e20 + 1.0;
    float el1 = el - 2.0e20;
    printf("%f, %e\n", el1, el1); // ошибка округления

    // 4. Булевый тип
    _Bool booleanTrue = 1;
    _Bool booleanFalse = 0;

    // sizeof - опреация, которая возвращает размер типа в байтах
    printf("Type int have size %u byte.\n", sizeof(int)); 
    printf("Type char have size %u byte.\n", sizeof(char));
    printf("Type long have size %u byte.\n", sizeof(long));
    printf("Type double have size %u byte.\n", sizeof(double));

    // 5. Управляющие последовательности
    float salary;
    printf("\aInput sum:");
    printf(" $_______\b\b\b\b\b\b\b"); /* курсор перемещается влево */
    scanf("%f", &salary);
    printf("\n\t$%.2f in mounth = $%.2f in year.", salary, salary * 12.0); /* табуляция */  
    printf("\rWow!\n"); /* курсор в начало строки, строка, курсор на новую строку */

    // дз
    char value;
    printf("Input number: ");
    scanf("%d", &value);
    printf("%c\n", value);

    int age;
    printf("Input age:");
    scanf("%d", &age);
    printf("%e\n", age * 3.156e7);

    // 6. Символьные строки

    char name[40] = "0123456789"; // символьная строка - массив из 40 последовательных байтов
    // scanf("%s", name);
    // int size = sizeof name;
    // printf("%s, %d, %s\n", name, size, PHRISE);
    // strlen() - количество символов в строке, sizeof - ячеек памяти (1 ячейка - 1 байт)
    printf("%d, %d, %d, %d\n", strlen(name), sizeof name, strlen(PHRISE), sizeof PHRISE); 


    char*str = "0123456789";
    // str += 5;
    printf("str: %s, %d, %d\n", str, strlen(str), sizeof str); // ???

    // 7. Символьные константы

    const float PI = 3.1415926; // вместо define
    // INT_MAX - max int в системе из limits.h, 
    // FLT_MANT_DIG - число разрядов в мантиссе из float.h
    // CHAR_BIT - число разрядов байта в системе
    // FLT_MIN - min float
    // FLT_DIG - точность значений типа float (кол-во знаков)
    printf("%1.2f, %d, %d, %d, %e, %d", PI, INT_MAX, FLT_MANT_DIG, CHAR_BIT, FLT_MIN, FLT_DIG); 

    return 0;
   
}
