//
// Created by matda on 08.08.2024.
//
#include "Resource.hpp"
#include "Utility.hpp"

int main(){
    std::unique_ptr<Resource> ptr_res {new Resource{"Name_unique_1"}};

    // or

    std::unique_ptr<Resource> ptr_res_2 = std::make_unique<Resource>("Name_unique_2"); // more efficient

    ptr_res->display_when_used();
    ptr_res_2->display_when_used();

    ptr_res->change_name_uniuqe();
    ptr_res->display_when_used();
    ptr_res_2->display_when_used();


    std::shared_ptr<Resource> ptr_shr_1 = std::make_shared<Resource>("Name_shared_1");
    std::shared_ptr<Resource> ptr_shr_3 = ptr_shr_1;
    std::shared_ptr<Resource> ptr_shr_2 = ptr_shr_1;
    std::shared_ptr<Resource> ptr_shr_4 = std::make_shared<Resource>("Name_shared_4");

    display_amout_of_pointers(ptr_shr_3);

    ptr_shr_1->display_when_used();
    ptr_shr_2->display_when_used();

    ptr_shr_1->change_name_shared();
    ptr_shr_1->display_when_used();
    ptr_shr_3->display_when_used();
    ptr_shr_2->display_when_used();




    return 0;
}