#ifndef BASE64_H
#define BASE64_H
#include <vector>
#include <string>
typedef unsigned char BYTE;

std::string base64_encode(BYTE const* buf, unsigned int bufLen);
std::string base64_decode(std::string const& encoded_string);
#endif // BASE64_H
