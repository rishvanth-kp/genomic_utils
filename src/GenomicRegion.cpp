/*
* GenomcRegion: class to store genomic intervals
* Copyright (C) 2021 Rishvanth Prabakar
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
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "GenomicRegion.hpp"

bool
GenomicRegion::overlaps(GenomicRegion &g) const {
  if (g.get_name() == name && 
      (g.get_start() >= start && g.get_start() < end) || 
      (g.get_end() >= start && g.get_end() < end))
    return true;
  else
    return false; 
}

bool
GenomicRegion::is_valid() const {
  if (start < end &&
      (strand == '.' || strand == '+' || strand == '-'))
    return true;
  else
    return false;
}
