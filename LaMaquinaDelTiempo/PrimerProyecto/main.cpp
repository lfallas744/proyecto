#include "Producto.h"
#include "ProductoNoPerecedero.h"

using namespace std;

int main() {

	ProductoNoPerecedero produ1 ("camiseta", "CM12232", 12500, 2, 5);

	cout<<produ1.toString();


	return 0;
}
