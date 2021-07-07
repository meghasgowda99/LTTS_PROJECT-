#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//math.h used for the randome Number function

int main()
{
    int number,guess,nguesses=1 ;
    srand(time(0));
    number= rand()%100+1;
    
    //randome number function is (rand) which is to get an number to guess
    
    
    //generate the randome number in between 1  and  100
    //printf("tyhe number is %d\n", number);
    // keep the loop untill the no is guessed


    do
    {
        printf("guess th nmber between 1 to 100\n");
        scanf("%d", &guess);
        
        if(guess>number)
            
        {
            printf("lower number please\n");

        }
        else if (guess<number)
        {
            printf("higher number please\n");
        }
        else{
            printf("you guessed number in %d attempts\n",nguesses);
        }
        nguesses++;
    }
    
    while(guess!=number);
    return 0;
}
