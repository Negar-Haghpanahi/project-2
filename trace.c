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
	sleep(2);
	system("cls");
}

int main()
{
	int i, j , num=-1;
	char ch;
	
	for(i=0; i<4 ; i++ )
	{
		for(j=0 ; j<4 ; j++)
		{
			scanf("%c",&ch);
			if(ch=='*' || ch=='1' || ch=='#' || ch=='0')
				mat[i][j]=ch;
			getchar();
		}
	}
	
		print_mat();
		sleep(3);
		i=0; j=0;
		mat[i][j]='0';
		printf("enter the key to play.\n");
		print_mat();
		ch=getchar();
		while (ch!=num)
		{
			if(ch==224 72) 
			{
				mat[i][j]='1';
				mat[i+1][j]='0';
				print_mat();
				i=i+1;
			}
			if(ch==224 80) 
			{
				mat[i][j]='1';
				mat[i-1][j]='0';
				print_mat();
				i=i-1;
			}
			if(ch==224 75) 
			{
				mat[i][j]='1';
				mat[i][j+1]='0';
				print_mat();
				j=j+1;
			}
			if(ch==224 77) 
			{
				mat[i][j]='1';
				mat[i][j-1]='0';
				print_mat();
				j=j-1;
			}
			ch=getchar();
		}
		
	}

