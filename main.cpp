#include <iostream>
using namespace std;
struct PostTree
{
	PostTree *left;
	PostTree *right;
	char name;
	
};

//liscie
PostTree D = {NULL, NULL, 'D'};
PostTree E = {NULL, NULL, 'E'};
PostTree F = {NULL, NULL, 'F'};
PostTree G = {NULL, NULL, 'G'};

//synowie
PostTree B = {&D, &E, 'B'};
PostTree C = {&F, &G, 'C'};

//ojcowie
PostTree A = {&B, &C, 'A'};


void postorder(PostTree *a){
	if(a){
		postorder(a -> left);
		postorder(a -> right);
		cout<<a -> name<<" ";
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	postorder(&A);
	cout<<'\n';
}
