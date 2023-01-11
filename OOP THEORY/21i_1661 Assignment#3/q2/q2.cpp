#include<iostream>
using namespace std;
class Array{
private:
 int *arr;
 int size;
 
public:
	
Array(){
	arr = NULL;
	size = -1;
}

Array(int size){
	this->arr = new int[size];
	this->size = size;
}

Array(int *arr, int size){
	 arr = new int[size];
	 this->size = size;
}

 Array(const Array &arr){
	this->arr = arr.arr;
}

int getAt(int i){
	return this->arr[i];
}

void setAt(int i, int val){
 this->arr[i] = val;
 }
 
 Array subArr(int pos, int size){
 Array sub_arr;
 sub_arr.arr = new int[size];
 for (int i = pos, j=0; i < size; i++, j++){
	 sub_arr.arr[j] = this->arr[i];			}
		return sub_arr;
}

Array subArr(int pos){
 Array sub_arr;
 sub_arr.arr = new int[this->size];
	 for (int i = pos, j = 0; i < this->size; i++, j++){
		sub_arr.arr[j] = this->arr[i];					}
			return sub_arr;
}

int * subArrayPointer(int pos){
	int *sub_arr;
	sub_arr = new int[this->size];
	
	for (int i = pos, j = 0; i < this->size; i++, j++){
		 sub_arr[j] = this->arr[i];						}
			return sub_arr;
}

	void pushBack(int a){
	this->arr[this->size] = a;
	this->size++;
}

int popBack(){
	this->size = --size;
	return this->arr[this->size];
}

int insert(int idx, int val){
	if (idx >= 0 && idx < this->size){
		this->size = ++this->size;
		 int *shifted_arr;
	    	shifted_arr = new int[this->size];

for (int i = 0; i < this->size; i++){
	if (i == idx)
	 shifted_arr[i] = val;
 		else	shifted_arr[i] = this->arr[i];
}

	 this->arr = shifted_arr;
return 1;
}
 	else	return -1;
}

 int erase(int idx, int val){
		if (idx >= 0 && idx < this->size){
	 this->size = --this->size;
 	 int *shifted_arr;
	 shifted_arr = new int[this->size];

 for (int i = 0; i < this->size-1; i++){
	if (i >= idx)
		shifted_arr[i] = this->arr[++i];
	else
	shifted_arr[i] = this->arr[i];
 }	
	this->arr = shifted_arr;

return 1;
}

 else	return -1;
}

 int length() {
	return this->size;
}

void clear() {
	delete this->arr;
		this->size = -1;
}

int value(int idx){
	return arr[idx];
}

void assign(int idx, int val){
	this->arr[idx] = val;
}

void copy(const Array& Arr) {
	this->arr = Arr.arr;
}

void copy(const int * arr, int size){
	int *temp_arr = new int[size];
 	for (int i = 0; i < size; i++)
		temp_arr[i] = arr[i];
	
	this->arr = temp_arr;
}

void display(){
	for (int i = 0; i < this->size; i++)
		cout << this->arr[i] << " ";
}

 bool isEmpty(){
 if (size < 0)
 	return true;
 else	return false;
}

Array find(int val){

 Array temp_arr;
 temp_arr.arr = new int[size];
	for (int i = 0, j=0; i < size; i++){
		if (this->arr[i]==val)
		temp_arr.arr[j] = arr[i];
	
		j++;
}
	return temp_arr;
}

 bool equal(const Array &check_arr){
	bool yes = true;
	for (int i = 0; i < this->size; i++){
		if (this->arr[i] != check_arr.arr[i])
		 yes = false;
	}	
 		return yes;
}

 bool sort(){
	bool is_already_sorted = true;
		 for (int i = 0; i < this->size; i++){
			 for (int j = 0; j < this->size; j++){
				
				 if (arr[i]<arr[j]){
					 int temp = arr[i];
					 arr[i] = arr[j];
					 arr[j] = temp;
					 is_already_sorted = false;
		}
	}
}
	return is_already_sorted;
}

void reverse(){

 int *reversed_arr = new int[this->size];
	 
	 for (int i = 0; i < this->size; i++)
		 reversed_arr[i] = this->arr[(this->size - i+1)];

	 this->arr = reversed_arr;
}

~Array(){
	 delete arr;		// DESTRUCTOR CALLED
}

};

int main(){
	
	Array *arr = new Array(5);

	arr->assign(0, 55);
	arr->assign(1, 100);
	arr->assign(2, 25);
	arr->assign(3, 44);
	arr->assign(4, 2);
	
	arr->display();

	arr->sort();
	cout << endl;

	arr->display();
	cout<<endl;

 return 0;
}
