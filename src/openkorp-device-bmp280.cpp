/*
 * Copyright (C) 2018 Björnborg Ngúyen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <ncurses.h>
#include <sstream>

#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>

#include "cluon-complete.hpp"
#include "opendlv-standard-message-set.hpp"
#include "openkorp-message-set.hpp"

#include "BMP280Device.hpp"

int32_t main() {
  int16_t m_deviceFile;
  m_deviceFile = open("/dev/i2c-2", O_RDWR);
  if (m_deviceFile<0){
    return -1;
  }
  uint8_t bmp280_addr = 0x76;
  uint8_t a_addr[1];
  a_addr[0] = 0xD0;
  if (ioctl(m_deviceFile, I2C_SLAVE, bmp280_addr) < 0) {
    std::cerr << "[MPU9250] Failed to acquire bus access or talk to slave device. " << std::endl;
    return -1;
  }

  uint8_t buff[1];
 
  if (write(m_deviceFile, &a_addr, 1) != 1) {
    std::cerr << "[MPU9250] Failed to write on I2C bus: Failed to communicate." << std::endl;
  }

  if (read(m_deviceFile, &buff, 1) != 1) {
    std::cerr << "[MPU9250] Failed to read I2C on bus." << std::endl;
  }
  if (buff[0] == 0x58) {
    std::cout << "correct address\n";
  }
  else {
    std::cout << "incorrect address\n";
    return -1;
  }
  return 0;
}

