#include "Complex.h"

int main() {
	Complex base_c{};
	Complex param_c( 123, 456 );
	Complex deleg_c('a');//97
	Complex copy_c = param_c;
	Complex move_c(Complex::getMultiplied(param_c));
	return 0;
}