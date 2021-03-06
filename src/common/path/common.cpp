/*
   mkvmerge -- utility for splicing together matroska files
   from component media subtypes

   Distributed under the GPL v2
   see the file COPYING for details
   or visit https://www.gnu.org/licenses/old-licenses/gpl-2.0.html

   Written by Moritz Bunkus <moritz@bunkus.org>.
*/

#include "common/common_pch.h"

#include "common/path.h"

namespace mtx::fs {

std::filesystem::path
absolute(std::filesystem::path const &p) {
  return is_absolute(p) ? p : std::filesystem::absolute(p);
}

} // namespace mtx::fs
