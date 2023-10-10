#pragma once
#include <string>
#include <iostream>
using namespace std;

class Handler {
    public:
        virtual ~Handler() {}
        void set_next(Handler* next);
        virtual void handle_request(const std::string& request) = 0;
    protected:
        Handler* next_handler;
};
