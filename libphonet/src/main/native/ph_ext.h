/*
 * ph_ext.h
 * --------
 *
 * Constants and prototypes for "phonet.c".
 *
 * Copyright (c):
 * 1999-2007:  Joerg MICHAEL, Adalbert-Stifter-Str. 11, 30655 Hannover, Germany
 *
 * SCCS: @(#) ph_ext.h  1.4.2  2007-08-27
 *
 * This program is subject to the GNU Lesser General Public License (LGPL),
 * (formerly known as GNU Library General Public Licence)
 * as published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Actually, the LGPL is __less__ restrictive than the better known GNU General
 * Public License (GPL). See the GNU Library General Public License or the file
 * LIB_GPLP.TXT for more details and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * There is one important restriction: If you modify this program in any way
 * (e.g. add or change phonetic rules or modify the underlying logic or
 * translate this program into another programming language), you must also
 * release the changes under the terms of the LGPL.
 * That means you have to give out the source code to your changes,
 * and a very good way to do so is mailing them to the address given below.
 * I think this is the best way to promote further development and use
 * of this software.
 *
 * If you have any remarks, feel free to e-mail to:
 *     ct@ct.heise.de
 *
 * The author's email address is:
 *    astro.joerg@googlemail.com
 */


#ifndef _PH_EXT_H_
#define _PH_EXT_H_

/****  If you want to use "phonet.c" as a library,  ****/
/****  delete the following macro (Note: This will  ****/
/****  also disable the function "check_rules").    ****/


/****  constants for function "phonet" (do not change)  ****/
#define  PHONET_FIRST_RULES    0
#define  PHONET_SECOND_RULES  1024

/****  If you don't want rules for one or more of the       ****/
/****  following languages, delete the corresponding macro  ****/
#define  PHONET_NO_LANGUAGE  1
#define  PHONET_GERMAN       2
/****  (under construction:)  #define  PHONET_ENGLISH   2  ****/


/****  the following macro _must_ be defined  ****/
#define PHONET_DEFAULT_LANGUAGE   PHONET_GERMAN



/************************************************************/
/****  function prototypes  *********************************/
/************************************************************/

int phonet (char src[], char dest[], int len, int mode_language);
int check_rules (int language, int trace_rule);


#endif

/************************************************************/
/****  end of file "ph_ext.h"  ******************************/
/************************************************************/
