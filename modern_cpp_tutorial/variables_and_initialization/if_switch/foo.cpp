#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main() {
std::vector<int> vec = {1, 2, 3, 4};
// after c++17, can be simplefied by using `auto`
//[BSAB]: here the itr is defined outside the if, scope is the main()
const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);

//[BSAB]: used to get an integer value of the iterator index
int index = std::distance( vec.begin(), itr );

//[BSAB]: print the iterator value
std::cout << "itr of value 2 = " << std::to_string(index) << std::endl;

if (itr != vec.end()) {
*itr = 3;
int index = std::distance( vec.begin(), itr );
}


//[BSAB]: here the itr is defined inside the if 
if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 3);
itr != vec.end()) {
*itr = 4;


index = std::distance( vec.begin(), itr );

//[BSAB]: print the iterator value
std::cout << "itr of value 3 = " << std::to_string(index) << std::endl;
}
// should output: 1, 4, 3, 4. can be simplefied using `auto`
for (std::vector<int>::iterator element = vec.begin(); element != vec.end(); ++element)
std::cout << *element << std::endl;
}