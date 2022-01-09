/***********************************************************************************
 *  @file       led_debug.h
 *  Project     led_debug
 *  @brief      Arduino Due library which LED debugging implementation to be used 
 *              together with the micro-ROS library.
 *
 *
 *  @author     Otávio Augusto Rocha da Cruz
 *  @bug 		 No known bugs.
 *  License     MIT
 *
 * The code for this library is inspired by the micro_ros_arduino library. 
 * See more in: https://github.com/micro-ROS/micro_ros_arduino
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
#ifndef LED_DEBUG_H
#define LED_DEBUG_H

#include <Arduino.h>

#define MICR0_ROS_DEBUG // Micro-ROS debug mode

//  WITH DEBUG MICROROS  
#ifdef MICR0_ROS_DEBUG
	//High error: aborting
	#define DEBUG_ERROR_MICR0_ROS(fn) { \
	rcl_ret_t temp_rc = fn; \
	if((temp_rc != RCL_RET_OK)){\
		ledBlinkDebug();\
	}\
	}

	//Low error: continuing, 
	#define DEBUG_WARNING_MICR0_ROS(fn) { \
	rcl_ret_t temp_rc = fn; \
	if((temp_rc != RCL_RET_OK)){}\
	}
	
	#define LED_DEBUG_PIN 13
	
	#define LED_DEBUG_DELAY 1000
	
	void ledBlinkDebug(uint8_t pinLed = LED_DEBUG_PIN, uint8_t delayBLink = LED_DEBUG_DELAY);

	#endif //MICR0_ROS_DEBUG
#endif //LED_DEBUG_H
