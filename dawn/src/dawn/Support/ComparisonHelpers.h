//===--------------------------------------------------------------------------------*- C++ -*-===//
//                          _
//                         | |
//                       __| | __ ___      ___ ___
//                      / _` |/ _` \ \ /\ / / '_  |
//                     | (_| | (_| |\ V  V /| | | |
//                      \__,_|\__,_| \_/\_/ |_| |_| - Compiler Toolchain
//
//
//  This file is distributed under the MIT License (MIT).
//  See LICENSE.txt for details.
//
//===------------------------------------------------------------------------------------------===//

#ifndef DAWN_SUPPORT_COMPARISONHELPERS_H
#define DAWN_SUPPORT_COMPARISONHELPERS_H

#include <string>

namespace dawn {

/// @brief Result of comparisons
/// contains the boolean that is true when the comparee match and an error message if not
struct CompareResult {
  std::string message;
  bool match;

  operator bool() { return match; }
  const std::string& why() const { return message; }
};

} // namespace dawn

#endif
