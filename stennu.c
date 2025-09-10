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

#include <stdio.h>
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
}



