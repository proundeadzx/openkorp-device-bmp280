/**
 * Copyright (C) 2017 openKorp
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

// Libraries required for i2c-bus
/* #include <fcntl.h> */
/* #include <linux/i2c-dev.h> */
/* #include <sys/ioctl.h> */

/* #include <iostream> */
/* #include <unistd.h> */


/* #include "BMP280Device.hpp" */

/**
 * Constructor for MPU9250 device interfacing through I2C.
 */
/* MPU9250Device::MPU9250Device(std::string const &a_deviceName, bool const &a_calibrate) */
/* { */
/* } */


/* MPU9250Device::~MPU9250Device() */
/* {} */

/* void MPU9250Device::i2cWriteRegister(std::vector<uint8_t> const &a_data) */
/* { */
/*   if (a_data.empty()) { */
/*     std::cerr << "[MPU9250] Failed to write on I2C bus: Input size 0." << std::endl; */
/*   } */
/*   uint8_t* buffer = (uint8_t *) a_data.data(); */
/*   if (write(m_deviceFile, buffer, a_data.size()) != static_cast<int32_t>(a_data.size())) { */
/*     std::cerr << "[MPU9250] Failed to write on I2C bus: Failed to communicate." << std::endl; */
/*   } */
/* } */

/* std::vector<uint8_t> MPU9250Device::i2cReadRegister(std::vector<uint8_t> const &a_addr, uint8_t const &a_length) */
/* { */
/*   i2cWriteRegister(a_addr); */
/*   std::vector<uint8_t> vec(a_length); */
/*   if (read(m_deviceFile, vec.data(), a_length) != a_length) { */
/*     std::cerr << "[MPU9250] Failed to read I2C on bus." << std::endl; */
/*   } */
/*   return vec; */
/* } */

/* int8_t MPU9250Device::i2cAccessDevice(uint8_t const a_addr) */
/* { */
/*   if (ioctl(m_deviceFile, I2C_SLAVE, a_addr) < 0) { */
/*     std::cerr << "[MPU9250] Failed to acquire bus access or talk to slave device. " << std::endl; */
/*     return -1; */
/*   } */
/*   return 0; */
/* } */




/* opendlv::proxy::PressureReading MPU9250Device::readAltimeter() */
/* { */
/*   i2cAccessDevice(BMP280::ID); */
/*   std::vector<uint8_t> rawData = i2cReadRegister(std::vector<uint8_t>{BMP280::PRESS_LSB}, 1); */

/*   std::cout << "test pressure:" << rawData.tostring() << "\n"; */
/*   return opendlv::proxy::PressureReading(); */
/* } */

