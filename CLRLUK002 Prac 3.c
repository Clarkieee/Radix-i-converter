#include    <stdio.h>
#include    <math.h>  //adding relevent libaries
#define Title "DECIMAL TO RADIX-i converter" //defining the constants
#define Year 2022
#define Author"Luke"

//////////////////////////////////////////////////////////////////////////

char base[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G'};       //characters up to 16 characters
int DN;                    // integer variable
int DR;                    // another integer variable
int DAR;                   // variable for the devision
int rem;                   // modulus/remainder
int size;                   // array size
int fsize;                  // final array size
int rad;

int main()
{
    ////////////////////////////////////////////////////////////////////////
    printf("***************************************\n");
    printf("%s\n", Title);
    printf("Written by: %s\n", Author);                         //title block
    printf("Date: %d\n", Year);
    printf("****************************************\n");
    ////////////////////////////////////////////////////////////////////////
    printf("Enter a decimal number: ");         // ask input
    scanf("%d",&DN);                           // store the input
    printf("The number you have entered is %d\n", DN);
    ////////////////////////////////////////////////////////////////////////

    while (DN>=0)  // used to keep to loop when input is greater than zero
    {
        printf("Enter a radix for the converter between 2 and 16: ");                  // ask radix input
        scanf("%d",&DR);                                                               // store the input
        printf("The radix you have entered is %d\n", DR);                              // calcuation ouput
        printf("The log%d of the number is %.2f\n",DR, (log(DN)/log(DR)));               // calcuation ouput
        printf("The integer result of the number divided by 2 is %d\n", DN/DR);         // calcuation ouput
        printf("The remainder is %d\n", DN%DR);                                         // use"%" to find remainder and display output

int size = (log(DN)/log(DR)+1);      //determing the size of the array
int fsize = size-1;                  //final size for reversing the array
int rad[size];
rem = DN%DR ;                       //remainder assigned to the variable
DAR = DN/DR;                        //the decimal division is assigned to variable
size = size -1;                     //moved 1 space to accomadate the remainder before loop
rad[size]=rem;                      //remainder is added to the array
size = size -1;

    while(size>=0)                  //while loop
    {
        DN = DAR;                   //decimal made to equal the previous answer
        DAR = DN/DR;                //divides answer by the radix
        rem = DN%DR;                //the modulus of the new answer
        rad[size] = rem;            //the modulus is added to the array
        size = size-1;              //the array is made smaller
    }

    printf("The radix-%d value is ", DR);    //print the output statement
int i;
   for(i= (0); i <=fsize; i++)              //a for loop was made to reverse the order of the array
    printf("%c", base[rad[i]]);             //the array is reveresed and printed
    printf("\n");
    printf("Enter a decimal number:");       //ask user for input
    scanf("%d",&DN);
    printf("The number you have entered is %d\n", DN);

    }
///////////////////////////////////////////////////////////////////////////
printf("EXIT\n"); //if n is not greater than 0
return 0;
}
