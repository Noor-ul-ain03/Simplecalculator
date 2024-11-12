#include <stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    printf("choice operator: (+, -, *, /)");
     scanf("%c", &operator);
     printf("Enter numbers:");
    scanf("%lf %lf", &num1, &num2);
    switch (operator){
        case '+':
        result = num1 + num2;
        printf("%lf + %lf = %lf\n", num1 ,num2 ,result);
        break;
        case '-':
        result = num1 - num2;
        printf("%lf - %lf = %lf\n", num1 ,num2 ,result);
        break;
        case '*':
        result = num1 * num2;
        printf("%lf * %lf = %lf\n", num1 ,num2 ,result);
        break;
        case '/':
        if(num2 != 0){
        result = num1 / num2;
        printf("%lf / %lf = %lf\n", num1 ,num2 ,result);}
        else {
            printf("invalid numbers");
        }
        break;
        default:
        printf("INVALID OPERATOR. \n")
    }
    return 0;
}