#include<stdio.h>
int main()
{
    int i,p1,p2,num[9],c,j;
    char table[9],y,sy='y';
    while(sy=='y')
    {
    system("cls");
    y='n';j=0;
    for(i=0;i<9;i++){num[i]=12;}
    for(i=0;i<9;i++){table[i]=i;}table[i]='\0';
    printf("TIC TAC TOE\nRemember the numbers->\n");
    printf("   |   |   \n");
    printf(" %d | %d | %d \n",table[0],table[1],table[2]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %d | %d | %d \n",table[3],table[4],table[5]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %d | %d | %d \n",table[6],table[7],table[8]);
    printf("   |   |   \n");
    while(y!='y'){
        printf("Do you want to continue(y/n) - ");scanf("%s",&y);
    }
    system("cls");
    for(i=0;i<9;i++){table[i]=' ';}table[i]='\0';
    i=0;
    while(i<9){
        p1=10;p2=10;
        if(i%2==0)
        {
            c=1;
            while(c==1 || (p1<0 || p1>8))
            {
                printf("Player 1 - ");scanf("%d",&p1);
                if(i==0){num[0]=12;}
                for(j=0;j<=i;j++)
                {
                    if(p1==num[j]){c=1;break;}
                    if(p1!=num[j] && j==i){c=0;break;}
                }
            }
        }
        else
        {
            c=1;
            while(c==1 || (p2<0 || p2>8))
            {
                printf("Player 2 - ");scanf("%d",&p2);
                for(j=0;j<=i;j++)
                {
                    if(p2==num[j]){c=1;break;}
                    if(p2!=num[j] && j==i){c=0;break;}
                }
            }
        }
        system("cls");
        if((p1>8 && i%2==0)||(p2>8 && i%2!=0)){continue;}
        if(i%2==0)
        {
            num[i]=p1;
            table[p1]='X';
        }
        else
        {
            num[i]=p2;
            table[p2]='O';
        }
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",table[0],table[1],table[2]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",table[3],table[4],table[5]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",table[6],table[7],table[8]);
    printf("   |   |   \n");
    if((table[0]=='X' && table[1]=='X' && table[2]=='X')||(table[3]=='X' && table[4]=='X' && table[5]=='X')||(table[6]=='X' && table[7]=='X' && table[8]=='X')||(table[0]=='X' && table[3]=='X' && table[6]=='X')||(table[1]=='X' && table[4]=='X' && table[7]=='X')||(table[2]=='X' && table[5]=='X' && table[8]=='X')||(table[0]=='X' && table[4]=='X' && table[8]=='X')||(table[2]=='X' && table[4]=='X' && table[6]=='X'))
    {
        printf("P1 WON!!!");break;
    }
    else if((table[0]=='O' && table[1]=='O' && table[2]=='O')||(table[3]=='O' && table[4]=='O' && table[5]=='O')||(table[6]=='O' && table[7]=='O' && table[8]=='O')||(table[0]=='O' && table[3]=='O' && table[6]=='O')||(table[1]=='O' && table[4]=='O' && table[7]=='O')||(table[2]=='O' && table[5]=='O' && table[8]=='O')||(table[0]=='O' && table[4]=='O' && table[8]=='O')||(table[2]=='O' && table[4]=='O' && table[6]=='O'))
    {
        printf("P2 WON!!!");break;
    }
    if(i==8){printf("DRAW!!!");break;}
        i++;
    }
    printf("\nPlay Again??? (y/n) - ");scanf("%s",&sy);
    }
}
