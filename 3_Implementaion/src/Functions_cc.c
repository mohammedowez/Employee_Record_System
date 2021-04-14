#include "headerFiles.h"

/** List of Global Variable */
//COORD coord = {0,0}; /// top-left corner of window
int X,Y;
int  gotoxy(int x,int y)
{
   X = x;
    Y = y;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    return 1;
}

/** Main function started */

int login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char u[10],p[10];
    char pass[10]="pass";
    do
{
	
    printf("\n  ::::::::::::::::::::::::::  LOGIN FORM  ::::::::::::::::::::::::::  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	scanf("%s",&pword);
	if(strcmp(uname,"ltts")==0 && strcmp(pword,"ltts")==0)
	{
//	printf("  \n\n\n       WELCOME TO EMPLOYEE RECORD MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
//	    printf("\n LOADING PLEASE WAIT... \n");
  //  for(i=0; i<3; i++)
    {
    //    printf(".");
        //Sleep(500);
    }
//	printf("\n\n\n\t\t\t\tPress any key to continue...");
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;	
		
	}
}
	while(a<=2);
	if (a>2)
	{
	//	printf("\nSorry you have entered the wrong username and password for four times!!!");
		
	//	getch();
		
		}
		system("cls");
		return 1;	
}

