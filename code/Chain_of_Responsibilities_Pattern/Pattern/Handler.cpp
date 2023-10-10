#include <string>
#include <iostream>
using namespace std;

#include "Handler.h"

void Handler::set_next(Handler* next){
    this->next_handler = next;
}
