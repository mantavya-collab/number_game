#include <stdio.h>
#include <conio.h>
int main()
{
 int i,n;
 printf("This is a game where you need to enter a type of number to win the game\n");
 printf("GAME BEGINS \nYou will get maximum of 3 attempts");
 getch();
 for(i=1;i<=3;i++)
 {
  printf("\n\nAttempt No. %d \n",i);
  printf("Enter a No.-");
  scanf("%d",&n);
  if(n%2==0)
     {
       printf("\nGAME WON");
       break;
     }
 else 
    printf("ATTEMPT LOST");
  getch();
 }
if(i==4)
 printf("\n\nGAME OVER");
getch();
return 0;
}