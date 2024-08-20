void doSomething(double x = 3.5, std::string y, double z, std::string w = "Boo"){
}




int main(){
	doSomething()
	return 1;
}



// This was a practice.
//Asking why the fn dosomething is illegal. 
// You can init functions with defualt args, however the default args have to be defined at the end.
// What is the reason? When were calling doSomething, we start by filling out the args. 
// But we soon realize that, if we skip "x" and input a var for y it's interpreted as x still.
// that is why the defualt args have to be at the end of the arg list.
//
//
void legalDef(std::string y, double z, double x = 3.5, std::string w = "BOO"){
}
