#include <string>
#include <iostream>

/*
 * Problem outlines.
 * Suppose you had a LinkedList class similar to the one that is described in the Linked Data Structures notes, with the following private members.

class LinkedList
{
private:
    struct Node
    {
        std::string value;
        Node* next;
    };

    Node* head;
};
Write the definition of a member function in the LinkedList class called transformEach, which takes one parameter, a function that transforms a string into another string, and changes the value in every node to be the result of calling the transformation function on every string. For example, if you had a LinkedList called list containing three nodes with the values "Boo", "is", and "happy", and then you did this:

list.transformEach([](const std::string& s) { return s + "!"; });
then you would expect list's nodes to contain "Boo!", "is!", and "happy!" afterward.

You'll need to decide on the right signature for the member function — that's part of what the question is asking you to consider. You cannot assume that there are any public member functions, nor can you assume that there are any private member functions or member variables other than what you see listed above, which are sufficient for solving the problem.
 *
 *
 *
 *
*/



class Node{
public:
	std::string value;
	Node* next;
	Node(){
		value = ""; 
		next = NULL;
	}
	Node(std::string value){
		this->value = value;
		this->next = NULL;
	}
};

class linkedList{
public:
	Node* head;
	linkedList(std::string value){			
		head = new Node(value);
	}
	void insert(std::string value){
		Node* newNode = new Node(value);
		Node* temp = head; 

		if(temp->next == NULL){
			temp->next = newNode;
		}

	};

	void printList(){
		Node* temp = head;
		std::cout << std::endl; 
		while(temp != NULL){
			std::cout << temp->value << " ";
			temp = temp->next;
		}
	}
	void transformEach(){
		Node* temp = head;
		while(temp != NULL){
			temp -> value = temp -> value + "!"; 
			temp = temp -> next;
		}
	}
	
};


int main(){
	linkedList list("boo");
	list.insert("is cool");

	list.printList();
	list.transformEach();
	list.printList();
	

	return 1;
}

