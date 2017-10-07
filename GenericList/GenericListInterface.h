/*This file is part of GenericList.

GenericList is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

GenericList is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GenericList.If not, see <http://www.gnu.org/licenses/>.*/

#pragma once
#include "ListElement.h"
#include <vector>
#include <string>
#include <tuple>

class GenericListInterface {
    

public:
    GenericListInterface() { }

    //Can I make a list of different types...yes I can by casting all to void pointer
    //Keep track of string name of the type for later typeid matching
    template <typename NEW_TYPE> void push(NEW_TYPE data) {
        //Create the pair!
        pointerTypePairs.push_back(std::make_pair(new ListElement<NEW_TYPE>(data), typeid(data).name()));
    }
protected:

    //Contains the void pointer to each templated type and the string of the type
    std::vector<std::pair<void*, std::string>> pointerTypePairs;

    virtual void castType(const std::pair<void*, std::string> & pointerTypePair) {
        if (pointerTypePair.second == typeid(int).name()) {
            ListElement<int>* ele = static_cast<ListElement<int>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(double).name()) {
            ListElement<double>* ele = static_cast<ListElement<double>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(float).name()) {
            ListElement<float>* ele = static_cast<ListElement<float>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(long).name()) {
            ListElement<long>* ele = static_cast<ListElement<long>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(std::string).name()) {
            ListElement<std::string>* ele = static_cast<ListElement<std::string>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(unsigned char).name()) {
            ListElement<unsigned char>* ele = static_cast<ListElement<unsigned char>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(short).name()) {
            ListElement<short>* ele = static_cast<ListElement<short>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(unsigned long).name()) {
            ListElement<unsigned long>* ele = static_cast<ListElement<unsigned long>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else if (pointerTypePair.second == typeid(char).name()) {
            ListElement<char>* ele = static_cast<ListElement<char>*>(pointerTypePair.first);
            std::cout << ele->getData() << std::endl;
        }
        else {
            std::cout << "Type not supported!" << std::endl;
        }
    }
};