#pragma once
#include "AuthenticationHandler.h"

class ProcessRequestHandler : public AuthenticationHandler {
    public:
        void handle_request(const std::string& request);
};
