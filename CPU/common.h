#include <sys/stat.h>

#ifndef COMMON_H
#define COMMON_H

#include "operation_codes.h"

const char name_input_file_ass[]  = "input_ass.txt";
const char name_output_file_ass[] = "output_ass.txt";

const char name_input_file_disass[]  = "input_disass.txt";
const char name_output_file_disass[] = "output_disass.txt";

const int MAX_SIZE = 10;
const int ERROR_NUMBER = -3802;
const int OK_FILE = 0;
const int OK = 0;
const int number_of_register_vars = 4;
const int number_of_commands = 9;
const int IS_REGISTER = 1;

const char SEPARATORS[] = "\n ";

enum FLAGS_OF_THE_END_LINE {
    END_LINE = 0,
    NOT_END_LINE = 1
};

struct File {
    FILE* ptr_to_file;
    const char* name;
    char* text;
    char* copy_of_text;
    int lines;
    struct stat information;
};

struct Label {
    char* name;
    int address;
};

#endif // COMMON_H

int is_right_command(const char* line, const char* command);

int number_of_symbols(char* buffer, char separator);

int file_construct(File* file, const char* name_file);


