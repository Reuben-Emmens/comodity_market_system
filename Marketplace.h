#ifndef GUARD_Marketplace_h
#define GUARD_Marketplace_h

#include <string>
#include <map>

#include "Order.h"

class Marketplace {

  private: 
    // TYPES 
    typedef void(Marketplace::*funcPtr)(const std::string& dealerId,
                                        const std::vector<std::string>& params);

    // DATA
    std::map<int, Order> orders;
    std::map<std::string, funcPtr> fmap;
    

  public:
    // CREATORS
    Marketplace();

    // MANIPULATORS
    void call(const std::string&              dealerId, 
              const std::string&              functionName, 
              const std::vector<std::string>& params); 

    void post(const std::string&              dealerId, 
              const std::vector<std::string>& params);

    void revoke(const std::string&              dealerId, 
                const std::vector<std::string>& params);

    void aggress(const std::string&              dealerId, 
                 const std::vector<std::string>& params);

    // ACCESSORS 
    void list(const std::string&              dealerId, 
              const std::vector<std::string>& params);

    void check(const std::string&              dealerId, 
               const std::vector<std::string>& params);
};

#endif