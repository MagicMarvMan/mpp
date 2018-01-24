/*
 * Parser.h
 *
 *  Created on: 24.01.2018
 *      Author: marvin
 */

#ifndef PARSER_H_
#define PARSER_H_

#include <Functions.h>

bool startsWith(const char *pre, const char *str)
{
    size_t lenpre = strlen(pre),
           lenstr = strlen(str);
    return lenstr < lenpre ? false : strncmp(pre, str, lenpre) == 0;
}

#endif /* PARSER_H_ */
