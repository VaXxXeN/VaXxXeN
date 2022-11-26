#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#include <iomanip>
#include <fstream>

using namespace std;
int main ()
{
string username;
string password;
string dntk;
char cont;
int  choice, dish,dessert,drink;
int qnta,qntb,qntc,qntd,qnte,qntf,qntg,qnth,qnti,qntj,qntk,qntl,qntm,qntn,qnto;
int ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,y,pm,s=0,sc=2;
time_t current = time (0);
char* dt = ctime(&current);
system("color 04");
cout<<"\t\t\t                   ,                                                                       \n";
cout<<"\t\t\t             ..  .:::;                                                                     \n";
cout<<"\t\t\t            ;::,::::'                                                                      \n";
cout<<"\t\t\t           ;::;:::'                                                                        \n";
cout<<"\t\t\t       ,;';:;;:::                                                                          \n";
cout<<"\t\t\t      ,:: :::::::                                                                          \n";
cout<<"\t\t\t    , ;::;::::::                                                                           \n";
cout<<"\t\t\t   .: :::::::::                                                                            \n";
cout<<"\t\t\t  :::::::::::::                                                                            \n";
cout<<"\t\t\t  :::::::::::::                                                                            \n";
cout<<"\t\t\t . ::::::::::::                                               ,..::::''                    \n";
cout<<"\t\t\t,:.::::::::::::                                             ..;::::'                       \n";
cout<<"\t\t\t::::::::::::::;                                           :;:::::'                         \n";
cout<<"\t\t\t ::::::::::::::                                          ,:::::'                           \n";
cout<<"\t\t\t ::::::::::::::;                                        ;:;:::'                            \n";
cout<<"\t\t\t,':::::::::::::::                                     .;:;::'                              \n";
cout<<"\t\t\t;;':::::::::::::;.                                  ,;:::::'                               \n";
cout<<"\t\t\t':;':::::::::::::;                                 ;:::::::      _ _ _ _____ __    _____ _____ _____ _____     \n";
cout<<"\t\t\t ::;;:::::::::::::;;                             ,;:::::::'     | | | |   __|  |  |     |     |     |   __|    \n";
cout<<"\t\t\t '::::::::::::::::::..                          ::::::::::      | | | |   __|  |__|   --|  |  | | | |   __|    \n";
cout<<"\t\t\t  '::::::::::::::::::;.                        ;;::::::::'      |_____|_____|_____|_____|_____|_|_|_|_____|    \n";
cout<<"\t\t\t :::;:::::::::::::::::::.                   ,;:::::::::::                                  \n";
cout<<"\t\t\t  :::;::::::::::::::::::::                  ;::::::::::::                                  \n";
cout<<"\t\t\t ::'::::::::::::::::::::::;.               ::::::::::::::                                  \n";
cout<<"\t\t\t ;:;'::::::::::::::::::::::;              ,:::::::::::::;                        _____ _____       \n";
cout<<"\t\t\t  '::;;::::::::::::::::::::::;             ;::::::::::::::                      |_   _|     |      \n";
cout<<"\t\t\t ;'::::::::::::::::::::::::::.           ,::;:::::::::::::                        | | |  |  |      \n";
cout<<"\t\t\t::;;::::::::::::::::::::::::::           ;:::::::::::::::;                        |_| |_____|      \n";
cout<<"\t\t\t :::::::::::::::::::::::::::::          ::::::::::::::::::                                 \n";
cout<<"\t\t\t:::::::::::::::::::::::::::::           ;::::::::::::::::'                                 \n";
cout<<"\t\t\t::::::::::::::::::::::::::::'          ::;::::::::::::::                                   \n";
cout<<"\t\t\t :::::::::::::::::::::::::::        ,..;:::::::::::::::'        _____ _____ _____ __ __ _____ _____ _ _ _ _____ _____ \n";
cout<<"\t\t\t :::::::::::::::::::::::::::        :::::::::::;::::::::'      |   __| __  |  _  |  |  |  |  |  _  | | | |  |  |   __|\n";
cout<<"\t\t\t :::::::::::::::::::::::::::.    ,.;.;::' ;:::::::::.;....     |  |  |    -|     |_   _|     |     | | | |    -|__   |\n";
cout<<"\t\t\t  :::::::::::::::::::::::::::;..::::::::,.:'           ''::;.  |_____|__|__|__|__| |_| |__|__|__|__|_____|__|__|_____|\n";
cout<<"\t\t\t  ':::::::::::::::::::::::::::::::::::::';.:          :'.;::;.                             \n";
cout<<"\t\t\t   ''::::::::::::::::::::::::::::::::::;.:              ::'':';;                           \n";
cout<<"\t\t\t    ..::::::::::::::::::::::::::::::::::::;.            ......;:.                          \n";
cout<<"\t\t\t     '':::::::::::::::::::::::::::::::::. ::    ;;:'''':;.:;.  ::'          _____ _____ _____ _____ _____        \n";
cout<<"\t\t\t       ':::::::::::::::::::::::::::::::::::'; ;:'      ;:;;::;             |   __|_   _|     | __  |   __|       \n";
cout<<"\t\t\t        '::::::::::::::::::::::::::::::::::..::                            |__   | | | |  |  |    -|   __|       \n";
cout<<"\t\t\t           ';';';::::::::::::::::::::::::::::;                             |_____| |_| |_____|__|__|_____|       \n";
cout<<"\t\t\t                ''':::::::::::::::::::::::::                                               \n";
cout<<"\t\t\t               ..;::::::::::::::::::::::::::                                               \n";
cout<<"\t\t\t        .....;:::::::::::::::::::::::::::"":...                                            \n";
cout<<"\t\t\t     ..::::::'':::::::::::::::::::::''':,;.;'::                           _____ _   _ _____          _____      \n";
cout<<"\t\t\t ..;::::;;;   ;;::::::::::::::::::;;;.;:::; :;                           |_   _| | | |  _  |        |_   _|     \n";
cout<<"\t\t\t :::''      ;;'',:::::::::::::::::':;.;::::::              ,...            | | | | | | |_) |  _____   | |       \n";
cout<<"\t\t\t :::.   ,.;:;...::::::::::::::'''':;::;::::::;         ,  ;::::..          | | | |_| |  ___| |_____|  | |       \n";
cout<<"\t\t\t  '':...''  ;::';::::::::;:;'' ;;;:::;;;:;::::;       ;:::::'':::          |_| |_____|_|              |_|       \n";
cout<<"\t\t\t   ':;' ,..::'.;:::::'::'::;'  :'':::::::::::::;.....;:.;':   '''                          \n";
cout<<"\t\t\t    ':..;:' ::::'.;  ;' ;::   '' '':::::::::::':::::::::;;:                                \n";
cout<<"\t\t\t      ':;  ,;''',;'.;: ;;;:        :;;:;:::;;   ,::::::::::                                \n";
cout<<"\t\t\t       ';'::::.;:: ;:: ;;;:'                     :::"  "';'                                \n";
cout<<"\t\t\t           :::::;;.:';;;'                        ':::                                      \n";
cout<<"\t\t\t                ''''''                           ';;;'                                     \n";
system ("pause");
system ("cls");
system ("color 07");

while (1)
{
    system ("color 07");
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\t\t\t\t\t\t\t\t=============================\n";
    cout <<"\t\t\t\t\t\t\t\t|                           |\n";
    cout <<"\t\t\t\t\t\t\t\t| PLEASE ENTER YOUR ACCOUNT |\n";
    cout <<"\t\t\t\t\t\t\t\t|                           |\n";
    cout <<"\t\t\t\t\t\t\t\t=============================\n";

    cout <<"\n\t\t\t\t\t\t\t\tEnter your username:\t";
    cin >> username;
    cout <<"\n\t\t\t\t\t\t\t\tEnter your password:\t";
    cin >> password;
    cout <<"\n\n\t\t\t\t\t\t\t\tYOUR ACCOUNT IS VALIDATING";
        for(int a=1;a<6;a++)
        {
            Sleep(500);
            cout << ".";
        }
    if ( username != "BSEE" || password != "2B" )
    {
        system ("cls");
        system ("color 04");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t  Incorrect username/password combination.\n";
        cout << "\n\n\t\t\t\t\t\t\t\t       Please try again.       \n\n\n\n\t\t\t\t\t\t\t\t";
        system ("pause");
        system ("cls");
    }
    else
    {
    system ("color 0A");
    cout <<"\n\n\t\t\t\t\t\t\t\t:::::::ACCESS GRANTED:::::::\n\n\n\t\t\t\t\t\t\t       ";
    system ("pause");
    goto ords;

    }
}
do
{
ords:
system ("cls");
system ("color 07");
cout << "\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         GRAYHAWKS STORE      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\t";
cout << "\t\t1. MAIN DISH"  << "\t\t\t\t\t\t2. DESSERT"  << "\t\t\t\t\t\t3. DRINKS" << "\n\n\n\n\t\t\t\t\t\t\t\t\t" << "     0. Exit the store\n\n\n";
cout << "\n\n\n\tPLEASE ENTER YOUR DESIRED ORDER:\t";
{
cin >> choice;
switch(choice)
{
case 0:
exit(0);
{
case 1:
{
       do
       {
           system ("cls");
           system ("color 07");
           cout << "\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         GRAYHAWKS STORE      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\t";
           cout << "\t==================\n";
           cout << "\t\t|   MAIN DISH    |"  << "\t\t\t\t\t\t   DESSERT"  << "\t\t\t\t\t\t   DRINKS\n";
           cout << "\t\t==================\n";
           cout << "\n\n\n\n\n\t1. PORK ADOBO......................50 pesos\n\n";
           cout << "\t2. BULALO..........................80 pesos\n\n";
           cout << "\t3. BATANGAS LOMI..................110 pesos\n\n";
           cout << "\t4. KARE KARE.......................70 pesos\n\n";
           cout << "\t5. CHICKEN CURRY...................60 pesos\n\n";
           cout << "\t0. Go to Menu\n\n\n";
           cout << "\tPLEASE ENTER YOUR DESIRED ORDER:\t";
           {
            cin >> dish;
            switch(dish)
            {
            case 0:
            goto ords;
            {
            case 1:
                {
                cout<<"\n\tHOW MANY SERVING OF PORK ADOBO DO YOU WANT:\t";
                cin>>qnta;
                a=50;
                s=s+a*qnta;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER PORK ADOBO : 50 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qnta << " SERVING/S OF PORK ADOBO" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
               case 2:
               {
                cout<<"\n\tHOW MANY SERVING OF BULALO DO YOU WANT:\t";
                cin>>qntb;
                b=80;
                s=s+b*qntb;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER  BULALO : 80 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntb << " SERVING/S OF BULALO" << " IS SUCCESSFULLY SAVED\n";
               }
               break;
            }
            {
                case 3:
                {
                cout<<"\n\tHOW MANY SERVING OF BATANGAS LOMI DO YOU WANT:\t";
                cin>>qntc;
                c=110;
                s=s+c*qntc;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER BATANGAS LOMI : 110 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntc << " SERVING/S OF BATANGAS LOMI" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
                case 4:
                {
                cout<<"\n\tHOW MANY SERVING OF KARE KARE DO YOU WANT:\t";
                cin>>qntd;
                d=70;
                s=s+d*qntd;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER KARE KARE: 70 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntd << " SERVING/S OF KARE KARE" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
                case 5:
                {
                cout<<"\n\tHOW MANY SERVING OF CHICKEN CURRY DO YOU WANT:\t";
                cin>>qnte;
                e= 60;
                s=s+e*qnte;
                cout<<"\n\n\\t\t\t\t\t\t\t\t\tYOU ORDER CHICKEN CURRY: 60 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qnte << " SERVING/S OF CHICKEN CURRY" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            default:
            cout << "Invalid choice, choose another DISH.";
            }
           }
            cout << "\n\n\t\t\t\t\t\t\t WOULD YOU LIKE TO TO ORDER ANOTHER MAIN DISH? (Y or N):\t";
            cin >> cont;
       }while(cont != 'N');
}
break;
}
{
case 2:
{
       do
       {
           system ("cls");
           system ("color 07");
           cout << "\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         GRAYHAWKS STORE      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\t";
           cout << "\t\t\t\t\t\t\t\t==================\n";
           cout << "\t\t   MAIN DISH"  << "\t\t\t\t\t\t|     DESSERT    |"  << "\t\t\t\t\t\t   DRINKS\n";
           cout << "\t\t\t\t\t\t\t\t\t==================\n";
           cout << "\n\n\t\t\t\t\t\t\t\t1. HALO HALO.......................25 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t2. BANANAQ.........................20 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t3. CHEESE CAKE.....................15 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t4. ICE CREAM.......................30 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t5. SCRAMBLE........................10 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t0. Go to Menu\n\n\n";
           cout << "\tPLEASE ENTER YOUR DESIRED ORDER:\t";
           {
            cin >> dessert;
            switch(dessert)
            {
            case 0:
            goto ords;
            {
            case 1:
                {
                cout<<"\n\tHOW MANY SERVING OF HALO HALO DO YOU WANT:\t";
                cin>>qntk;
                k=25;
                s=s+k*qntk;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER HALO HALO : 25 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntk << " SERVING/S OF HALO HALO" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
               case 2:
               {
                cout<<"\n\tHOW MANY SERVING OF BANANAQ DO YOU WANT:\t";
                cin>>qntl;
                l=20;
                s=s+l*qntl;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER BANANAQ : 35 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntl << " SERVING/S OF BANANAQ" << " IS SUCCESSFULLY SAVED\n";
               }
               break;
            }
            {
                case 3:
                {
                cout<<"\n\tHOW MANY SERVING OF CHEESE CAKE DO YOU WANT:\t";
                cin>>qnto;

                o=15;
                s=s+o*qnto;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER CHEESE CAKE : 15 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qnto << " SERVING/S OF CHEESE CAKE" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
                case 4:
                {
                cout<<"\n\tHOW MANY SERVING OF ICE CREAM DO YOU WANT:\t";
                cin>>qntm;
                m=30;
                s=s+m*qntm;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER ICE CREAM : 30 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntm << " SERVING/S OF ICE CREAM" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
                case 5:
                {
                cout<<"\n\tHOW MANY SERVING OF SCRAMBLE DO YOU WANT:\t";
                cin>>qntn;
                n=10;
                s=s+n*qntn;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER SCRAMBLE : 10 pesos / serving\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntn << " SERVING/S OF SCRAMBLE" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            default:
            cout << "Invalid choice, choose another DESSERT.";
            }
           }
            cout << "\n\n\t\t\t\t\t\t\tWOULD YOU LIKE TO TO ORDER ANOTHER DESSERT? (Y or N): \t";
            cin >> cont;
       }while(cont != 'N');
}
break;
}
{
case 3:
{
    do
       {
           system ("cls");
           system ("color 07");
           cout << "\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         GRAYHAWKS STORE      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
           cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\t";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==================\n";
           cout << "\t\t   MAIN DISH"  << "\t\t\t\t\t\t   DESSERT"  << "\t\t\t\t\t\t|      DRINKS    |\n";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==================\n";
           cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t1. COKE.......................12 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t2. ROYAL......................12 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t3. SPRITE.....................12 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t4. PEPSI......................12 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t5. MOUNTAIN DEW...............15 pesos\n\n";
           cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t0. Go to Menu\n\n\n";
           cout << "\tPLEASE ENTER YOUR DESIRED ORDER:\t";
           {
            cin >> drink;
            switch(drink)
            {
            case 0:
            goto ords;
            {
            case 1:
                {
                cout<<"\n\tHOW MANY BOTTLE/S OF COKE DO YOU WANT:\t";
                cin>>qntf;
                f=12;
                s=s+f*qntf;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER COKE : 12 pesos / bottle\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntf << " BOTTLE/S OF COKE" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
               case 2:
               {
                cout<<"\n\tHOW MANY BOTTLE/S OF ROYAL DO YOU WANT:\t";
                cin>>qntg;
                g=12;
                s=s+g*qntg;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER ROYAL : 12 pesos / bottle\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntg << " BOTTLE/S OF ROYAL" << " IS SUCCESSFULLY SAVED\n";
               }
               break;
            }
            {
                case 3:
                {
                cout<<"\n\tHOW MANY BOTTLE/S OF SPRITE DO YOU WANT:\t";
                cin>>qnth;
                h=12;
                s=s+h*qnth;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER SPRITE : 12 pesos / bottle\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qnth << " BOTTLE/S OF SPRITE" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
                case 4:
                {
                cout<<"\n\tHOW MANY BOTTLE/S OF PEPSI DO YOU WANT:\t";
                cin>>qnti;
                i=12;
                s=s+i*qnti;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER PEPSI : 12 pesos / bottle\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qnti << " BOTTLE/S OF PEPSI" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            {
                case 5:
                {
                cout<<"\n\tHOW MANY BOTTLE/S OF MOUNTAIN DEW DO YOU WANT:\t";
                cin>>qntj;
                j=15;
                s=s+j*qntj;
                cout<<"\n\n\t\t\t\t\t\t\t\tYOU ORDER MOUNTAIN DEW : 15 pesos / bottle\n";
                cout<<"\n\t\t\t\t\t\t\tYOUR ORDER OF " << qntj << " BOTTLE/S OF MOUNTAIN DEW" << " IS SUCCESSFULLY SAVED\n";
                }
                break;
            }
            default:
            cout << "Invalid choice, choose another DRINKS.";
            }
           }
            cout << "\n\n\t\t\t\t\t\t\tWOULD YOU LIKE TO TO ORDER ANOTHER DRINKS? (Y or N)\t";
            cin >> cont;
       }while(cont != 'N');
}
break;
}
default:
cout << "Invalid choice, choose another OPTION ABOVE.";
}
}
cout<<"\n\t\t\t\t\t\t\tDO YOU WANT TO TAKE ANOTHER ORDER FROM THE MENU (Y or N):\t";
cin >> cont;
}while(cont == 'Y');
    if (cont == 'N');
        {
    system ("cls");
    cout << "\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         GRAYHAWKS STORE      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::                              :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\t";
    cout << "\n\n\n\tWHERE WOULD YOU LIKE TO EAT? DINE-IN OR TAKE-OUT (D/T):\t";
    cin >> dntk;
    cout << "\n\n\tTHE SUBTOTAL AMOUT: "<< s << " pesos";
    cout << "\n\n\tENTER THE AMOUNT OF PAYMENT: \t";
    cin >> pm;
    cout <<"\n\n\t\t\tLOADING";
         for(int a=1;a<4;a++)
        {
            Sleep(500);
            cout << ".";
        }
    system ("cls");
    docx:
    cout << "\n\n\n\t\t\t\t\t\t\t\t ================================================\n";
    cout << "\t\t\t\t\t\t\t\t |             GRAYHAWKS RES. RECEIPT           |\n";
    cout << "\t\t\t\t\t\t\t\t ================================================\n\n\n";
    cout << "\t\t\t\t\t\t\t\t Bill No : CP5123            Order # : NB1323673\n\n";
    cout << "\n\t\t\t\t\t\t\t\t Customer Name: VAX JAMES VAX";
    cout << "\n\t\t\t\t\t\t\t\t Date and Time:\t" << dt;
    cout << "\t\t\t\t\t\t\t\t Cashier :    VAXENITY";
    cout << "\n\t\t\t\t\t\t\t\t . . . . . . . . . . . . . . . . . . . . . . . .";
    if (dntk == "D")
    {
        cout << "\n\n\t\t\t\t\t\t\t\t DINE-IN";
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\t\t TAKE-OUT";
    }
    cout << "\n\n\t\t\t\t\t\t\t\t ITEMS        UNIT PRICE    QUANTITY   SUBTOTAL";
    switch (dish)
    {
    case 1:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t PORK ADOBO       " << a << "\t       " << qnta << "         " << a*qnta;
        }
        break;
    case 2:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t BULALO           " << b << "\t       " << qntb << "         " << b*qntb;
        }
        break;
    case 3:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t BATANGAS LOMI    " << c << "\t       " << qntc << "         " << c*qntc;
        }
        break;
    case 4:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t KARE KARE        " << d << "\t       " << qntd << "         " << d*qntd;
        }
        break;
    case 5:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t CHICKEN CURRY    " << e << "\t       " << qnte << "         " << e*qnte;
        }
        break;
    }
    switch (dessert)
    {
    case 1:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t HALO HALO        " << k << "\t       " << qntk << "         " << k*qntk;
        }
        break;
    case 2:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t BANANAQ          " << l << "\t       " << qntl << "         " << l*qntl;
        }
        break;
    case 3:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t CHEESE CAKE      " << o << "\t       " << qnto << "         " << o*qnto;
        }
        break;
    case 4:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t ICE CREAM        " << m << "\t       " << qntm << "         " << m*qntm;
        }
        break;
    case 5:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t SCRAMBLE         " << n << "\t       " << qntn << "         " << n*qntn;
        }
        break;
    }
    switch (drink)
    {
    case 1:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t COKE             " << f << "\t       " << qntf << "         " << f*qntf;
        }
        break;
    case 2:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t ROYAL            " << g << "\t       " << qntg << "         " << g*qntg;
        }
        break;
    case 3:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t SPRITE           " << h << "\t       " << qnth << "         " << h*qnth;
        }
        break;
    case 4:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t PEPSI X          " << i << "\t       " << qnti << "         " << i*qnti;
        }
        break;
    case 5:
        {
            cout << "\n\n\t\t\t\t\t\t\t\t MOUNTAIN DEW     " << j << "\t       " << qntj << "         " << j*qntj;
        }
        break;
    }
    cout << "\n\t\t\t\t\t\t\t\t . . . . . . . . . . . . . . . . . . . . . . . .";
    cout << "\n\n\t\t\t\t\t\t\t\t SUBTOTAL AMOUT   :                   "<< s << " pesos";
    cout << "\n\t\t\t\t\t\t\t\t SERVICE CHARGE   :                   "<< sc << " pesos";
    cout << "\n\n\t\t\t\t\t\t\t\t TOTAL AMOUT      :                   "<< s+sc << " pesos";
    cout << "\n\n\t\t\t\t\t\t\t\t YOUR PAYMENT     :                   " << pm << " pesos";
    cout << "\n\t\t\t\t\t\t\t\t YOUR CHANGE      :                   "<< pm-(s+sc)  << " pesos";
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t   THANK YOU ";
    cout << "\n\t\t\t\t\t\t\t\t=================================================\n\n";
        }

    ofstream docxs;
    docxs.open("Grayhawks receipt.text", ios_base :: app);

    if (docxs.is_open());
    {
    docxs.clear();
    docxs << "\n\n\n ================================================\n";
    docxs << " |             GRAYHAWKS RES. RECEIPT           |\n";
    docxs << " ================================================\n\n\n";
    docxs << "Bill No : CP5123            Order # : NB1323673\n\n";
    docxs << "\n Customer Name: VAX JAMES VAX";
    docxs << "\n Date and Time:\t" << dt;
    docxs << " Cashier :  VAXENITY";
    docxs << "\n . . . . . . . . . . . . . . . . . . . . . . . .";
    if (dntk == "D")
    {
        docxs << "\n\n DINE-IN";
    }
    else
    {
        docxs << "\n\n TAKE-OUT";
    }
    docxs << "\n\n ITEMS        UNIT PRICE    QUANTITY   SUBTOTAL";
    switch (dish)
    {
    case 1:
        {
            docxs << "\n\n PORK ADOBO       " << a << "\t       " << qnta << "         " << a*qnta;
        }
        break;
    case 2:
        {
            docxs << "\n\n BULALO           " << b << "\t       " << qntb << "         " << b*qntb;
        }
        break;
    case 3:
        {
            docxs << "\n\n BATANGAS LOMI    " << c << "\t       " << qntc << "         " << c*qntc;
        }
        break;
    case 4:
        {
            docxs << "\n\n KARE KARE        " << d << "\t       " << qntd << "         " << d*qntd;
        }
        break;
    case 5:
        {
            docxs << "\n\n CHICKEN CURRY    " << e << "\t       " << qnte << "         " << e*qnte;
        }
        break;
    }
    switch (dessert)
    {
    case 1:
        {
            docxs << "\n\n HALO HALO        " << k << "\t       " << qntk << "         " << k*qntk;
        }
        break;
    case 2:
        {
            docxs << "\n\n BANANAQ          " << l << "\t       " << qntl << "         " << l*qntl;
        }
        break;
    case 3:
        {
            docxs << "\n\n CHEESE CAKE      " << o << "\t       " << qnto << "         " << o*qnto;
        }
        break;
    case 4:
        {
            docxs << "\n\n ICE CREAM        " << m << "\t       " << qntm << "         " << m*qntm;
        }
        break;
    case 5:
        {
            docxs << "\n\n SCRAMBLE         " << n << "\t       " << qntn << "         " << n*qntn;
        }
        break;
    }
    switch (drink)
    {
    case 1:
        {
            docxs << "\n\n COKE             " << f << "\t       " << qntf << "         " << f*qntf;
        }
        break;
    case 2:
        {
            docxs << "\n\n ROYAL            " << g << "\t       " << qntg << "         " << g*qntg;
        }
        break;
    case 3:
        {
            docxs << "\n\n SPRITE           " << h << "\t       " << qnth << "         " << h*qnth;
        }
        break;
    case 4:
        {
            docxs << "\n\n PEPSI X          " << i << "\t       " << qnti << "         " << i*qnti;
        }
        break;
    case 5:
        {
            docxs << "\n\n MOUNTAIN DEW     " << j << "\t       " << qntj << "         " << j*qntj;
        }
        break;
    }
    docxs << "\n . . . . . . . . . . . . . . . . . . . . . . . .";
    docxs << "\n\n SUBTOTAL AMOUT   :                   "<< s << " pesos";
    docxs << "\n SERVICE CHARGE   :                   "<< sc << " pesos";
    docxs << "\n\n TOTAL AMOUT      :                   "<< s+sc << " pesos";
    docxs << "\n\n YOUR PAYMENT     :                   " << pm << " pesos";
    docxs << "\n YOUR CHANGE      :                   "<< pm-(s+sc)  << " pesos";
    docxs << "\n\n   THANK YOU ";
    docxs << "\n=================================================\n\n";
    docxs.close();
    }


}
