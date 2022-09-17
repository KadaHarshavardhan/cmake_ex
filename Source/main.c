#include <stdio.h>
#include "cal.h"


int main(void){

    printf("Calculator:\n");

    while(1){
        printf("Enter the options:\n \
        1. Adder\n \
        2. Subtractor\n \
        3. Divider\n \
        4. Multiplier\n \
        5. Exit\n");


        int choice = 0;
        scanf("%d", &choice);

        int result = 0;
        int a = 0;
        int b = 0;

        switch(choice){
            case 0:
                    printf("Error didnt get any input!\n");
                    return 1;
            
            case 1:
                    printf("Enter values to ADD:\n");
                    scanf("%d", &a);
                    scanf("%d", &b);
                    printf("Result %d\n", adder(a, b));  
                    break;
            case 2:
                    printf("Enter values to SUB:\n");
                    scanf("%d", &a);
                    scanf("%d", &b);
                    printf("Result %d\n", subtractor(a, b));  
                    break;
            case 3:
                    printf("Enter values to DIV:\n");
                    scanf("%d", &a);
                    scanf("%d", &b);
                    printf("Result %d\n", divider(a, b));  
                    break;
            case 4:
                    printf("Enter values to MUL:\n");
                    scanf("%d", &a);
                    scanf("%d", &b);
                    printf("Result %d\n", multiplier(a, b));  
                    break;
            case 5:
                    return 0;

            default:
                    printf("Wrong choice, Try again\n");
                    break;
        }

    }

    return 0;
}