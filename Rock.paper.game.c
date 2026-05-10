#include <stdio.h>
#include <stdlib.h>

int main ()
{
       int usermove , computermove ;

      while (1){

    printf("\n Enter your move : \t 0 for Rock \t 1 for Paper \t 2 for Scissor \t 9 to Exit : ");
    scanf("%d" , &usermove);

    computermove = rand() % 5;

    if (usermove == 9 )
    {
        exit(1);
    }
    else if (usermove == 0 && computermove  == 1)
    {
        printf ("\n The Computer defeat you! \t Paper Beats Rock");
    }

     else if (usermove == 0 && computermove  == 2 )
    {
        printf ("\n You have defeated the computer! \t Rock Beats Scissor");
    }

     else if (usermove == 1 && computermove  == 0)
    {
        printf ("\n You have defeated the computer! \t Paper Beats Rock");
    }

     else if (usermove == 1 && computermove  == 2)
    {
        printf ("\n The Computer defeat you! \t Scissor Beats Paper");
    }

   else if (usermove == 2 && computermove  == 0)
    {
        printf ("\n The Computer defeat you! \t Rock Beats Scissor");
    }

     else if (usermove == 2 && computermove  == 1)
    {
        printf ("\n You have defeated the computer! \t Scissor Beats Paper");
    }

    else
    {
        printf(" OHH SHOOT SHOOT , It's a draw!");
    }

 }
    return 0;
}
