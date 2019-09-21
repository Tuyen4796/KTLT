 #include <iostream>
 using namespace std;
 int X = 4;
 int & MyFunc()
 {
	 return X;
 }

 int main()
 {
 	cout<<"X="<<X<<endl;
 	cout << &X << endl;
 	cout<<"X="<<MyFunc()<<endl;
 	MyFunc() = 20; //Nghia là X = 20
 	cout<<"X="<<X<<endl;
 	cout << &MyFunc() << endl;
 	return 0;
 }

