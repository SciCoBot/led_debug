/***********************************************************************************
 *  @file       led_debug.ino
 *  Project     serial_debug
 *  @brief      Arduino Due library which LED debugging implementation to be used 
 *              together with the micro-ROS library.
 *
 *
 *  @author     Otávio Augusto Rocha da Cruz
 *  @bug 		 No known bugs.
 *  License     MIT
 *
 *  @section License
 *
 * Copyright (c) 2021 SciCoBot
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
**********************************************************************************/
// import structure rcl_ret_t
#include <micro_ros_arduino.h>
#include <rcl/rcl.h>
#include <led_debug.h>
  
rcl_ret_t test_debug(rcl_ret_t temp_rc)
{
  return temp_rc;
}

void setup() 
{
  Serial.begin(9600);
  
  //Ok, continue
  DEBUG_ERROR_MICR0_ROS(test_debug(RCL_RET_OK));
  //Error, but continues
  DEBUG_WARNING_MICR0_ROS(test_debug(RCL_RET_ERROR));
  Serial.println("Ok");
  delay(2000);
  
  // Error. Stop the program to be blinking LED
  DEBUG_ERROR_MICR0_ROS(test_debug(RCL_RET_ERROR));
}

void loop() 
{

}
