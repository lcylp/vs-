#include<stdio>
#include<vector>
using namespace std;
int main(){
	vector<int> vec{ 0, 1, 2 };
	for (auto v : vec){
		cout << v << " ";
	}
	cout << endl;
}