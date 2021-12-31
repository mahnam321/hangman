#include <iostream>
#include <string>
#include<stdlib.h>
#include<time.h>
using namespace std;
void printhead()
{
 cout<<"+-----------------------------+"<<endl;
 cout<<"+          HANG  MAN          +"<<endl;
 cout<<"+-----------------------------+"<<endl;
 
}
 void printhangman(int position)
 {
switch(position)
       {	
          case 0: 
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |         " <<endl;
            cout << "_|______________"<<endl; 
     break;      
     case 1:       cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 " <<endl;
            cout << "_|______________"<<endl;     
     break;
     case 2:       
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << "_|______________"<<endl;
     break;      
     case 3:
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << " |         |"<<endl;
            cout << "_|______________"<<endl;
     break;       
     case 4:
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << " |         |"<<endl;
            cout << " |        /  "<<endl;
            cout << "_|______________"<<endl;
     break;       
     case 5:  
            cout << " ___________"<<endl;
            cout << " |         }"<<endl;
            cout << " |       \\ 0 /" <<endl;
            cout << " |         |"<<endl;
            cout << " |        / \\ "<<endl;
            cout << "_|______________"<<endl;
     }    
 }
 int letterfill(char guess,string secretword,string &guessword)
{
int i;
int matches=0;
int len= secretword.length();
for(i=0;i<len;i++)
{
if(guess==guessword[i])
return 0;
if (guess == secretword[i])
{
guessword[i] = guess;
matches++;
}
}
return matches;
}

int main()
{
MENU:
	cout<<"Project by : Mahnam Nasir 190770"<<endl;
	cout<<"Project by : Usama Gul    190796"<<endl;
	int score=0;
	printhead();
printhangman(5);
int select;
cout<<"\tMENU"<<endl;
      cout<<"1: Play Game "<<endl; 
      cout<<"2: How to play"<<endl;
      cout<<"3: Quit "<<endl;
      cout<<" you pick :"<<endl;
cin>>select;
 switch(select)
 { 
 case 1:
 { 
	 srand(time(0));
   cout<<"game begins "<<endl;
   const int max=5;
  string name;
  char letter;
  int wrong =0;
  string word;
  string words[]={"hindi","urdu","english","french","chinese","spanish","arabic","bengali","russian","japanese","korean","telugu","turkish","tamil","spanish"};
  int n=(rand()%15);
  word=words[n];
  string unknown(word.length(),'-');
  cout<<"welcome to hangman!!\n";
  cout<<"lives:"<<max<<"\t\t\t\t"<<"wrong guess: "<<wrong<<endl;
  cout<<"hint  the word is one type of language "<<endl;
  char giveup;
  while(wrong<max)
  {     cout<<"guess the word"<<endl;
        cout<<unknown<<endl;
  
      cin>>letter;
      if(letterfill(letter,word,unknown)==0)
      {
		
       cout<<endl<<"you entered wrong"<<endl;
      printhangman(wrong);
	  cout<<"want to give up press 'y'otherwise press'n' "<<endl;
      cin>>giveup;
      while(giveup!='y'&& giveup!='Y'&& giveup!='n'&& giveup!='N')  
	  { cout<<"invalid input enter valid value "<<endl;
	  cin>>giveup;
	  } 
	  if(giveup=='y'||giveup=='Y')
          {
			  cout << "You gave up!"<<endl;
              cout<<" the word is :"<<word<<endl;
			 system("pause");
			  system("CLS");
               goto MENU; 
         } else if (giveup=='n'||giveup=='N')
	  {
           wrong++;
		 }      }
     else
     {
         cout<<"found the letter"<<endl;
         }
 cout<<"\nlives:"<<max-wrong<<"\t\t\t\t wrong guess: "<<wrong<<endl;
 
  if(word==unknown)
  {
	  score=5;
  cout<<word<<endl;
 cout<<"score : "<<score<<endl;
  cout<<"yeahh you won ";
  break;
  }
  }
  if(wrong==max)
  {
  cout<<"you loose"<<endl;
  printhangman(wrong);
  cout<<"the word is "<<word<<endl;
  }
cin.ignore();
cin.get();
system("CLS");
  goto MENU;
  break;
 }
 case 2:
 {
  cout<<" How to play "<<endl;
  cout<<" Hangman is a game of guessing word. "<<endl;
  cout<<" Guess the word letter by letter. If guessed right you win       "<<endl;
  cout<<" if guessed wrong the man will be hanged                   "<<endl;
  cout<<" you have 5 lives                                     "<<endl;
  cout<<" you can give up at any time                              "<<endl;
  system("pause");
  system("CLS");
  goto MENU;
  break;
 }
 case 3:
 { 
     char ch;
  cout<<"  Are you sure to Quit ? "<<endl;
  cout<<"Press y for yes \npress n for no"<<endl;
  cin>>ch;
  while(ch!='y'&& ch!='Y'&& ch!='n'&& ch!='N')
  {
	  cout<<"invalid input enter valid value"<<endl;
	  cin>>ch;
  }
  if(ch=='y'||ch=='Y')
  {
  exit(0);
  } 
  else if(ch=='n'||ch=='N')
  system("pause");
  system("CLS");
  goto MENU;
  break;
 }    
}
}


