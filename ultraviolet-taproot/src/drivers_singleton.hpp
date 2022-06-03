/*
 * Copyright (c) 2022 Team UltraViolet at New York University *
 * This file is part of ultraviolet-taproot.
 *
 * ultraviolet-taproot is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ultraviolet-taproot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ultraviolet-taproot.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef ENV_UNIT_TESTS

#ifndef DRIVERS_SINGLETON_HPP_
#define DRIVERS_SINGLETON_HPP_

#include "drivers.hpp"

namespace src
{
/**
 * @return The singleton instance of the Drivers class. This is the only instance of the
 *      Drivers class that should be created anywhere in the non-unit test framework.
 * @note It is likely that you will never have to use this. There are only two files you
 *      should be calling this function from -- `main.cpp` and `*_control.cpp`, either to
 *      run I/O stuff and to add a Drivers pointer to an instance of a Subsystem or Command.
 */
src::Drivers *DoNotUse_getDrivers();
using driversFunc = src::Drivers *(*)();
}  // namespace src

#endif  // DRIVERS_SINGLETON_HPP_

#endif
