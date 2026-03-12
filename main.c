#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    float num1;
    float num2;
    char op;
    char a='y';
    while(a=='y'){
        printf("-------------------------------\nEnter Num1:");
        scanf("%f", &num1);
        printf("Enter an operator(+,-,*,/,%):");
        scanf(" %c",&op);
        printf("Enter Num2:");
        scanf("%f", &num2);
        
        switch(op){
            case '+':
                printf("Answer:%.2f\n",num1 + num2);
                break;
            case '-':
                printf("Answer:%.2f\n",num1 - num2);
                break;
            case '*':
                printf("Answer:%.2f\n",num1 * num2);
                break;
            case '/':
                if(num2==0.0){
                    printf("Error Try To Write Another Number!\n");
                }else{
                    printf("Answer:%.2f\n",num1 / num2);}
                    break;
            case '%':
                printf("Answer:%.2f\n",(num1/100)*num2);
                break;
            default:
                printf("Error Try Again!\n");
                break;
        }
        printf("Do you want to continue(y/n):");
        scanf(" %c",&a);
        a = tolower(a);
        
        
    }
    printf("Calculator is closing.\n-------------------------------\n");
    return EXIT_SUCCESS;
}
