/*

    Multi Turbo Tools Free open source 2017 ©
    developed by: ColerFs Studios
    author: @mozzxp

    content >>

    1- Calculator;
    2- Draw shapes;
    3- random numbers;
    4- Area Calculator;

    end content >>
*/

#include<iostream>
#include<string>
#include<ctime>
#include <cstdlib>
#include <cwchar>
using namespace std;

void startProgram();
void options();


int main()
{
    startProgram();

    options();


    //-------------//
    //system("pause");
    return 0;
}


void startProgram(){
    cout << "\n\n>> Welcome to the Multi Turbo Tools Program\n\n";
    cout << ">> Multi Turbo Tools is a multi tools for any developer" <<endl;
    cout << ">> choose one of these options\n" << endl;
}

void options(){
    cout << "1 >> Calculator" <<endl;
    cout << "2 >> Draw shapes" <<endl;
    cout << "3 >> Random numbers" <<endl;
    cout << "4 >> Area Calculator" <<endl;
    cout << "5 >> Credits" <<endl;
    cout << "6 >> Exit\n" <<endl;

    cout << ">> Enter a number to get into the tool: ";

    while(true){
        int options;
        cin >> options;

        if(!options){
            break;
        }else{

            if(options == 1){
                cout << "\nWelcome to the calculator!\n";
                cout << "Enter the first  number to calculate: ";
                float fn;
                cin >> fn;

                cout << "Enter the second number to calculate: ";
                float sn;
                cin >> sn;

                if(!sn || !fn){
                    cout << "Error invald number";
                    break;
                }else{
                    cout << "\n\nResults \n\n";

                    cout << fn << " + " << sn << " = " << fn+sn; cout << "\n";
                    cout << fn << " - " << sn << " = " << fn-sn; cout << "\n";
                    cout << fn << " * " << sn << " = " << fn*sn; cout << "\n";
                    cout << fn << " / " << sn << " = " << fn/sn; cout << "\n";

                };

                for(int s=1; s<=25; s++){
                    cout <<"-";
                }
                cout << "\n>> Enter a number to get into the tool: ";
            }

            if(options == 2){
                cout << "\nWelcome to the shapes generator\n";
                cout << "\nwhat you want to drow ?\n\n";
                cout << "1 >> Rectangle\n";
                cout << "2 >> Triangle\n";

                int opn2Options;

                cin >> opn2Options;

                if(opn2Options == 1){
                    cout << "\nenter the hegiht of Rectangle: ";
                    int sq;
                    cin >> sq;
                    for(int sqd; sqd<=sq; sqd++){
                        cout << "***************\n";
                    }
                }else if(opn2Options == 2){
                    cout << "\nenter the range of triangle: ";
                    int i,j,rows;
                    cin>>rows;
                    for(i=1;i<=rows;i++)
                    {
                        for(j=1;j<=i;++j)
                        {
                           cout<<"* ";
                        }
                        cout<<"\n";
                    }
                }
            }
                    cout << "\n>> Enter a number to get into the tool: ";

            }

            if(options == 3){
                cout << "\nWelcome to the random number generator\n";
                cout << "there are a 10 random numbers for you ... \n\n";

                for(int rando=1; rando<=10;rando++){
                    cout << rand() << endl;
                }
                cout << "\n>> Enter a number to get into the tool: ";
            }

            if(options == 4){
                cout << "\n\nWelcome to the area calculator program\n\n";
                cout << "choose between them :\n\n";
                cout << "1- >> Scuare area\n";
                cout << "2- >> Rectangle area\n";
                int areaCalculatorUserOptions;
                cin >> areaCalculatorUserOptions;
                if(areaCalculatorUserOptions == 1){
                    float const t = 3.14;
                    float halfRad;
                    cout << "enter the half radius of circle : ";
                    cin >> halfRad;
                    cout << "\nthe circle area is : "<<t*halfRad*halfRad<<"\n\n";
                }else if(areaCalculatorUserOptions == 2){
                    float tarX,tarY;
                    cout << "enter the Rectangle width: ";
                    cin >> tarX;

                    cout << "enter the Rectangle height: ";
                    cin >> tarY;

                    cout << "\nthe Rectangle area is : " << 2*(tarX+tarY)<<"\n\n";
                }
                 cout << ">> Enter a number to get into the tool: ";

            }

            if(options == 5){
                cout << "\n\n\t\tCredits\n\n";
                cout << "Multi Turbo Tools Copyright 2017 ©\n";
                cout << "developed by: ColerFs Studios\n";
                cout << "author: @mozzxp\n\n";

                cout << ">> Enter a number to get into the tool: ";
            }
            if(options == 6) break;

        }

    }
//---------------------------------------------------------------------------//
