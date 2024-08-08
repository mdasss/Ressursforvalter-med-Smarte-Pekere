//
// Created by matda on 08.08.2024.
//

#ifndef RESSURSFORVALTER_UTILITY_HPP
#define RESSURSFORVALTER_UTILITY_HPP
#include <memory>
#include "Resource.hpp"


void display_amout_of_pointers(const std::shared_ptr<Resource>& obj){
    int amount_of_ptrs = obj.use_count();
    std::cout << "The amount of pointers pointing to that object is: " << amount_of_ptrs << std::endl;

}




#endif //RESSURSFORVALTER_UTILITY_HPP
