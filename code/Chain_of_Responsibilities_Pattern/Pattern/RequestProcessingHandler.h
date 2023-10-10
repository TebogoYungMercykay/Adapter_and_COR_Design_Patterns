#pragma once
#include "AuthenticationHandler.h"

class RequestProcessingHandler : public AuthenticationHandler {
    public:
        void handle_request(const std::string& request);
};
