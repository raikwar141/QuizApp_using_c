#include <iostream>
#include "conio2.h"
#include "quiz.h"
#include <cstring>

using namespace std;

int main()
{
    int i,type,choice,in = 1;
    char userid[20];
    char pwd[20];
    textcolor(LIGHTGREEN);
    for(i=0;i<=66;i++)
        cout<<"*";
    textcolor(LIGHTRED);
    gotoxy(25,2);
    cout<<"QUIZ APPLICATION\n";
    textcolor(LIGHTGREEN);
    gotoxy(1,4);
    for(i=0;i<=66;i++)
        cout<<"*";
    gotoxy(20,6);
    textcolor(YELLOW);

    getch();
    CreateAdmin::create_admin("uadmin","abc","admin");
    do
    {
        clrscr();
        textcolor(LIGHTRED);
        gotoxy(25,1);
        cout<<"QUIZ APPLICATION\n";
        textcolor(LIGHTGREEN);
        gotoxy(1,6);
        for(i=0;i<=66;i++)
            cout<<"*";
        textcolor(YELLOW);
        gotoxy(20,8);
        cout<<"1. ADMIN";
        gotoxy(20,10);
        cout<<"1. STUDENT";
        textcolor(WHITE);
        gotoxy(20,12);
        cout<<"Select your role : ";
        textcolor(LIGHTGREEN);
        gotoxy(1,14);
        for(i=0;i<=66;i++)
            cout<<"*";
        textcolor(WHITE);
        gotoxy(39,12);
        cin>>type;
        if(type == 1)
        {
            clrscr();
            textcolor(YELLOW);
            gotoxy(28,10);
            cout<<"Enter userid :";
            gotoxy(42,10);
            textcolor(WHITE);
            cin.getline(userid,20);
            if(strcmp(userid,"0")==0)
            {
                clrscr();
                return 0;
            }
            textcolor(YELLOW);
            gotoxy(28,12);
            cout<<"Enter password :";
            gotoxy(44,12);
            textcolor(WHITE);
            for(i=0;;i++)
            {
                pwd[i]=getch();
                if(pwd[0]=='0')
                {
                    clrscr();
                    return 0;
                }
                if(pwd[i]=='\r')
                    break;
                cout<<"*";
            }
            pwd[i]='\0';
            return 1;
        }
        else if(type == 2)
        {

        }
        else
        {
           gotoxy(20,13);
           cout<<"\t\t\t\t\t";
        }
        clrscr();
    }while((type!=1 && type!=2));
    gotoxy(1,15);
    return 0;
}
