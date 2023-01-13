#include <iostream>
#include <ctime>

int main() {
  srand(time(0));
  int num=(rand()%3+1);
  std::cout<<num<<'\n';
  switch(num){
    case 1:
     std::cout<<"Have a break\n";
    break;
    case 2:
     std::cout<<"You got a free meal\n";
    break;
    case 3:
     std::cout<<"Meow\n";
    break;
  }  
  return 0;
}
