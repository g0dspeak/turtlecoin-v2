// Copyright (c) 2021, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#ifndef TURTLECOIN_UTILITIES_H
#define TURTLECOIN_UTILITIES_H

#include <algorithm>
#include <string>
#include <vector>

namespace Utilities
{
    /**
     * Joins a vector of strings together using the specified character as the delimiter
     *
     * @param input
     * @param ch
     * @return
     */
    std::string str_join(const std::vector<std::string> &input, const char &ch = ' ');

    /**
     * Splits a string into a vector of strings using the specified character as a delimiter
     *
     * @param input
     * @param ch
     * @return
     */
    std::vector<std::string> str_split(const std::string &input, const char &ch = ' ');

    /**
     * Trims any whitespace from both the start and end of the given string
     *
     * @param str
     * @param to_lowercase
     */
    void str_trim(std::string &str, bool to_lowercase = false);
} // namespace Utilities

#endif // TURTLECOIN_UTILITIES_H
