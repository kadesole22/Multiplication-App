/*
 Author : Kade Sole
 Program : hw8, q4
 Date Created : April 14th 2023
 Date Last Modified : April 14th 2023
 Problem :Write a program that helps an elementary school student learn multiplication. Use rand to produce
two positive one-digit integers. It should then type a question such as
How much is 6 times 7?
1) call the random function to produce 2 one digit numbers that are positive. 2)use a cout statement to display a print line to user asking what those 2 are multiplied togethre
3) calculate what the product of the numbers are and compare it to what user input was 4) if user input matches result print a random statement in the correct catagory
5) if results done match, print a random answer from the incorrect category
*/

#include<iostream>
using namespace std;

int main()
{   //Variable Decleration
    int x,y,result,num;
    int r;
    //While loop that runs until user enters -1
    while(1)
    {   cout << "Enter -1 to End.";
        //Generate random one digit numbers
        x=rand()%10+1;
        y=rand()%10+1;
        //Ask user what x * y is
        cout<<"\nHow Much is "<<x<<" times "<<y<<" (-1 to exit) ? ";
        cin>>num;
        result=x*y;
        //If user enters -1 exit
        if(num==-1)
            break;
        //if users input is the same as result print a random one of these statements
        else if(num==result)
        {
            r=rand()%4+1;
            switch(r)
            {   //Correct category
                case 1:
                    cout<<"\nNice Work!\n";
                    break;
                case 2:
                    cout<<"\nExcellent!\n";
                    break;
                case 3:
                    cout<<"\nVery Good!\n";
                    break;
                case 4:
                    cout<<"\nKeep Up the Good Work!\n";
                    break;
            }
        } //end else if
        //If user enters a different input than result print a random one of these statements
        else
        {
            r=rand()%4+1;
            switch(r)
            {   //Incorrect category
                case 1:
                    cout<<"\nNo. Please try again.\n";
                    break;
                case 2:
                    cout<<"\nWrong. Try once more.\n";
                    break;
                case 3:
                    cout<<"\nDon't give up.\n";
                    break;
                case 4:
                    cout<<"\nNot really, keep trying.\n";
                    break;
            }
        } //end else if
    } //end loop
    system("pause");
    return 0;
}

