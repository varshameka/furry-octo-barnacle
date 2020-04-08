
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{  
    char c1,c2,c3,c4,R,P,S; //choice of 4players and choices are rock,paper,scissors.
    int p1=0,p2=0,p3=0,p4=0;    //scores of 4players.
    int V1,V2,V3,V4,i;
    //to run the code 50 times we can use for loop.
    //for(i=0;i<50;i++). 
    
        srand(time(0)); //to get random numbers each time
        V1=rand()%100+1;
        {
            if(V1<30)
            {
                c1='R';
            }
            else if (V1<60)
            {
                c1='P';
            }
            else
            {
                c1='S';
            }
            printf("The choice of Player 1 is = %c\n", c1); //assigning the choice of player1
        }
        srand(time(0));
        V2=rand()%10+1;
        {
            if(V2<3)
            {
                c2='R';
            }
            else if (V2<6)
            {
                c2='P';
            }
            else
            {
                c2='S';
            }
            printf("The choice of Player 2 is = %c\n", c2); //assigning the choice of player2
        }
        srand(time(0));
        V3=rand()%1000+1;
        {
            if(V3<300)
            {
                c3='R';
            }
            else if (V3<600)
            {
                c3='P';
            }
            else
            {
                c3='S';
            }
            printf("The choice of Player 3 is = %c\n", c3); //assigning the choice of player3
        }
        srand(time(0));
        V4=rand()%1+1;
        {
            if(V4<0.3)
            {
                c4='R';
            }
            else if (V4<0.6)
            {
                c4='P';
            }
            else
            {
                c4='S';
            }
            printf("The choice of Player 4 is = %c\n", c4); //assigning the choice of player4
        }
        if(c1=='R')
        {
            if(c2=='P')
            {
                p2++;
            }
            if(c2=='S')
            {
                p1++;
            }
        }
        if(c1=='P')
        {
            if(c2=='S')
            {
                p2++;
            }
            if(c2=='R')
            {
                p1++;
            }
        }
        if(c1=='S')
        {
            if(c2=='P')
            {
                p1++;
            }
           
            if(c2=='R')
            {
                p2++;
            }
        }
        if(c1=='R')
        {
            if(c3=='P')
            {
                p3++;
            }
            if(c3=='S')
            {
                p1++;
            }
        }
        if(c1=='P')
        {
            if(c3=='S')
            {
                p3++;
            }
            if(c3=='R')
            {
                p1++;
            }
        }
        if(c1=='S')
        {
            if(c3=='P')
            {
                p1++;
            }
         
            if(c3=='R')
            {
                p3++;
            }
        }
        if(c1=='R')
        {
            if(c4=='P')
            {
                p4++;
            }
            if(c4=='S')
            {
                p1++;
            }
        }
        if(c1=='P')
        {
            if(c4=='S')
            {
                p4++;
            }
            if(c4=='R')
            {
                p1++;
            }
        }
        if(c1=='S')
        {
            if(c4=='P')
            {
                p1++;
            }
         
            if(c4=='R')
            {
                p4++;
            }
        }
        if(c2=='R')
        {
            if(c3=='P')
            {
                p3++;
            }
            if(c3=='S')
            {
                p2++;
            }
        }
        if(c2=='P')
        {
            if(c3=='S')
            {
                p3++;
            }
            if(c3=='R')
            {
                p2++;
            }
        }
        if(c2=='S')
        {
            if(c3=='P')
            {
                p2++;
            }
         
            if(c3=='R')
            {
                p3++;
            }
        }
        if(c2=='R')
        {
            if(c4=='P')
            {
                p4++;
            }
            if(c4=='S')
            {
                p2++;
            }
        }
        if(c2=='P')
        {
            if(c4=='S')
            {
                p4++;
            }
            if(c4=='R')
            {
                p2++;
            }
        }
        if(c2=='S')
        {
            if(c4=='P')
            {
                p2++;
            }
         
            if(c4=='R')
            {
                p4++;
            }
        }
        if(c3=='R')
        {
            if(c4=='P')
            {
                p4++;
            }
            if(c4=='S')
            {
                p3++;
            }
        }
        if(c3=='P')
        {
            if(c4=='S')
            {
                p4++;
            }
            if(c4=='R')
            {
                p3++;
            }
        }
        if(c3=='S')
        {
            if(c4=='P')
            {
                p3++;
            }
           
            if(c4=='R')
            {
                p4++;
            }
        }
    
        printf("\t Scores of the players are:\t \n");
        printf(" \t \t \t \t Player1 : %d \n ",p1);
        printf(" \t \t \t \t Player2 : %d \n ",p2);
        printf(" \t \t \t \t Player3 : %d \n ",p3);
        printf(" \t \t \t \t Player4 : %d \n ",p4);
        if((p1>p2) && (p1>p3) && (p1>p4))
        {
            printf("Winner = Player 1");
        }
        else if((p2>p1) && (p2>p3) && (p2>p4))
        {
            printf("Winner = Player 2");
        }
        else if((p3>p1) && (p3>p2) && (p3>p4))
        {
            printf("Winner = Player 3");
        }
        else if((p4>p1) && (p4>p2) && (p4>p3))
        {
            printf("Winner = Player 4");
        }
        else
        {
            printf("Wow.!! It's a tie");
        }
    return 0;
}
