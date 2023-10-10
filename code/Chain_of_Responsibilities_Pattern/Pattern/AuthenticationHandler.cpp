#include <string>
#include <iostream>
using namespace std;

#include "AuthenticationHandler.h"

void AuthenticationHandler::set_next(AuthenticationHandler* next){
    this->next_handler = next;
}
