/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:25:06 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/10 17:31:43 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
	private:
		T*	ptr;
		unsigned int _size;

	public:
		Array<T>(): ptr(nullptr), _size(0){
		}

		Array<T>(unsigned int n):ptr(nullptr), _size(n){
			if (_size <= 0)
				throw std::invalid_argument("Can't allocate memory");
			else{
				ptr = new T[n];
				for (size_t i = 0; i < n; i++)
					ptr[i] = T();			
			}
		}

		Array<T>(const Array<T> &obj): ptr(nullptr), _size(0){
			if (!obj.size())
				return;
			this->ptr = new T[obj.size()];
			for (size_t i = 0; i < obj.size(); i++)
				this->ptr[i] = obj.ptr[i];
			this->_size = obj._size;
		}

		Array<T>& operator=(const Array<T> &obj){
			if (obj.size() == this->size())
			{
				for (size_t i = 0; i < obj.size(); i++)
					this->ptr[i] = obj.ptr[i];
				this->_size = obj._size;
			}
			else
			{
				delete[] ptr;
				this->ptr = new T[obj.size()];
				for (size_t i = 0; i < obj.size(); i++)
					this->ptr[i] = obj.ptr[i];
				this->_size = obj._size;
			}
			return *this;		
		}

		T& operator[] (unsigned int n){
			if (n < 0 || n > this->_size)
				throw std::out_of_range("index Not found");
			return (ptr[n]);
		}

		const T& operator[] (unsigned int n)const {
			if (n < 0 || n > this->_size)
				throw std::out_of_range("index Not found");
			return (ptr[n]);
		}

		~Array<T>(){
			if (this->size())
				delete[] ptr;
			this->ptr = nullptr;
		};

		unsigned int size(void) const{
			return this->_size;			
		}
		
};
#endif