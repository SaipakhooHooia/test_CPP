#include <iostream>
#include <ctime>

int main() {
  srand(time(NULL));
  int num;
  int tries=0;
  int guess;
  num=rand()%99+1;
  do{
    std::cout<<"Guess a number between 1 and 99: ";
    std::cin>>guess;
    if(guess>num){
      std::cout<<"Too High!\n";
      tries+=1;
    }
    else if(guess<num){
      std::cout<<"Too Low!\n";
      tries+=1;
    }
    else{
      tries+=1;
      std::cout<<"Right answer~\n";
      std::cout<<"You have tried "<<tries<<" times.\n";
    }
  }while(guess!=num);}
