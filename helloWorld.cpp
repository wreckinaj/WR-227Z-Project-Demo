#include <iostream>
#include <string>
#include "helloWorld.h"

using namespace std;

Message::Message(){
  message = "HELLO WORLD!";
}

string Message::get_message() const{
  return this->message;
}

int main(){
  Message HelloWorld;
  cout << HelloWorld.get_message() << "\n";
  return 0;
}