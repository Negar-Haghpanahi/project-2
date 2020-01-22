#include <stdio.h>
#include<conio.h>
char mat[4][4];

void print_mat()
{
	int i, j;
	for(i=0; i<4 ; i++)
	{
		for(j=0; j<4 ; j++)
		{
			printf("%c ", mat[i][j]);
		}
		printf("\n");
	}
	sleep(1);
}

int main()
{
	int i, j , num=-1;
	char ch;
	
	for(i=0; i<4 ; i++ )
	{
		for(j=0 ; j<4 ; j++)
		{ 
			{
				scanf("%c ", &ch);
				if (ch=='z')
					break;
				if(ch=='*' || ch=='1' || ch=='#' || ch=='0')
					mat[i][j]=ch;	
			}
			
		}
	}
		system("cls");
		print_mat();
		sleep(3);
		system("cls");
		i=0; j=0;
		mat[i][j]='0';
		printf("enter the key to play.\n");
		print_mat();
		ch=getchar();
		while (ch==72 || ch==75 || ch==80 || ch==77 )
		{
			if(ch==72) 
			{
				mat[i][j]='1';
				mat[i+1][j]='0';
				print_mat();
				i=i+1;
			}
			if(ch==80) 
			{
				mat[i][j]='1';
				mat[i-1][j]='0';
				print_mat();
				i=i-1;
			}
			if(ch==75) 
			{
				mat[i][j]='1';
				mat[i][j+1]='0';
				print_mat();
				j=j+1;
			}
			if(ch==77) 
			{
				mat[i][j]='1';
				mat[i][j-1]='0';
				print_mat();
				j=j-1;
			}
			ch=getchar();
		}
		
	}

