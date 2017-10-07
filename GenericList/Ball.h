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
#include "GenericBlob.h"

class Ball : public GenericBlob{
    float _radius;
    float _point3D[3];
public:
    Ball() {}
    Ball(float radius) { _radius = radius; }
    ~Ball() {}

    float getRadius() { return _radius; }
    float* getPoint3D() { return _point3D; }
    void displayData() {
        std::cout << "Radius: " << _radius << " Point: " << _point3D[0] << ", " << _point3D[1] << ", " << _point3D[2] << std::endl;
    }
};