#ifndef INSTRUCTION_COUNT_H
#define INSTRUCTION_COUNT_H

#include <map>
#include <string>

#include "parser_yacc.h"

// Declare data variables to store data
extern std::map<int,int> instruction_count;
extern std::map<std::string, int> final_count;
extern std::map<int,std::string> op_to_inst;
extern int cycle_counter;

// Functions that will be used to return the instruction count data
std::map<std::string, int> ReturnFinalCount();

// Function that will return the data to initial
// state on clicking of ReinitializeSimulator button
void ClearOnReinitialize();

#endif // INSTRUCTION_COUNT_H
