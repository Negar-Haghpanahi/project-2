//  ** IN THE NAME OF ALLAH **
// FAZE 2

#include<stdio.h>
#include<conio.h>
char mat[5][10];
void print_mat()
{
	int i, j;
	for(i=0; i<5 ; i++)
	{
		for(j=0; j<10 ; j++)
		{
			printf("%c ", mat[i][j]);
		}
		printf("\n");
	}
	sleep(1);
	system("cls");
}
 int main()
 {
 	int  row_mat , column_mat ,i , j;
	char address_file[100] , position ,ch;
	char  pacman='0' , star='*' , mat[4][10];
	FILE  *ptf1;
	printf("HELLO :) , if you want  to play pacman , plesae write the name of your file.\nif you wany to finish the game  enter -1 and also if you hane eaten all the foods enter -1 . \n GOOD LUCK :) ");
	scanf("%S", address_file);
	ptf1=fopen("address_file","r");
	if(ptf1==0)
		printf("This file can not be opened !! \n");
	else 
	{
		while(feof(ptf1)==0)
		{
			for(i=0; i<5 ; i++ )
			{
				for(j=0 ; j<10 ; j++)
				{
					position=getc(ptf1);
					if(position=='*' || position=='1' || position=='#' || position=='0')
					mat[i][j]=position;
				}
			}
		}
		fclose(ptf1);
		print_mat();
		i=0; j=0;
		mat[i][j]='0';
		ch=getchar();
		while (ch!='1')
		{
			if(ch==22472) 
			{
				mat[i][j]='1';
				mat[i+1][j]='0';
				print_mat();
				i=i+1;
			}
			if(ch==22480) 
			{
				mat[i][j]='1';
				mat[i-1][j]='0';
				print_mat();
				i=i-1;
			}
			if(ch==22475) 
			{
				mat[i][j]='1';
				mat[i][j+1]='0';
				print_mat();
				j=j+1;
			}
			if(ch==22477) 
			{
				mat[i][j]='1';
				mat[i][j-1]='0';
				print_mat();
				j=j-1;
			}
			ch=getchar();
		}
		
	}
 }
