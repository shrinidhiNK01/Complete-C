/*
===============================================================================
                COMPLETE FORMATTED INPUT/OUTPUT DOCUMENTATION IN C
===============================================================================

take multiple inputs and display multiple outputs using formate specifiers for all datatypes and 
print the multiple outputs in one line or multiple lines according to requirement

This single program demonstrates almost ALL important formatted input/output
functions in C with detailed explanations.

TOPICS COVERED
---------------
1. printf() = predefined function declared in headerfile stdio.h used to print formatted output to screen
2. scanf() = predefined function declared in headerfile stdio.h used to read formatted input from user
3. fprintf() = predefined function declared in headerfile stdio.h used to print formatted output to file
4. fscanf() = predefined function declared in headerfile stdio.h used to read formatted input from file
5. sprintf() = prints string into character array
6. sscanf() = string scanf = reads data from string/char array
7. snprintf()
8. fgets()
9. puts()
10. Format Specifiers
11. Width & Precision
12. Flags
13. Escape Sequences
14. Hexadecimal / Octal
15. Pointer Printing
16. scanf() return value
17. Character input issue
18. File Handling with formatted I/O

===============================================================================
*/

#include <stdio.h>

int main() {

    /*
    ===========================================================================
                                SECTION 1 : printf()
    ===========================================================================

    printf() is used to print formatted output to screen.

    SYNTAX:
        printf("format string", variables);

    COMMON FORMAT SPECIFIERS
    ---------------------------------------------------------------------------
    %d   -> integer
    %f   -> float
    %lf  -> double
    %c   -> character
    %s   -> string
    %x   -> hexadecimal
    %o   -> octal
    %p   -> address
    %%   -> print %
    ===========================================================================
    */

    printf("\n==================== SECTION 1 : printf() ====================\n");

    int age = 20;
    float pi = 3.14159265;
    double salary = 45000.56789;
    char grade = 'A';
    char name[] = "Shrinidhi";

    printf("Integer using %%d          : %d\n", age);
    printf("Float using %%f            : %f\n", pi);
    printf("Double using %%lf          : %lf\n", salary);
    printf("Character using %%c        : %c\n", grade);
    printf("String using %%s           : %s\n", name);



    /*
    ===========================================================================
                            SECTION 2 : Precision
    ===========================================================================

    %.nf
    n = number of digits after decimal

    ===========================================================================
    */

    printf("\n==================== SECTION 2 : Precision ====================\n");

    printf("Default float              : %f\n", pi);
    printf("2 digits after decimal     : %.2f\n", pi);
    printf("4 digits after decimal     : %.4f\n", pi);



    /*
    ===========================================================================
                            SECTION 3 : Width Specifier
    ===========================================================================

    %nd

    n = total width

    ===========================================================================
    */

    printf("\n==================== SECTION 3 : Width ====================\n");

    printf("Normal integer             : %d\n", 25);
    printf("Width 5                    : %5d\n", 25);
    printf("Left aligned               : %-5dEND\n", 25);



    /*
    ===========================================================================
                            SECTION 4 : Flags
    ===========================================================================

    FLAGS
    ---------------------------------------------------------------------------
    -   -> left align
    +   -> show sign
    0   -> leading zeros
    #   -> alternate form

    ===========================================================================
    */

    printf("\n==================== SECTION 4 : Flags ====================\n");

    printf("Leading zeros              : %05d\n", 25);
    printf("Show sign                  : %+d\n", 25);
    printf("Hex with prefix            : %#x\n", 255);
    printf("Octal with prefix          : %#o\n", 10);



    /*
    ===========================================================================
                            SECTION 5 : Escape Sequences
    ===========================================================================

    \n  -> new line
    \t  -> tab
    \\  -> backslash
    \"  -> double quote

    ===========================================================================
    */

    printf("\n==================== SECTION 5 : Escape Sequences ====================\n");

    printf("Line1\nLine2\n");
    printf("Column1\tColumn2\n");
    printf("Backslash : \\\n");
    printf("Double Quote : \"C Programming\"\n");



    /*
    ===========================================================================
                            SECTION 6 : Hexadecimal / Octal
    ===========================================================================
    */

    printf("\n==================== SECTION 6 : Hexadecimal / Octal ====================\n");

    int number = 255;

    printf("Decimal                   : %d\n", number);
    printf("Hexadecimal lowercase     : %x\n", number);
    printf("Hexadecimal uppercase     : %X\n", number);
    printf("Octal                     : %o\n", number);



    /*
    ===========================================================================
                            SECTION 7 : Pointer Address
    ===========================================================================
    */

    printf("\n==================== SECTION 7 : Pointer Address ====================\n");

    int x = 100;

    printf("Value of x                : %d\n", x);
    printf("Address of x              : %p\n", &x);



    /*
    ===========================================================================
                            SECTION 8 : scanf()
    ===========================================================================

    scanf() reads formatted input.

    SYNTAX:
        scanf("format", &variable);

    IMPORTANT:
        '&' is required because scanf() needs memory address.

    ===========================================================================
    */

    printf("\n==================== SECTION 8 : scanf() ====================\n");

    int userAge;
    float userHeight;
    char userGrade;

    printf("Enter age: ");
    scanf("%d", &userAge);

    printf("Enter height: ");
    scanf("%f", &userHeight);

    /*
    IMPORTANT:
    Space before %c removes newline issue.
    */

    printf("Enter grade: ");
    scanf(" %c", &userGrade);

    printf("\nEntered Details:\n");
    printf("Age                       : %d\n", userAge);
    printf("Height                    : %.2f\n", userHeight);
    printf("Grade                     : %c\n", userGrade);



    /*
    ===========================================================================
                        SECTION 9 : scanf() Return Value
    ===========================================================================

    scanf() returns number of successful inputs read.

    ===========================================================================
    */

    printf("\n==================== SECTION 9 : scanf() Return Value ====================\n");

    int num;
    int result;

    printf("Enter an integer: ");
    result = scanf("%d", &num);

    printf("scanf() returned          : %d\n", result);
    printf("Entered number            : %d\n", num);



    /*
    ===========================================================================
                            SECTION 10 : fgets()
    ===========================================================================

    fgets() is safer than gets()

    SYNTAX:
        fgets(string, size, stdin);

    ===========================================================================
    */

    printf("\n==================== SECTION 10 : fgets() ====================\n");

    char fullName[100];

    getchar();

    printf("Enter full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Full Name                 : %s", fullName);



    /*
    ===========================================================================
                            SECTION 11 : puts()
    ===========================================================================

    puts() prints string with automatic newline.

    ===========================================================================
    */

    printf("\n==================== SECTION 11 : puts() ====================\n");

    puts("This line is printed using puts().");



    /*
    ===========================================================================
                            SECTION 12 : sprintf()
    ===========================================================================

    sprintf() writes formatted data into string.

    SYNTAX:
        sprintf(str, "format", variables);

    ===========================================================================
    */

    printf("\n==================== SECTION 12 : sprintf() ====================\n");

    char buffer[100];
    int marks = 95;

    sprintf(buffer, "Student Marks = %d", marks);

    printf("Buffer content            : %s\n", buffer);



    /*
    ===========================================================================
                            SECTION 13 : snprintf()
    ===========================================================================

    Safe version of sprintf()

    Prevents buffer overflow.

    ===========================================================================
    */

    printf("\n==================== SECTION 13 : snprintf() ====================\n");

    char safeBuffer[10];

    snprintf(safeBuffer, sizeof(safeBuffer), "Hello");

    printf("snprintf output           : %s\n", safeBuffer);



    /*
    ===========================================================================
                            SECTION 14 : sscanf()
    ===========================================================================

    sscanf() reads formatted data from string.

    ===========================================================================
    */

    printf("\n==================== SECTION 14 : sscanf() ====================\n");

    char data[] = "101 99.5";
    int roll;
    float score;

    sscanf(data, "%d %f", &roll, &score);

    printf("Roll Number               : %d\n", roll);
    printf("Score                     : %.1f\n", score);



    /*
    ===========================================================================
                            SECTION 15 : fprintf()
    ===========================================================================

    fprintf() writes formatted output to file.

    ===========================================================================
    */

    printf("\n==================== SECTION 15 : fprintf() ====================\n");

    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File opening failed.\n");
        return 1;
    }

    fprintf(fp, "Name: Shrinidhi\n");
    fprintf(fp, "Age : 20\n");
    fprintf(fp, "Marks: 95\n");

    fclose(fp);

    printf("Data written to student.txt successfully.\n");



    /*
    ===========================================================================
                            SECTION 16 : fscanf()
    ===========================================================================

    fscanf() reads formatted data from file.

    ===========================================================================
    */

    printf("\n==================== SECTION 16 : fscanf() ====================\n");

    char fileWord1[50];
    char fileWord2[50];

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File opening failed.\n");
        return 1;
    }

    fscanf(fp, "%s %s", fileWord1, fileWord2);

    printf("Read from file            : %s %s\n", fileWord1, fileWord2);

    fclose(fp);



    /*
    ===========================================================================
                        SECTION 17 : Important Notes
    ===========================================================================

    IMPORTANT POINTS
    ---------------------------------------------------------------------------
    1. scanf("%s") stops at space
    2. fgets() reads full sentence
    3. gets() is unsafe
    4. snprintf() safer than sprintf()
    5. " %c" removes newline issue
    6. printf() returns number of characters printed
    7. scanf() returns successful input count

    ===========================================================================
    */

    printf("\n==================== SECTION 17 : Important Notes ====================\n");

    printf("1. scanf(\"%%s\") stops at spaces.\n");
    printf("2. fgets() reads complete sentence.\n");
    printf("3. gets() is unsafe and removed.\n");
    printf("4. snprintf() prevents overflow.\n");
    printf("5. Space before %%c fixes newline issue.\n");



    /*
    ===========================================================================
                                PROGRAM END
    ===========================================================================
    */

    printf("\n==================== PROGRAM COMPLETED ====================\n");

    return 0;
}