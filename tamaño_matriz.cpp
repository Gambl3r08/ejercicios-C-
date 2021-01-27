#include<stddef.h>
#include<iostream>

using Size = ptrdiff_t;

template< class Item, size_t n>

	constexpr auto n_items(Item (&) [n]) noexcept -> Size
	
{return n;}

using namespace std;

auto main() -> int
{
	int const a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4};
	Size const n = n_items (a);
	int b[n] = {};
	(void) b;
	cout<<"Sise = "<<n<<endl;
	return 0;
}