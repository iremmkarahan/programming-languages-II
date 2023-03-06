// CRAPS GAME // 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main (){

int dice1,dice2;
int point1,point2;
char name1[50],name2[50];
char choice[2];
int result = 0;


printf("please enter first user's name : \n");
gets(name1);
printf("please enter second user's name : \n");
gets(name2);

printf("%s should roll the dice ? --yes or no -- ",name1);
scanf(" %c", &choice);
if (choice != 'y'){
    printf("first user didn't roll the dice ");
}
else 
{
srand(time(NULL ));

dice1 = 1 + rand() %6 ;
dice2 = 1 + rand() %6 ;
point1 = dice1 + dice2 ; 

printf("%s dice results : %d and %d \n",name1,dice1,dice2);

printf("second user is rolling the dice....\n\n");

dice1 = 1 + rand() %6 ; 
dice2 = 1 + rand() %6 ;
point2 = dice1 + dice2 ;

printf("%s dice results : %d and %d \n",name2,dice1,dice2);


if (point1 == 7 || point1 == 11 ){
    printf("%s win !\n",name1);
    result = 1;
    return 0 ;

}
else if (point1 == 2 || point1 == 3 || point1 == 12 ){
    printf("%s lose :( ",name1);
    result = 1 ;
    return 0 ;

}

if (point2 == 7 || point2 == 11 ){
    printf("%s win !\n\n ",name2);
    result = 1;
    return 0 ;

}
else if (point2 == 2 || point2 == 3 || point2 == 12 ){
    printf("%s lose :( ",name2);
    result = 1;
    return 0 ;

}

else 
{
    system("cls");

    printf("%s point : %d",name1,point1);
    printf("%s point : %d",name2,point2);
    int i;


    for (i=1 ; i<7 ; i++)
    {
        printf("%s %d. time rolling dice : ",name1,i);
        dice1 = 1 + rand() %6;
        dice2 = 1 + rand() %6;
           printf("%d and %d" , dice1,dice2);

        if ( point1 == (dice1+dice2)  ){
            printf("%s win !! \n\n",name1);
            result = 1 ;
            return 0 ;
        }

        printf("%s %d. time rolling dice :  ",name2,i);
        dice1 =1 + rand() %6;
        dice2 =1 + rand() %6;
           printf("%d and %d",dice1,dice2);

        if (point2 == (dice1+dice2 )){
            printf("%s win ",name2);
            result = 1; 
            return 0 ;
        }

    }


}
  if (result!=1){
    printf("nobody win !! ");
   }

}
return 0 ;

}