/************************************************************************************************************
 * DistanceGP2Y0A21YK.h - Arduino library for retrieving data from the analog GP2Y0A21YK IR Distance sensor *
 * Copyright 2011-2012 Jeroen Doggen (jeroendoggen@gmail.com)                                               *
 * For more information: variable declaration, changelog,... see DistanceGP2Y0A21YK.h                       *
 ************************************************************************************************************
 * This library is free software; you can redistribute it and/or                                            *
 * modify it under the terms of the GNU Lesser General Public                                               *
 * License as published by the Free Software Foundation; either                                             *
 * version 2.1 of the License, or (at your option) any later version.                                       *
 *                                                                                                          *
 * This library is distributed in the hope that it will be useful,                                          *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of                                           *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU                                        *
 * Lesser General Public License for more details.                                                          *
 *                                                                                                          *
 * You should have received a copy of the GNU Lesser General Public                                         *
 * License along with this library; if not, write to the Free Software                                      *
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA                               *
 ***********************************************************************************************************/

// These are regular byte arrays, but the 'prog_uchar' type is needed
// to place this arrays in program memory using the PROGMEM keyword

prog_uchar transferFunctionLUT3V[] PROGMEM =
	{
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 79,
		76, 73, 71, 69, 67, 65, 63, 62, 60, 58, 57, 52, 50, 49, 48, 47,
		49, 48, 47, 46, 45, 44, 43, 43, 42, 41, 40, 40, 39, 38, 37, 37,
		36, 36, 35, 35, 34, 33, 33, 32, 32, 31, 31, 31, 30, 30, 29, 29,
		29, 28, 28, 27, 27, 27, 26, 26, 26, 25, 25, 25, 25, 24, 24, 24,
		23, 23, 23, 23, 22, 22, 22, 22, 22, 21, 21, 21, 21, 20, 20, 20,
		20, 20, 20, 19, 19, 19, 19, 19, 18, 18, 18, 18, 18, 18, 18, 17,
		17, 17, 17, 17, 17, 17, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
		15, 15, 15, 15, 15, 15, 15, 14, 14, 14, 14, 14, 14, 14, 14, 14,
		13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12,
		12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11,
		11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10,
		10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};

prog_uchar transferFunctionLUT5V[] PROGMEM =
	{
		255, 127, 93, 77, 67, 60, 54, 50, 47, 44, 42, 40, 38, 36, 35, 34,
		32, 31, 30, 30, 29, 28, 27, 27, 26, 26, 25, 25, 24, 22, 20, 19,
		19, 18, 18, 17, 17, 17, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13,
		13, 13, 13, 13, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 10,
		10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9,
		8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7,
		7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6,
		6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};
