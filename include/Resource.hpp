//
// Created by matda on 08.08.2024.
//

#ifndef RESSURSFORVALTER_MED_SMARTE_PEKERE_RESOURCE_HPP
#define RESSURSFORVALTER_MED_SMARTE_PEKERE_RESOURCE_HPP

#include <string>
#include <memory>
#include <iostream>

class Resource {

private:
    std::string resource_name_;


public:

    void display_when_used() const{
        std::cout << "The " << get_name() <<" resource is being used" << '\t';
    }
    Resource& change_name_uniuqe(){
        std::string new_name;
        if(std::cin>>new_name) {
            this->resource_name_ = new_name;
            return *this;
        }
    }
    Resource& change_name_shared(){
        std::string new_name;
        if(std::cin>>new_name) {
            this->resource_name_ = new_name;
            return *this;
        }
    }


    std::string get_name() const{
        return this->resource_name_;
    }



    explicit Resource(std::string resource_name):
        resource_name_(resource_name) {std::cout << "Resource body is being created and is called: " << get_name()<< std::endl;}
    ~Resource(){std::cout << "The " << get_name()<< "resource has been made free." << std::endl;}
};


#endif //RESSURSFORVALTER_MED_SMARTE_PEKERE_RESOURCE_HPP
