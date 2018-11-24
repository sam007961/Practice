#pragma once
template<class T>
class List {
	struct node {
		T item;
		node* next;
	};
	node* head;
};