#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include "iostream"
using namespace std;
/*
bool isValidLogin(char name[], char pass[])
{
    if(strcmp(name, "leo")==0 && strcmp(pass, "hansel")==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char**argv)
{   
    cout<<"\nBanking Application.\n";
    cout<<"\nWelcome to the Bank ATM service.";
    cout<<"\nPlease enter your username and password to enter the system.\n";
    cout<<"Your username and password should be maximum 10 characters long.\n";

    while(true)
    { 
        int authentication(0);
        char cUsername[10], cPassword[10];
        puts("\nEnter username: ");
        if(fgets(cUsername,10,stdin) == NULL)
        {
            cout<<"\nPlease enter a valid username.\n";
            continue;
        }
        fflush(stdin);
        puts("\nEnter password : ");
        if(fgets(cPassword,10,stdin)== NULL)
        {
            cout<<"\nPlease enter a valid password.\n";
            continue;
        }
        fflush(stdin);
        cUsername[strlen(cUsername)-1]='\0';
        cPassword[strlen(cPassword)-1]='\0';
        if(isValidLogin(cUsername, cPassword))
        { 
            authentication = 1;
        }
        if(authentication)
        { 
            printf("\nAccess granted \n You can access your account now.\n");    
            printf("------------------------------------------------------\n"); 
        } 
        else 
        { 
            printf("\nInvalid username or/and password.\n");
            printf("-------------------------------------\n"); 
            fflush(stdin);
        }
    }
    return 0;
}*/
