// X AND O GAME (PROGRAMMED BY "KUSHAGRA AGARWAL" )
#include<iostream>
#include<windows.h> //include if using windows pc
using namespace std;

void instructions();                                                                          //PROTOTYPE 1
void game_logic();                                                                          //PROTOTYPE 2

int main()
{
    system("color Cf"); //include if using windows pc
    game_logic();                                                                              //FUNCTION 2
    return 0;
}








void instructions()                                                                           //FUNCTION 1
{
    string rc [3][3];
    rc[0][0]=" ";rc[0][1]=" ";rc[0][2]=" ";rc[1][0]=" ";rc[1][1]=" ";rc[1][2]=" ";rc[2][0]=" ";rc[2][1]=" ";rc[2][2]=" ";
    printf("\t\t\t\t\t       \"INSTRUCTION FOR GAME PLAY\"\n");
    printf("\n\n\t\t\t\t       First Of All, This Is A Multiplayer Game\n");
    printf("\t\t      What Is Row And Column:- Row Is Horizontal line & Column Is Vertical Line\n");
    printf("\t\t\t    You Will Be Asked To Enter \'X\' Or \'O\' In Which Row And Column\n\n");
    cout<<"\n\n\n\t\t\t 1 || 2 || 3 \t\t\t\t\t      "<<rc[0][0]<<" || "<<rc[0][1]<<" || "<<rc[0][2]<<"\n\t\t\t===||===||===\t\t\t\t\t     ===||===||===\n\t\t\t 4 || 5 || 6   \t\t\t=>\t\t      "<<rc[1][0]<<" || "<<rc[1][1]<<" || "<<rc[1][2]<<"\t\t\t\n\t\t\t===||===||===\t\t\t\t\t     ===||===||===\n\t\t\t 7 || 8 || 9 \t\t\t\t\t      "<<rc[2][0]<<" || "<<rc[2][1]<<" || "<<rc[2][2]<<"\n";
    printf("\n\t\t\t\t\t    You Have To Enter in \"1\" Format\n");
    printf("\nAre You Ready To Play!!\n");
    system("PAUSE");
}
void game_logic()                                                                           //FUNCTION 2
{
    string start;//start for asking yes or no
    string rc [3][3];
        instructions();                                                                           // INSTRUCTIONS FOR GAMEPLAY
        
        rc[0][0]=" ";rc[0][1]=" ";rc[0][2]=" ";rc[1][0]=" ";rc[1][1]=" ";rc[1][2]=" ";rc[2][0]=" ";rc[2][1]=" ";rc[2][2]=" ";
        string ready="yes";//ready for starting the game

                    system("CLS");
                            do
                            {
                                        rc[0][0]=" ";rc[0][1]=" ";rc[0][2]=" ";rc[1][0]=" ";rc[1][1]=" ";rc[1][2]=" ";rc[2][0]=" ";rc[2][1]=" ";rc[2][2]=" ";
                                        printf("\t\t\t\t\t\t      \"X & O GAME\"\n\n");
                                        int x=0;
                                        string inputxo;
                                        string dec;
                                        cout<<" 1 || 2 || 3 \t\t\t\t\t      "<<rc[0][0]<<" || "<<rc[0][1]<<" || "<<rc[0][2]<<"\n===||===||===\t\t\t\t\t     ===||===||===\n 4 || 5 || 6   =>\t\t\t\t      "<<rc[1][0]<<" || "<<rc[1][1]<<" || "<<rc[1][2]<<"\n===||===||===\t\t\t\t\t     ===||===||===\n 7 || 8 || 9 \t\t\t\t\t      "<<rc[2][0]<<" || "<<rc[2][1]<<" || "<<rc[2][2]<<"\n";
                                        for (int i=1;i<=9;i++)
                                            {
                                                if (i%2==0)
                                                    {
                                                        dec="O";
                                                        
                                                    }     
                                                else
                                                    {
                                                        dec="X";
                                                    }
                                                cout<<"\nEnter Where To Enter '"<<dec<<"' (Eg:- 1) :   \t ========\""<<dec<<"\" TURN========"<<endl;
                                                cin>>inputxo;
                                                    while(inputxo!="1" && inputxo!="2" && inputxo!="3" && inputxo!="4" && inputxo!="5" && inputxo!="6" && inputxo!="7" && inputxo!="8" && inputxo!="9" )
                                                        {
                                                            cout<<"Wrong Input!!, Reneter Where To Enter "<<dec<<" : "<<endl;
                                                            cin>>inputxo;
                                                        }
//                                                system("CLS");
                                                    if(inputxo=="1" && rc[0][0]!="X" && rc[0][0]!="O")
                                                        rc[0][0]=dec;
                                                    else if(inputxo=="2" && rc[0][1]!="X" && rc[0][1]!="O")
                                                        rc[0][1]=dec;
                                                    else if(inputxo=="3" && rc[0][2]!="X" && rc[0][2]!="O")
                                                        rc[0][2]=dec;
                                                    else if(inputxo=="4" && rc[1][0]!="X" && rc[1][0]!="O")
                                                        rc[1][0]=dec;
                                                    else if(inputxo=="5" && rc[1][1]!="X" && rc[1][1]!="O")
                                                         rc[1][1]=dec;
                                                    else if(inputxo=="6" && rc[1][2]!="X" && rc[1][2]!="O")
                                                        rc[1][2]=dec;
                                                    else if(inputxo=="7" && rc[2][0]!="X" && rc[2][0]!="O")
                                                        rc[2][0]=dec;
                                                    else if(inputxo=="8" && rc[2][1]!="X" && rc[2][1]!="O")
                                                        rc[2][1]=dec;
                                                    else if(inputxo=="9" && rc[2][2]!="X" && rc[2][2]!="O")
                                                        rc[2][2]=dec;
                                                    else
                                                        {
                                                            cout<<"\nThe Place "<<inputxo<<" Is Already Taken";
                                                            --i;
                                                            continue;
                                                        }
                                                        system("cls");
                                                    printf("\t\t\t\t\t\t      \"X & O GAME\"\n\n");
                                                    cout<<" 1 || 2 || 3 \t\t\t\t\t      "<<rc[0][0]<<" || "<<rc[0][1]<<" || "<<rc[0][2]<<"\n===||===||===\t\t\t\t\t     ===||===||===\n 4 || 5 || 6   =>\t\t\t\t      "<<rc[1][0]<<" || "<<rc[1][1]<<" || "<<rc[1][2]<<"\n===||===||===\t\t\t\t\t     ===||===||===\n 7 || 8 || 9 \t\t\t\t\t      "<<rc[2][0]<<" || "<<rc[2][1]<<" || "<<rc[2][2]<<"\n";
                                                    if(i>4)
                                                        {
                                                            if((rc[0][0]=="X" && rc[0][2]=="X" && rc[0][1]=="X") || (rc[1][0]=="X" && rc[1][2]=="X" && rc[1][1]=="X") || (rc[2][0]=="X" && rc[2][2]=="X" && rc[2][1]=="X") || (rc[0][0]=="X" && rc[2][2]=="X" && rc[1][1]=="X") || (rc[0][0]=="X" && rc[2][0]=="X" && rc[1][0]=="X") || (rc[0][1]=="X" && rc[2][1]=="X" && rc[1][1]=="X") || (rc[0][2]=="X" && rc[2][2]=="X" && rc[1][2]=="X") || (rc[0][2]=="X" && rc[2][0]=="X" && rc[1][1]=="X") )
                                                                {
                                                                    x=1;
                                                                    printf("\n\n\t\t\t\t\t\t    CONGRATULATIONS!!\n\t\t\t\t\t\t\t X WON\n");       
                                                                    break;
                                                                }
                                                            else if((rc[0][0]=="O" && rc[0][2]=="O" && rc[0][1]=="O") || (rc[1][0]=="O" && rc[1][2]=="O" && rc[1][1]=="O") || (rc[2][0]=="O" && rc[2][2]=="O" && rc[2][1]=="O") || (rc[0][0]=="O" && rc[2][2]=="O" && rc[1][1]=="O") || (rc[0][0]=="O" && rc[2][0]=="O" && rc[1][0]=="O") || (rc[0][1]=="O" && rc[2][1]=="O" && rc[1][1]=="O") || (rc[0][2]=="O" && rc[2][2]=="O" && rc[1][2]=="O") || (rc[0][2]=="O" && rc[2][0]=="O" && rc[1][1]=="O") )
                                                                {
                                                                    x=2;
                                                                    printf("\n\n\t\t\t\t\t\t   CONGRATULATIONS!!\n\t\t\t\t\t\t\t O WON\n");
                                                                    break;
                                                                }             
                                                        }
                                            }
                                        if(x!=1 && x!=2)
                                        printf("\n\n\t\t\t\t\t\t       TIE MATCH\n");
                                        printf("\n\n\n\n================================================== Thanks For Playing!! ================================================\n");
                                        printf("\nDo You Want To Play Again(Write yes Or no In Lower Case) :\n");
                                        cin>>ready;
                                        while(ready!="yes" && ready!="no" && ready!="YES" && ready!="NO")
                                            {
                                                printf("Do You Want To Play Again(Write yes Or no In Lower Case) :\n");
                                                cin>>ready;
                                            }
                                        system("CLS");
                                    
                            }while(ready!="no" && ready!="NO");
             
} //end of int game_logic()