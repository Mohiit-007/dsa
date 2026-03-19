#include<iostream>
#include<unordered_map>
using namespace std;

class TrieNode{
    public:
    char data;
    unordered_map<int,TrieNode*> mp; // ASCII , Node
    bool terminal;

    TrieNode(char ch){
        this->data = ch;
        this->terminal = false;
    }
};

void insert(TrieNode* root,string str){
    if(str.length() == 0){
        root->terminal = true;
        return;
    }

    char ch = str[0];
    TrieNode* child;
    if(root->mp.count(ch) == 1){
        child = root->mp[ch];
    } 
    else{
        child = new TrieNode(ch);
        root->mp[ch] = child;
    }

    insert(child,str.substr(1));
}

bool search(TrieNode* root,string str){
    if(str.length() == 0){
        return root->terminal;
    }

    char ch = str[0];
    TrieNode* child;
    if(root->mp.count(ch) == 1){
        child = root->mp[ch];
    }
    else{
        return false;
    }
    bool ans = search(child,str.substr(1));
    return ans;
}

void deletefromTrie(TrieNode* root,string str){
    if(str.length() == 0){
        root->terminal = false;
        return;
    }

    char ch = str[0];
    TrieNode* child;
    if(root->mp.count(ch) == 1){
        child = root->mp[ch];
    } 
    else{
        return;
    }

    deletefromTrie(child,str.substr(1));
}

int main(){
    TrieNode* root = new TrieNode('-');
    insert(root,"car");
    insert(root,"case");
    insert(root,"cover");
    insert(root,"take");
    insert(root,"tank");
    insert(root,"took");
    insert(root,"lake");
    if(search(root,"case")){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    deletefromTrie(root,"case");
    if(search(root,"case")){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
}