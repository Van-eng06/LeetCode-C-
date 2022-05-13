/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        //using queue because it's FIFO
     queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        while(q.size()!=0){
            
            Node * cur = q.front();
            q.pop();
            
            if(!cur){
               q.push(NULL);
                if(q.front()==NULL)break;
                
                continue;
            }
            
            
            cur->next = q.front();   // Assigning the next ptr
            
            if(cur->left!=NULL)q.push(cur->left);
            if(cur->right!=NULL)q.push(cur->right);
            
            
        }
        
        
        return root;   
    }
};
