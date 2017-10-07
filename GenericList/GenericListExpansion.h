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
#include "GenericListInterface.h"
#include <iostream>
#include "Ball.h"

//Class interfaces with the general types that are cast in GenericList
// and builds upon the standard types made by user
class GenericListExpansion : public GenericListInterface {

public:
    //Overloaded from GenericList
    void displayGenericList() {
        for (auto pointerTypePair : pointerTypePairs) {
            castType(pointerTypePair);
        }
    }
    //Overloaded from GenericList
    void castType(const std::pair<void*, std::string> & pointerTypePair) {
        
        //Generic user built type translations
        if (pointerTypePair.second == typeid(Ball).name()) {
            ListElement<Ball>* ele = static_cast<ListElement<Ball>*>(pointerTypePair.first);
            ele->getData().displayData();
        }
        else
        {
            //Call casting for standard types
            GenericListInterface::castType(pointerTypePair);
        }
    }


};