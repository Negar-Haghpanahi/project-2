//  ** IN THE NAME OF ALLAH **
// FAZE 2

#include<stdio.h>
#include<conio.h>
#include<windows.h> 

char mat[4][4];

void gotoxy(int x, int y)  
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cursorCoord;
	cursorCoord.X=x;
	cursorCoord.Y=y;
	SetConsoleCursorPosition(consoleHandle, cursorCoord);
}
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
}
 int main()
 {
 	int  row_mat , column_mat ,i , j ,  num_food=0;
	char address_file[100] , position ,ch;
	char  pacman='0' , star='*' , mat[4][10];
	FILE  *ptf1;
	printf("HELLO :) , if you want  to play pacman , plesae write the name of your file.\nGOOD LUCK :)\n ");
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
					if ( position=='*')
						num_food++;
					if(position=='*' || position=='1' || position=='#' || position=='0')
					mat[i][j]=position;
				}
			}
		}
		fclose(ptf1);
		system("cls");
		print_mat();
		sleep(2);
		system("cls");
		i=0; j=0;
		mat[i][j]='0';
		getchar ();  
		printf("enter the keys to play.\n");
		print_mat();
 
		while (num_food>0)  
		{
			ch=getch(); 
			if (ch = 224)
			{
		       	ch=getch(); 
				
				gotoxy (0, 1); 
				
				switch (ch)
				{
			   		 case 80 :
								if (mat[i+1][j]=='#')
									continue;
								else if (mat[i+1][j]=='*' ||mat[i+1][j]=='1' )
								{  
									if(mat[i+1][j]=='*')
										num_food--;
									mat[i][j]='1';
									mat[i+1][j]='0';
									print_mat();
									i=i+1;
									break;
								}
								else 
									continue;
				
					case 72: 
								if (mat[i-1][j]=='#')
									continue;
								else if (mat[i-1][j]=='*' ||mat[i-1][j]=='1' )
							    {
							    	if(mat[i-1][j]=='*')
										num_food--;
									mat[i][j]='1';
									mat[i-1][j]='0';
									print_mat();
									i=i-1;
									break;
								}
								else 
									continue;
				
				    case 77:
								if (mat[i][j+1]=='#')
									continue;
								else if (mat[i][j+1]=='*' ||mat[i][j+1]=='1' )
								{	
									if(mat[i][j+1]=='*')
										num_food--;
									mat[i][j]='1';
									mat[i][j+1]='0';
									print_mat();
									j=j+1;
									break;	
								}
								else 
									continue;	
				
					case 75:
								if(mat[i][j-1]=='#')
									continue;
							else if (mat[i][j-1]=='*' ||mat[i][j-1]=='1' )
								{	
									if(mat[i][j-1]=='*')
										num_food--;
									mat[i][j]='1';
									mat[i][j-1]='0';
									print_mat();
									j=j-1;
									break;
								}
								else 
									continue;
				} 
			}
		}
		
	}
 }
