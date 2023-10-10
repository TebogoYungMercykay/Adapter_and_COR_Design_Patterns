#pragma once
#include "Handler.h"

class ProcessRequestHandler : public Handler {
    public:
        void handle_request(const std::string& request);
};
