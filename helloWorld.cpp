#include <iostream>
#include <string>
#include "helloWorld.h"

using namespace std;

// constructor
Message::Message(){
  message = "HELLO WORLD!";
}

// accessor
string Message::get_message() const{
  return this->message;
}

int main(){
  Message HelloWorld;
  cout << HelloWorld.get_message() << "\n";
  return 0;
}