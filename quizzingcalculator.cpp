//Maya Jairam
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <list>
#include <string>
using namespace std;

int multiply(int,int);
int divide(int,int);
int add(int,int);
int subtract(int,int);
int moddiv(int,int);

int main(){
	srand(time(0));
	int num,num1,num2,num3,num4,operation,ans,score,level;
	score = 0;
	cout<< "Enter in the number of problems you would like to solve: ";
	cin>> num;
	cout<< "Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divison\n5. Modular Division\n6. Mix of Operations\n";
	cin>> operation;
	cout<< "Choose your level of difficulty:\n1. Easy\n2. Intermediate\n3. Hard\n";
	cin>>level;
	string operations[] = {"","+","-","*","/","%"};
	for(int i = 0;i<num;i++){
		if(level == 1){
			do{
				num1=rand()%100+1;
				num2=rand()%99+2;
			}while(num1%num2!=0);
			num3=rand()%100+1;
			num4=rand()%100+1;			
		}
		if(level == 2){
			do{
				num1=rand()%1000+1;
				num2=rand()%999+2;
			}while(num1%num2!=0);
			num3=rand()%1000+1;
			num4=rand()%1000+1;
		}
		if(level == 3){
			do{
				num1=rand()%10000+1;
				num2=rand()%9999+2;
			}while(num1%num2!=0);
			num3=rand()%10000+1;
			num4=rand()%10000+1;
		}
		if(operation<5){
			cout<<"What is "<<num1<<operations[operation]<<num2<<"?\n";
			cin>> ans;	
		}
		if(operation == 1){
			if(ans==add(num1,num2)){
				cout<<"Correct!\n";
				score += 1;				
			}
			else
				cout<<"Wrong! The answer is "<<add(num1,num2)<<".\n";	
			
		}
		if(operation == 2){
			if(ans==subtract(num1,num2)){
				cout<<"Correct!\n";
				score += 1;				
			}
			else
				cout<<"Wrong! The answer is "<<subtract(num1,num2)<<".\n";

		}
		if(operation == 3){
			if(ans==multiply(num1,num2)){
				cout<<"Correct!\n";
				score +=1;
			}
			else
				cout<<"Wrong! The answer is "<<multiply(num1,num2)<<".\n";
		}
		if(operation == 4){
			if(ans==divide(num1,num2)){
				cout<<"Correct!\n";
				score +=1;
			}
			else
				cout<<"Wrong! The answer is "<<divide(num1,num2)<<".\n";
		}
		if(operation == 5){
			cout<<"What is "<<num3<<"%"<<num4<<"?\n";
			cin>>ans;
			if(ans==moddiv(num3,num4)){
				cout<<"Correct!\n";
				score +=1;
			}
			else
				cout<<"Wrong! The answer is "<<moddiv(num3,num4)<<".\n";
		}		
		if(operation == 6){
			cout<<"What is "<<num4<<"-"<<num3<<"+"<<num1<<"/"<<num2<<"?\n";
			cin>>ans;
			if(ans==add(subtract(num4,num3),divide(num1,num2))){
				cout<<"Correct!\n";
				score+=1;
			}
			else
				cout<<"Wrong! The answer is "<<add(subtract(num4,num3),divide(num1,num2))<<".\n";
			}
		}
	float percent = score*100/num;
	cout<<"You got "<<percent<<"% right!";
	}
int multiply(int x, int y){
	int product;
	product = x*y;
	return product;
}
int divide(int x, int y){
	int quotient;
	quotient = x/y;
	return quotient;
}
int add(int x, int y){
	int sum;
	sum = x+y;
	return sum;
}
int subtract(int x, int y){
	int difference;
	difference = x-y;
	return difference;
}
int moddiv(int x, int y){
	int remainder;
	remainder = x%y;
	return remainder;
}
