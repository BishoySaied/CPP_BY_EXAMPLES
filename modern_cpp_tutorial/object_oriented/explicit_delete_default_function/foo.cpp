class Magic {
public:
Magic() = default; // explicit let compiler use default constructor
Magic& operator=(const Magic&) = delete; // explicit declare refuse constructor
Magic(int magic_number);
};
int main(){
	return 0;
}