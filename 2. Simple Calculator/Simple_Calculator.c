#include<stdio.h>
#include<math.h>
void print_menu();
double divison(double,double);
double modulus(int, int);
int main()
{
    int choice;
    double first, second, result;

while(1) {
    print_menu();
    printf("\nEnter your choice:");
    scanf("%d",&choice); 
if (choice == 7){
    break ; 
                }
if (choice < 0 || choice>7){
    fprintf(stderr, "Invalid menu choice...\n");
}
else{
    printf("\n Enter the first number: ");
    scanf("%lf",&first);
    printf(" Now enter second number: ");
    scanf("%lf",&second);

    switch (choice)
    {
        case 1:  // Add
        result= first + second ;
        break;
        case 2: // Substract
        result= first - second;
        break; 
        case 3: // Multiply
        result= first * second;
        break;
        case 4: // Divide
        result= divison(first , second) ;
        break;
        case 5: // Modulas
        result= modulus(first, second) ;
        break;
        case 6: // Power
        result= pow(first , second);
        break;
    
    }
    if(!isnan(result))
     printf("\nResult of operation is: %.2f\n",result);
 
        } ;
    }
        return 0;
}

void print_menu()
{
    printf("\n_______________________________________");
 printf("\nWelcome to the simple Calculator...\n");
 printf("\nChoose one of the following option -");
 printf("\n1. Add");
 printf("\n2. Substract");
 printf("\n3. Multiply");
 printf("\n4. Divide");
 printf("\n5. Modulas");
 printf("\n6. Power");
 printf("\n7. Exit");
}

double divison(double a, double b){
if (b == 0 ){
    fprintf(stderr, "\nInvalid argument for Divison..");
    return NAN;
}
else{
     return a / b ;
}
}

double modulus(int a, int b){
    if (b == 0 ){
        fprintf(stderr, "\nInvalid argument for Modulus..");
        return NAN;
    }
    else{
         return a / b ;
    }
    
    }

