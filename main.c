#include <stdio.h>

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
    printf("%fб %e\n", el1, el1); // ошибка округления

    // 4. Булевый тип
    _Bool booleanTrue = 1;
    _Bool booleanFalse = 0;

    // sizeof - опреация, которая возвращает размер типа в байтах
    printf("Тип int имеет размер %u байт(а,ов).\n", sizeof(int)); 
    printf("Тип char имеет размер %u байт(а,ов).\n", sizeof(char));
    printf("Тип long имеет размер %u байт(а,ов).\n", sizeof(long));
    printf("Тип double имеет размер %u байт(а,ов).\n", sizeof(double));

    // 5. Управляющие последовательности
    float salary;
    printf("\aВведите предпочитаемую вами сумму месячного жалования:");
    printf(" $_______\b\b\b\b\b\b\b"); /* курсор перемещается влево */
    scanf("%f", &salary);
    printf("\n\t$%.2f в месяц соответствует $%.2f в год.", salary, salary * 12.0); /* табуляция */  
    printf("\rОго!\n"); /* курсор в начало строки, строка, курсор на новую строку */

    return 0;
   
}
