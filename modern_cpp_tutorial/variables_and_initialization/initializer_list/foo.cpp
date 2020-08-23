#include <iostream>
#include <initializer_list>
#include <vector>
//[BSAB]: example of class using the initialization list
class MagicFoo {
public:
	std::vector<int> vec;
	
MagicFoo(std::initializer_list<int> list) {
for (std::initializer_list<int>::iterator it = list.begin();
it != list.end(); ++it)
vec.push_back(*it);
}
};


//[BSAB]: example of class NOT using the initialization list
class Foo {
public:
int value_a;
int value_b;
Foo(int a, int b) : value_a(a), value_b(b) {}
};


int main() {
// before C++11
int arr[3] = {1, 2, 3};
Foo foo(1, 2);
std::vector<int> vec = {1, 2, 3, 4, 5};
std::cout << "arr[0]: " << arr[0] << std::endl;
std::cout << "foo:" << foo.value_a << ", " << foo.value_b << std::endl;
for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
std::cout << *it << std::endl;
}

{// after C++11
MagicFoo magicFoo = {1, 2, 3, 4, 5};
std::cout << "magicFoo: ";
for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it) 
	std::cout << *it << std::endl;
}

return 0;
}
