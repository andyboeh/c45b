// Copyright 2011 Torsten Martinsen <bullestock@bullestock.net>

// This file is part of c45b.

// c45b is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// c45b is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with c45b.  If not, see <http://www.gnu.org/licenses/>.

#include "platform.h"

#ifdef _WIN32
#  include <windows.h>
#else
#  include <unistd.h>
#endif

void Msleep(int ms)
{
#ifdef _WIN32
    Sleep(ms);
#else
    usleep(1000*ms);
#endif
}
