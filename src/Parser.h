/*
 * Parser.h
 *
 *  Created on: 24.01.2018
 *      Author: marvin
 */

#ifndef PARSER_H_
#define PARSER_H_

#include <Functions.h>

_Bool startsWith(const char *restrict string, const char *restrict prefix)
{
    while(*prefix)
    {
        if(*prefix++ != *string++)
            return 0;
    }

    return 1;
}

#endif /* PARSER_H_ */
