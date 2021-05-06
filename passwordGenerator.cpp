//Equivalent C++ code

#include<iostream>
#include<cstring>
#include<cmath>
#include <ctime>

using namespace std;

float random(){
  // current date/time based on current system
  long int t = static_cast<long int> (time(NULL));
  float randNum = fmod(t*3.141592653589793238 , 1);
  return randNum;
}

void generateCharacters(char choice[],char *p){
  float r=random()*(strlen(choice)+1);
  *p = choice[int(r)];
}


int main(){
  char password[] = "k";
  char characters[] = "";
  char *p;
  char numbers[] = "0123456789";
  char smallLetters[] = "abcdefghijklmnopqrstuvwxyz";
  char capitalLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char symbols[] = "`~!@#$%^&*()_+-={}[]:'.,><?/";
  int length=3,i;

  for(i=0;i<length;i++){
    generateCharacters(numbers,p);
    p[1]='\0';
    strcat(characters,p);

    generateCharacters(smallLetters,p);
    p[1]='\0';
    strcat(characters,p);

    generateCharacters(capitalLetters,p);
    p[1]='\0';
    strcat(characters,p);

    generateCharacters(symbols,p);
    p[1]='\0';
    strcat(characters,p);

    cout<<i;
    // float r=random()*(4);
    // cout<<endl<<"hey "<<r;
    // cout<<endl<<characters[int(random() * length)];
  }

  // strcpy(password,p);
  // password[length]='\0';
  // cout<<endl<<"Password = "<<password;
}