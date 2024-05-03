#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <string>

using namespace std;

class Message{
  private:
    string message;
  public:
    Message();
    string get_message() const;
};

#endif