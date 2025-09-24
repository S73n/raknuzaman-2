// Online C compiler to run C program online
/*#include <stdio.h> (header file)

int main() {
    // Write C code here
    printf("Try programiz.pro");

    return 0;
    }*/

/*#include<stdio.h>

int main()
{
    float my_number = 898765.13;
    printf("my number %.2f", my_number);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    double my_number = 89.15673;
    printf("my number %lf", my_number);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    char my_character = 'a';
    printf("my character %c", my_character);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    char my_town[] = "Saku";
    printf("My town is %s", my_town);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    char my_name[] = "Sten";
    char my_town[] = "Saku";
    int my_age = 17;
    long long my_idnumber = 50709197064;
    printf("My name is %s\n", my_name);
    printf("My town is %s\n", my_town);
    printf("My age is %d\n", my_age);
    printf("My id number is %lld\n", my_idnumber);
    return 0;
}*/

// user input

/*#include <stdio.h>

int main() {
    char my_town[100];
    char my_character;
    char my_name[100];
    int my_age;
    float grocery_price;

    printf("Enter your town: ");
    scanf("%s", my_town);

    printf("Enter a character: ");
    scanf(" %c", &my_character);

    printf("Enter your name: ");
    scanf("%s", my_name);

    printf("Enter your age: ");
    scanf("%d", &my_age);

    printf("Enter grocery price: ");
    scanf("%f", &grocery_price);

    printf("----------");
    printf("\nYour town is: %s\n", my_town);
    printf("Your character is: %c\n", my_character);
    printf("Your name is: %s\n", my_name);
    printf("Your age is: %d\n", my_age);
    printf("Grocery price is: %.2f\n", grocery_price);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    char my_name[100];
    int my_age;
    char my_address[100];
    char my_sentence[100];

    printf("Enter your full name: ");
    fgets(my_name, sizeof(my_name), stdin);

    printf("Enter your age: ");
    scanf("%d", &my_age);
    getchar();

    printf("Enter your address: ");
    fgets(my_address, sizeof(my_address), stdin);

    printf("Enter your favorite sentence: ");
    fgets(my_sentence, sizeof(my_sentence), stdin);

    printf("------\n");
    printf("Your full name is: %s", my_name);
    printf("Your age is: %d\n", my_age);
    printf("Your address is: %s", my_address);
    printf("Your favorite sentence is: %s", my_sentence);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("size of integer: %d bytes\n", sizeof(i));
    printf("size of float: %d bytes\n", sizeof(f));
    printf("size of double: %d bytes\n", sizeof(d));
    printf("size of character: %d bytes", sizeof(c));
}*/

/*#include <stdio.h>

int main()
{
    int number;
    printf("enter your ascii value: ");
    scanf("%d", & number);

    printf("Corresponding ascii character: %c", number);
}*/

/*#include <stdio.h>

int main()
{
    int number;
    printf("enter your ascii value: ");
    scanf("%c", & number);

    printf("Corresponding ascii values: %d", number);
}*/

/*#include <stdio.h>

int main()
{
    char c;
    printf("enter your lowercase character: ");
    scanf("%c", & c);

    printf("Corresponding uppercase characters: %c", c-32);
}*/

/*#include <stdio.h>

int main()
{
    char c;
    printf("enter your uppercase character: ");
    scanf("%c", & c);

    printf("Corresponding lowercase characters: %c", c+32);
}*/

/*#include <stdio.h>

int main()
{
    float h, w, area;

    printf("Enter height and width of a triangle: ");
    scanf("%f %f", &h, &w);

    area = 0.5 * h * w;

    printf("Area of the triangle is: %.2f\n", area);

    return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float calc;
    float calc2;

    printf("Enter the three values: ");
    scanf("%f %f %f", &a, &b, &c);

    float D = (b*b-4*a*c);

    if (D < 0) {
        printf("D on väiksem, kui 0, kalkulatsiooni ei saa teha");
    }

    calc = ((-b+sqrt(D))/2*a);
    calc2 = ((-b-sqrt(D))/2*a);

    printf("x1 = %f\n", calc);
    printf("x2 = %f\n", calc2);

    return 1;
}*/


/*#include<stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num %2 == 0) {
        printf("Even number: ");
    } else {
        printf("Odd number: ");
    }
})*/

/*#include<stdio.h>

int main() {
    int year;
    printf("Enter your Year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year", year);
    } else {
        printf("%d is not a leap year", year);
    }
}*/


/*#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter your three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d is largest",a);
    } else if (b > a && b > c) {
        printf("%d is largest",b);
    } else {
        printf("%d is largest",c);
    }
}*/

/*#include<stdio.h>

int main() {
    float income, tax;
    printf("Enter your income: ");
    scanf("%f", &income);

    if(income < 10000) {
        tax = 0;
        printf("Your income tax %f",tax);
    } else if (income < 20000) {
        tax = (income - 10000) * 0.15;
        printf("Your income tax %f",tax);
    } else if (income < 30000) {
        tax = (20000 - 10000) * 0.15 + (income - 20000) * 0.25;
        printf("Your income tax %f",tax);
    } else {
        tax = (20000 - 10000) * 0.15 + (30000 - 20000) * 0.25 + (income-30000) * 0.3;
        printf("Your income tax %f",tax);
    }
}*/

