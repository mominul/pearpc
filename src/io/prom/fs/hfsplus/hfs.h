/*
 * libhfsp - library for reading and writing Macintosh HFS+ volumes
 * 
 * This file includes definitions for access to old HFS structures.
 *
 * Copyright (C) 2000 Klaus Halfmann <klaus.halfmann@feri.de>
 * Original code 1996-1998 by Robert Leslie <rob@mars.rog>
 * other work 2000 from Brad Boyer (flar@pants.nu) 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * $Id: hfs.h,v 1.1 2004/05/05 22:45:40 seppel Exp $
 */


#define HFS_BLOCKSZ		512	
	/* A sector for Apple is always 512 bytes */
#define HFS_BLOCKSZ_BITS	9	/* 1<<9 == 512  */
#define	HFS_VOLHEAD_SIG		0x4244	/* 'BD'	*/
