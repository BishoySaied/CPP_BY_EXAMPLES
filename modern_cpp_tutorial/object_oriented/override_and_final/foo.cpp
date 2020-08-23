struct Base {
virtual void foo(int);
};
struct SubClass: Base {
virtual void foo(int) override; // legal
//virtual void foo(float) override; // illegal, no virtual function in super class

/*
error: 'foo' marked 'override' but does not override any member
      functions
virtual void foo(float) override; 
*/
};



/*final is to prevent the class from being continued to inherit and to terminate the virtual function
to continue to be overloaded.*/

struct Tase {
virtual void too() final;
};
struct SubClass1 final: Base {
}; // legal

/*
struct SubClass2 : SubClass1 {
//error: base 'SubClass1' is marked 'final'
//struct SubClass2 : SubClass1 {

}; // illegal, SubClass1 has final
*/


/*

struct SubClass3: Tase {
void too(); // illegal, foo has final

//error: declaration of 'too' overrides a 'final' function
//void too(); // illegal, foo has final



};
*/
int main(){
	return 0;
}