/*#include<stdio.h>

int main() {
    float kwh, bill;
    printf("Enter your kwh: ");
    scanf("%f", &kwh);

    if (kwh < 100) {
        bill = kwh * 0.5;
        printf("Your bill %f",bill);

    } else if (kwh < 200) {
        bill = 100 * 0.5 + (kwh - 100) * 0.6;
        printf("our bill %f",bill);

    } else if (kwh < 300) {
        bill = 100 * 0.5 + (200 - 100) * 0.6 + (kwh - 300) * 0.7;
        printf("Your bill %f",bill);

    } else {
        bill = 100 * 0.5 + (200 - 100) * 0.6 + (400 - 300) * 0.7 + (kwh - 300) * 0.8;
        printf("Your bill %f",bill);
    }
}*/

/*#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c, x1, x2, d;

    printf("Enter a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (d==0) {
        x1 = -b / (2 * a);
        x2 = -b / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        printf("No roots.");
    }
}*/

/*#include <stdio.h>

int main() {
    double ek, ik, math, average;

    printf("Sisesta eesti keele tulemus: ");
    scanf("%lf", &ek);

    printf("Sisesta inglise keele tulemus: ");
    scanf("%lf", &ik);

    printf("Sisesta matemaatika tulemus: ");
    scanf("%lf", &math);

    average = (ek + ik + math) / 3;

    if (average >= 90) {
        printf("Keskmine hinne: A");
    } else if (average >= 80) {
        printf("Keskmine hinne: B");
    } else if (average >= 70) {
        printf("Keskmine hinne; C");
    } else {
        printf("Keskmine hinne: F");
    }
}*/

/*#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (m): ");
    scanf("%f", &height);

    bmi = weight/(height*height);

    if (bmi < 18.5) {
        printf("Underweight");
    } else if (bmi > 18.5 && bmi < 25) {
        printf("Normal weight");
    } else if (bmi > 25 && bmi < 30) {
        printf("Overweight");
    } else {
        printf("Obese");
    }
}*/

/*#include <stdio.h>

int main() {
    float withdraw, deposit, balance = 1000.0;
    int pin = 123456, entered_pin, choice;

    printf("Enter your pin (6 char): ");
    scanf("%d", &entered_pin);

    if (pin == entered_pin) {
        printf("Select operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);

            if (withdraw > 0 && withdraw <= balance) {
                balance -= withdraw;
                printf("You withdrew %.2f euros. New balance: %.2f euros\n", withdraw, balance);
            } else {
                printf("Insufficient balance or invalid amount.\n");
            }
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);

            if (deposit > 0) {
                balance += deposit;
                printf("You deposited %.2f euros. New balance: %.2f euros\n", deposit, balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
        } else {
            printf("Invalid choice.\n");
        }

    } else {
        printf("Incorrect pin\n");
    }
}*/


/*#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("Võrdkülgne kolmnurk\n");
        } else if (a == b || b == c || a == c) {
            printf("Võrdhaarne kolmnurk\n");
        } else {
            printf("Erikülgne kolmnurk\n");
        }
    } else {
        printf("Ei saa kolmnurka teha\n");
    }
}*/

/*#include <stdio.h>
int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
            result = num1 + num2;
            printf("%lf", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%lf", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%lf", result);
    } else if (operator == '/') {
        if (num2 != 0) {
                result = num1 / num2;
                printf("%lf", result);
        } else {
            printf("Can't divide by zero");
        }
    } else {
        printf("Wrong input");
    }
}*/

/*#include <stdio.h>
int main() {
    int choice;

    printf("Enter choice (1: Triangle, 2: Rectangle, 3: Ring, 4: Trapezium): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float b, h, s1, s2, s3;
        printf("Enter base and height: ");
        scanf("%f %f", &b, &h);
        printf("Area: %f\n", 0.5 * b * h);
        printf("Enter three sides: ");
        scanf("%f %f %f", &s1, &s2, &s3);
        printf("Perimeter: %f\n", s1 + s2 + s3);

    } else if (choice == 2) {
        float l, w;
        printf("Enter length and width: ");
        scanf("%f %f", &l, &w);
        printf("Area: %f\n", l * w);
        printf("Perimeter: %f\n", 2 * (l + w));

    } else if (choice == 3) {
        float R, r;
        printf("Enter outer and inner radius: ");
        scanf("%f %f", &R, &r);
        printf("Area: %f\n", 3.14159 * (R*R - r*r));
        printf("Perimeter: %f\n", 2 * 3.14159 * (R + r));

    } else if (choice == 4) {
        float b1, b2, h, s1, s2;
        printf("Enter two bases and height: ");
        scanf("%f %f %f", &b1, &b2, &h);
        printf("Area: %f\n", 0.5 * (b1 + b2) * h);
        printf("Enter two sides: ");
        scanf("%f %f", &s1, &s2);
        printf("Perimeter: %f\n", b1 + b2 + s1 + s2);

    } else {
        printf("Invalid choice\n");
    }

    return 0;
}*/

