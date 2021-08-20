# include <stdio.h>

  int main(){
    char operator;
    int i;
    double x, y;
    double exp;
    double fact;

    printf("Welcome to the Calculator!\n");

    while (operator != '0') {

      printf("Enter the number of the desired operation or 0 to quit:\n");
      printf("(1)x+y\n(2)x-y\n(3)x*y\n(4)x/y\n(5)1/x\n(6)x^2\n(7)x^y\n(8)x!\n");
      scanf(" %c", &operator);

      exp = 0; /*resets these values between calculations*/
      fact = 1;

      switch (operator) {

       case '1': /*addition*/
                printf("Selected operation is x+y\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("Now enter the value for y:\n");
                scanf("%lf", &y);
                printf("%.1lf + %.1lf = %.1lf\n", x, y, x + y);
                break;

       case '2': /*subtraction*/
                printf("Selected operation is x-y\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("Now enter the value for y:\n");
                scanf("%lf", &y);
                printf("%.1lf - %.1lf = %.1lf\n", x, y, x - y);
                break;

       case '3': /*multiplication*/
                printf("Selected operation is x*y\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("Now enter the value for y:\n");
                scanf("%lf", &y);
                printf("%.1lf * %.1lf = %.1lf\n", x, y, x * y);
                break;

       case '4': /*division*/
                printf("Selected operation is x/y\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("Now enter the value for y:\n");
                scanf("%lf", &y);
                printf("%.1lf / %.1lf = %lf\n", x, y, x / y);
                break;

       case '5': /*inverse*/
                printf("Selected operation is 1/x\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("1 / %.1lf = %lf\n", x, 1.0 / x);
                break;

       case '6': /*x^2*/
                printf("Selected operation is x^2\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("%.1lf ^ 2 = %.1lf\n", x, x * x);
                break;

       case '7': /*x^y*/
                printf("Selected operation is x^y\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                printf("Now enter the value for y:\n");
                scanf("%lf", &y);
                exp = x;
                for (i = 1; i < y; i++){
                  exp *= x;
                }
                printf("%.1lf ^ %.1lf = %.1lf\n", x, y, exp);
                break;

       case '8': /*factorial*/
                printf("Selected operation is x!\n");
                printf("Please enter the value for x:\n");
                scanf("%lf", &x);
                for (i = 1; i <= x; i++){
                  fact *= i;
                }
                printf("%.1lf! = %.1lf\n", x, fact);
                break;
     }
   }
   printf("Exiting the application. Thank you!\n");
   return 0;
}
