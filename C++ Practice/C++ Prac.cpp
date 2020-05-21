//C++ tutorial


int main()
/**called when the program is run. Execution of C++ programs begin
 * with main function, regardless of where the function is located
 */

std::cout << "Hello World";
/** standard character output device, usually the screen
 */

using namespace std;
/** cout is part of standard library and all elements in the standard
 * C++ library are declared within what is called a namespace: the 
 * namespace std
 */


//Data types
//Character types
char -> //exactly one byte in size. At least 8bits
char16_t -> //not smaller than char. At least 16 bits
char32_t -> // not smaller than char16_t. At least 32bits
wchar_t -> // can represent the largest supported character set

// integer types(signed) & unsigned
signed char -> //same size as char. At least 8 bits
signed short int -> //not smaller than char. At least 16 bits
signed int -> //not smaller than short. At least 16 bits
signed long int -> //not smaller than int. At least 32bits
signed long long int -> //not smaller than long. At least 64 bits

//floating-point types
float 
double -> //precision not less than float
long double -> //precision not less than double

// null pointer
decltype(nullptr)

int foo = 0;
auto bar = foo; //same as int bar = foo;

int foo = 0;
decltype(foo) bar; //same as: int bar;