/** @file json_helpers.h
 *  @brief Macro and function defines for the NIDD client.
 */

#ifndef JSON_HELPERS_H
#define JSON_HELPERS_H

#define JSMN_HEADER

#include <jsmn.h>
#include <nxt_unit.h>
#include <string.h>

/** Compares a string with a jsmn token value. */
int jsoneq(const char *json_ptr, jsmntok_t *tok, const char *string);

int eval_jsmn_return(int ret);
#endif
