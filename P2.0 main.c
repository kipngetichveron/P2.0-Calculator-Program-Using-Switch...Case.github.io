//Necessary Header Files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Function To Calculate the Sine of an Angle
void si()
{
double adegrees;
double aradians;
double svalue;

printf("Enter the value of the angle in degrees:");
scanf("%lf", &adegrees);
aradians = adegrees * (M_PI/180.00);
svalue = sin(aradians);
printf("%.4f\n", svalue);
}


//Function To Calculate the Cosine of an Angle
void co()
{
double adegrees;
double aradians;
double cvalue;

printf("Enter the value of the angle in degrees:");
scanf("%lf", &adegrees);
aradians = adegrees * (M_PI/180.00);
cvalue = cos(aradians);
printf("%.4f\n", cvalue);
}


//Function To Calculate the Tan of an Angle
void ta()
{
double adegrees;
double aradians;
double tvalue;

printf("Enter the value of the angle in degrees:");
scanf("%lf", &adegrees);
aradians = adegrees * (M_PI/180.00);
tvalue = tan(aradians);
printf("%.4f\n", tvalue);
}



//Function to Perform Addition Operation
void add()
{
double a, b;
printf("Enter first operand: ");
scanf("%lf", &a);
printf("Enter second operand: ");
scanf("%lf", &b);
printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
}


//Function to Perform Subtraction Operation
void subtract()
{
double a, b;
printf("Enter first operand: ");
scanf("%lf", &a);
printf("Enter second operand: ");
scanf("%lf", &b);
printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
}


//Function to Perform Multiplication Operation
void multiply()
{
double a, b;
printf("Enter first operand: ");
scanf("%lf", &a);
printf("Enter second operand: ");
scanf("%lf", &b);
printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
}


//Function to Perform Division Operation
void divide()
{
double a, b;
printf("Enter first operand: ");
scanf("%lf", &a);
printf("Enter second operand: ");
scanf("%lf", &b);
printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
}


//Function to Exit
void exitor()
{
exit(0);
}

//Driver Code
void main()
{
while(1)
{
char operator[15];
char addition[15] = "+";
char subtraction[15] = "-";
char multiplication[15] = "*";
char division[15] = "/";
char sine[15] = "sin";
char cosine[15] = "cos";
char tangent[15] = "tan";
char EXIT [5] = "x";

printf("Enter an operator or press x to exit:");
scanf("%s", &operator);
if (strcmp(operator, addition) == 0)
{
add();
}
else if (strcmp(operator, subtraction) == 0)
{
subtract();
}
else if (strcmp(operator, multiplication) == 0)
{
multiply();
}
else if (strcmp(operator, division) == 0)
{
divide();
}
else if (strcmp(operator, sine) == 0)
{
si();
}
else if (strcmp(operator, cosine) == 0)
{
co();
}
else if (strcmp(operator, tangent) == 0)
{
ta();
}
else if (strcmp(operator, EXIT) == 0)
{
exitor();
}
else
{
printf("Error!\n");
}
printf("\n");
}
}