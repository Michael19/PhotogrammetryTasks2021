#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

template <typename T>
std::string to_string(T value)
{
    std::ostringstream ss;
    ss << value;
    return ss.str();
}

template <typename T>
std::string to_percent(T part, T total) {
    if (total == 0)
        return "0";
    return to_string((int) std::floor(part * 100.0 / total + 0.5));
}

std::vector<std::string> split(const std::string &string, const std::string &separator, bool keep_empty_parts = true);
std::string join(const std::vector<std::string> &tokens, const std::string &separator);
std::istream &getline(std::istream &is, std::string &str);
double atof(const std::string &s);
int atoi(const std::string &s);
std::string tolower(const std::string &str);
std::string trimmed(const std::string &str);
std::string base64_encode(const std::string &in);
std::string base64_decode(const std::string &in);
