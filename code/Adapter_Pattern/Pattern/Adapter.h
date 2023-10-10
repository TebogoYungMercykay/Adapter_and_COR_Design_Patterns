#pragma once
#include "TargetORM.h"
#include "AdapterService.h"

class Adapter : public TargetORM {
    private:
        AdapterService* adapterService;
        std::string translate_query(const std::string& query);

    public:
        Adapter(AdapterService* a);
        std::string execute_query(const std::string& query);
};
