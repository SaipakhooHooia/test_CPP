#include <iostream>

void hello(std::string name,int age);

int main() {
  std::string name="Midori";
  int age=25;
  hello(name,age);
  hello(name,age);
  hello(name,age);
}

void hello(std::string name,int age){
  std::cout<<"Hello "<<name<<'\n';
  std::cout<<"You are "<<age<<" years old.\n";
  std::cout<<"Welcome home\n\n";
}
