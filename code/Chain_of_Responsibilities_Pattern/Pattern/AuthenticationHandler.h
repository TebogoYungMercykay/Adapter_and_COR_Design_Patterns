#pragma once
#include <string>
#include <iostream>
using namespace std;

class AuthenticationHandler {
    public:
        virtual ~AuthenticationHandler(){}
        void set_next(AuthenticationHandler* next);
        virtual void handle_request(const std::string& request) = 0;
    protected:
        AuthenticationHandler* next_handler;
};
