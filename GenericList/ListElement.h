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

#include <typeinfo>
template <class T>
class ListElement {
    T _data;
public:
    ListElement() { _data = nullptr; }
    ListElement(T data) { _data = data; }
    ~ListElement() { delete data; }

    ListElement(const ListElement & other) {
        ListElement<T> *element = new ListElement<T>(std::move(other->getData()));
    }

    T getData() { return _data; } 
    const type_info & getType() { return typeid(data); } //Gets the actual type info
};