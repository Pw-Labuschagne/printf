#include "main.h"
/**
 * _format - Determines the format and calls the correct function
 * @a: pointer to the function needed
 * Return: Function to be used
 */
int (*_format(char a))(va_list)
{
//*op_f: determines the function to be called when handling operations
op_f ops[] = {
	{'c', op_char}, //*op_char: helper operation for characters
	{'s', op_str}, //*op_str: helper operation for string
	{'d', op_dec}, //*op_dec: helper operation for decimal (base 10)
	{'i', op_int}, //*op_int: helper operation for integer (base 10)
	{'b', op_bin}, //*op_bin: helper operation for binary
	{'u', op_unsigned}, //*op_unsigned: herlper operation for unsigned decimal (base 10)
	{'o', op_octal}, //*op_octal: helper operation for number in ocatl (base 8)
	{'x', op_hexl}, //*op_hexl: helper operation for hexidecimal (base 16)(lowered)
	{'X', op_hexU}, //*op_hexU: helper operation for hexadecimal (base 16)(Upper)
	{'p', op_address}, //*op_address: helper operation for address or pointer
	{'r', op_rev}, //*op_rev: helper operation for reversed string
	{'R', op_rot12}, //*op_rot13: helper operation for rot13'ed string
	{'\0', NULL}
};

int c = 0; //*basic counter to determine wheich function to call

while (ops[c])
{
if (ops[c].fun == a)
{
	return (ops[c].fun);
}
c++
}

