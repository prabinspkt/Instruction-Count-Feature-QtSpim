#ifndef INSTRUCTION_COUNT_H
#define INSTRUCTION_COUNT_H

#include <map>
#include <string>

#include "parser_yacc.h"

extern std::map<int,int> instruction_count;
extern std::map<std::string, int> final_count;
extern std::map<int,std::string> op_to_inst;
std::map<std::string, int> ReturnFinalCount();

#endif // INSTRUCTION_COUNT_H
