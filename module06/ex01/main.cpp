/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:08:20 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/03 11:19:54 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

/*
syntax : reinterpret_cast <data_type *>(pointer_variable);
*/

uintptr_t serialize(Data* ptr){
    return reinterpret_cast <uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast <Data *>(raw);
}

int     main(void)
{
    
    Data data;
    Data *data_;
    data.i = 42;
    data.f = 45.5;
    data.c = 'z';
    data.s = "string";

    std::cout << "i : " << data.i << std::endl;
    std::cout << "f : " << data.f << std::endl;
    std::cout << "c : " << data.c << std::endl;
    std::cout << "string : " << data.s << std::endl;
    std::cout << "-------------------" << std::endl << std::endl;

    uintptr_t uintptr = serialize(&data);
    
    std::cout << "-------------------" << std::endl;
    std::cout << "uintptr address :" << &uintptr << std::endl;
    std::cout << "data address :" << &data << std::endl;
    std::cout << "-------------------" << std::endl << std::endl;
    
    data_ = deserialize(uintptr);

    std::cout << "i : " << data_->i << std::endl;
    std::cout << "f : " << data_->f << std::endl;
    std::cout << "c : " << data_->c << std::endl;
    std::cout << "string : " << data_->s << std::endl;
    std::cout << "-------------------" << std::endl << std::endl;
    
    return (0);
}