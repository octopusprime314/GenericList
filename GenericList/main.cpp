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

#include <iostream>
#include <string>
#include "GenericListInterface.h"
#include "GenericListExpansion.h"

using namespace std;

int main()
{
    GenericListExpansion list; //list that has user defined data types
    list.push<int>(5);
    list.push<double>(80.2);
    list.push<std::string>("123463");
    list.push<unsigned char>(200);
    list.push<long>(587);
    list.push<short>(1000);
    list.push<float>(34.23451f);

    list.push<Ball>(Ball(42.0));

    list.displayGenericList();

    int val;
    std::cin >> val;
}