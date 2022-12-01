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
    int number = 2147483647; // 32-разрядное слово / max: 2^31 (один бит под знак)
    short shortnum = 32767; // 16-разрядное слово
    long longnum = 2147483647; // 32-разрядное слово
    long long longlongnum = 9223372036854775807; // 64-разрядное слово
    printf("%d, %hd, %ld, %lld\n", number, shortnum, longnum, longlongnum);

    unsigned int t = 4294967295; // max: 2^32
    printf("t: %u\n", t);
    unsigned int i;
    i = 0;
    i--;
    printf("i: %u\n", i);

    // 2. Константы типа char для символов
    char grade = 'A';
    char gradeNumber = 65;
    // char errorGrade = 'AB'; нельзя, потому что это строка, а не символ
    char quotes = '\"'; 
    char beep = '\a'; //управляющая последовательность для непечатаемых символов
    printf("%c, %c, %c, %c\n", grade, gradeNumber, quotes, beep);

    // 3. Числа с плавающей запятой: float: 6 цифр после запятой, double: 10
    float a; //10^38 знаков после запятой
    double b; //10^308 знаков после запятой
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


    char*str4 = "0123456789";
    printf("str: %s, %d, %d\n", str4, strlen(str4), sizeof str4); // размерность указателя 4 байт (ОС)

    char string[10] = "0123456789";
    string[4] = '\0'; // 8 нулевых бит
    printf("str: %s\n", string);

    char str[11] = "0123456789\0";
    str[4] = '\0'; // вместо 4ого символа нулевой байт
    printf("str: %s\n", str); 
    printf("str: %s\n", str+5); // возьми значение указателя str, прибавь к нему смещение равное размерности типа данных, на который он указывает, умноженное на 5 и прочитай, что там есть

    // 7. Символьные константы

    const float PI = 3.1415926; // вместо define
    // INT_MAX - max int в системе из limits.h, 
    // FLT_MANT_DIG - число разрядов в мантиссе из float.h
    // CHAR_BIT - число разрядов байта в системе
    // FLT_MIN - min float
    // FLT_DIG - точность значений типа float (кол-во знаков)
    printf("%1.2f, %d, %d, %d, %e, %d", PI, INT_MAX, FLT_MANT_DIG, CHAR_BIT, FLT_MIN, FLT_DIG); 

    // 8. Модификатор *
    int width;
    int q = 25;
    printf("\nEnter width:");
    scanf("%d", &width);
    printf("\nWidth with number: %*d\n", width, q);

    // 9. while
    const float ASJUST = 7.64;
    const float SCALE = 0.325;
    float shoe, foot;
    shoe = 3.0;
    while (shoe < 18.5) {
        printf("shoe          foot\n");
        foot = SCALE * shoe + ASJUST;
        printf("%.2f %12.2f\n", shoe, foot);
        shoe += 1.0;
    }

    // 10. exponential growth
    // variables declaration 
    int count;
    float current, total;
    // initialising variables
    count = current = total = 1;
    while (count < 150) {
        count = count + 1; 
        // exponential growth
        current = current * 2; // 1 => 2 => 4 => 8 => 16 => ...
        total = total + current;
        printf("Ex growth\n count: %d,\n current: %e,\n total: %e\n", count, current, total);
    }

    // 11. sizeof size_t
    int n = 0;
    size_t intsize = sizeof (int);
    printf("sizeof n: %u,\nsizeof(n): %u \n", sizeof n, intsize);
   
    // 12. convert seconds into minutes
    int sec, min, left;
    printf("Input seconds > 0, please\n");
    scanf("%d", &sec);
    while (sec > 10) {
        min = sec / 60; // усечение
        left = sec % 60;
        printf("%d sec = %d min %d sec\n", sec, min, left);
        printf("Input seconds > 0, please\n");
        scanf("%d", &sec);
    }



    // небольшой ликбез

    char str0[5] = "0123"; 
    // 1) выбирает 5 свободных ячеек и записывает "0123\0", 
    // 2) создает указатель из 4 ячеек и записывает туда адрес на первую ячейку, то есть на "0"
    char str1[5];
    // 1) выбирает 5 свободных ячеек,
    char str2[5] = "5678";
    // 1) выбирает 5 свободных ячеек и записывает "5678\0", 
    // 2) создает указатель из 4 ячеек и записывает туда адрес на первую ячейку, то есть на "5"
    printf("Enter string: ");
    scanf("%s", str1);
    // 1) записывает "...\0", 
    // 2) создает указатель из 4 ячеек и записывает туда адрес на первую ячейку, то есть на "..."
    // если записывает больше 5 символов, то занимает ячейку другой какой-то переменной, заменяя ее содержимое лишними символами
    // выход: когда читаешь данные, видишь, что выделенный буфер подходит к концу, и запрашиваешь у ОС ещё кусок памяти предполагаемо нужного размера, и продолжаешь писать туда, либо переносишь туда данные из существующего буфера и продолжаешь писать далее и т.д. 
    printf("str0: |%s|\n", str0);
    printf("str1: |%s|\n", str1);
    printf("str2: |%s|\n", str2);
    // 1 ячейка - 1 байт
    // 32-разрядный процессор оперирует 4 ячейками одновременно

    // любая переменная, хранящая данные, может указывать на какой-то адрес ячейки, в которой тоже хранятся какие-то данные
    // Так вот, что происходит, когда ты пишешь:
    // char str[5] = "1234";
    // Компилятор просто напросто создаёт код, который в ходе выполнения:
    // 1. Выбирает в памяти 5 свободных ячеек, в которые он записывает "1234\0"
    // 2. Выбирает в памяти N свободных ячеек, где N зависит от разрядности процессора, т.е. если 32 бита, то 4 ячейки надо, если 64 то 8, и считает, что это у него будет указатель.
    // 3. Сохраняет в этот указатель адрес первой ячейки, с которой начинается строка записанная на шаге 1.

    // char str1[5] = ""; - выбирает 5 свободных ячеек и записывает "\0", создает указатель из, допустим, 4 ячеек и записывает туда адрес на первую ячейку, то есть на "\0"
    // char*str = str1; - создает указатель из 4 ячеек и записывает туда адрес первой ячейки переменной str1, то есть "\0"
    //  str1 = str; нелегально! потому что str1 для компилятора это "обычный указатель, но я ещё помню, что с ним обязательно связано гарантированно выделенные 5 байт" 
    //  А str - это "просто указатель, с которым неизвестно что связано и связано ли вообще". 
    // Потому ты можешь присвоить в str значение str1, т.к. оно гарантированно связано с набором в 5 байт, а str требует, чтобы ему присваивали указатель, на какой-то (какой угодно, включая пустой) набор байт. 
    // А вот в str1 ты не можешь присвоить str, потому что вовсе не факт, что он указывает хоть на что-то выделенное (а не на нулевой адрес, например), и тем более, что это именно 5 байт. 

    return 0;
   
}
