#include <stdio.h>
#include <stdint.h>

int main(void){
    int8_t code;
    float a1,a2;
    float sum;
    printf("the operation code:\n");
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("enter the operation code:\n");
    scanf("%d",&code);

    switch(code){
    case 1:
        printf("enter two numbers for addition:\n");
        scanf("%f %f",&a1, &a2);
        sum = a1 + a2;
        break;
    case 2:
         printf("enter two numbers for subtraction:\n");
         scanf("%f %f",&a1,&a2);
        sum = a1 - a2;
         break;
    case 3:
        printf("enter two numbers for multiplication:\n");
        scanf("%f %f",&a1,&a2);
        sum = a1*a2;
        break;
    case 4:
        printf("enter two numbers for division:\n");
         scanf("%f %f",&a1,&a2);
         if (a1 !=0 && a2 !=0){
             sum =a1/a2;                
        }else{
            printf("error:Divison by zero is not allowed.\n");
            return 1;
            }
        break; 
        default:
            printf("error:invalid oeration code.\n");
            return 1;              
    }
    if(!(sum<0)){
        printf("sum = %.2f\n",sum);
    }
    

    }
}