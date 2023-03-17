#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int rock_paper_scissor(char computer,char user){
    
    /*Draw Condition
    comp    user
    r       r
    p       p
    s       s*/

    if (computer==user)
    {
        return 0;
    }

    /*Wining conditions
    comp   user
    r       p
    p       s
    s       r*/

    if (computer=='r'&& user=='p')
    {
        return 1;
    }
    else if (computer=='p'&& user=='r')
    {
        return -1;
    }
    
    if (computer=='p'&& user=='s')
    {
        return 1;
    }
    else if (computer=='s'&& user=='p')
    {
        return -1;
    }

    if (computer=='s'&& user=='r')
    {
        return 1;
    }
    else if (computer=='r'&& user=='s')
    {
        return -1;
    } 
}
int main(){
    int random, number;
    char user;

    //Random number generator

    srand(time(0));
    random = rand() % 10 + 1;

    //Description for game
    
    printf("Enter your call:\nTo choose Rock type r\nTo choose Paper type p\nTo choose type Scissor s\n");

    //Input from user

    scanf("%c",&user);
    
    //Letting computer take the call

    char computer;
    if (random<3)
    {
       computer='r'; 
    }
    else if (random>3 && random<6)
    {
       computer='p'; 
    }
    else if (random>6)
    {
       computer='s'; 
    }

    //Calling Rock Paper Scissor function

    number=rock_paper_scissor(computer,user);

    //Printing result

    if (number==0)
    {
        printf("It's Draw");
    }
    else if (number==1)
    {
       printf("You Win!");
    }
    else if (number==-1)
    {
       printf("You Lose!");
    }

    //Displaying Calls

    printf("\nYou choose %c where as Computer choose %c",user,computer);
    
    return 0;
}