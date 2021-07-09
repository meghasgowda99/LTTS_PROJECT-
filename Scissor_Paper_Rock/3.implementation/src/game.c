#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Scissorpaperrock(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // pp
    // rr
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sp
    // ps
    // sr
    // rs
    // pr
    // rp
    

    if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }

    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }

    if(you=='p' && comp=='r'){
        return -1;
    }
    else if(you=='r' && comp=='p'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='r';
    }
    
    printf("Enter 's' for scissor, 'p' for Paper and 'r' for Rock\n");
    scanf("%c", &you);
    int result = Scissorpaperrock(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and Game chose %c. ", you, comp);
    return 0;
}
