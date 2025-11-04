#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
    string name;
    string author;
    double price;

    public:
    Book(){}
    Book(string n, string a, double p){
        name = n;
        author = a;
        price = p;
    }
    string getName(){
        return name;
    }
    string getAuthor(){
        return author;      
}
    double getPrice(){
        return price;
    }

    void display(){
        cout<<"Book Name: "<<name<<""<<author<<""<<price<<endl
};

int main(){
    const int size=5;
    Book books[size]{
        Book("The Great Gatsby", "F. Scott Fitzgerald", 10.99),
        Book("1984", "George Orwell", 8.99),
        Book("To Kill a Mockingbird", "Harper Lee", 12.49),
        Book("Pride and Prejudice", "Jane Austen", 9.99),
        Book("The Catcher in the Rye", "J.D. Salinger", 11.50)
    };
        for(int i=0;i<=size;i++){
            books[i].display();
        }
        
    }
