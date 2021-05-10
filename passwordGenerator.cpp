//Equivalent C++ code

#include<iostream>
#include <ctime>
#include<conio.h>

using namespace std;

int main(){
  string numbers = "0123456789";
  string smallLetters = "abcdefghijklmnopqrstuvwxyz";
  string capitalLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string symbols = "`~!@#$%^&*()_+-={}[]:'.,><?/";
  int length;
  
  string password = "";
  string characters = "";
  char choice;
 
  srand(time(0));

  cout<<endl<<"Enter Length of password ";
  cin>>length;
  cout<<endl<<"Specialized Password(s) or Quick Password(any)?";
  cin>>choice;
  if(choice == 's'){
    cout<<endl<<"Include Numbers?(y/n) ";
    cin>>choice;
    if(choice == 'y'){
      characters += numbers;
    }

    cout<<endl<<"Include SmallLetters?(y/n) ";
    cin>>choice;
    if(choice == 'y'){
      characters += smallLetters;
    }
    
    cout<<endl<<"Include CapitalLetters?(y/n) ";
    cin>>choice;
    if(choice == 'y'){
      characters += capitalLetters;
    }
    
    cout<<endl<<"Include Symbols?(y/n) ";
    cin>>choice;
    if(choice == 'y'){
      characters += symbols;
    }

  }else{
    characters = numbers + smallLetters + capitalLetters + symbols;
  }

  for(int i=0;i<length;i++){
    password += characters[rand() % characters.size()];
  }

  cout<<endl<<endl<<"------------------"
      <<endl<<"Your Password = "<<password;

  getch();
}