#ifndef TOKENSTREAM_H
#define TOKENSTREAM_H

#include "token.h"

#include <sstream>
#include <map>

class TokenStream
{
public:
    explicit TokenStream(const std::string &expression);

    Token get();
    void unget(int count);
    long position();

private:
    std::stringstream m_stream;
};

#endif // TOKENSTREAM_H