#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int index;
    Node *l,*r;
    Node(int v=0)
    {
        l=NULL;
        r=NULL;
        index=v;
    }
};
int layer(Node *a)
{
    if(a->r)
    {
        return 1+layer(a->r);
    }
    return 1;
}
struct Tree{
    Node *root;
    Tree()
    {
        root=NULL;
    }
    void put(int n)
    {
        Node *a=new Node(n);
        Node *b=root;
        if(!root)
        {
            root = a;
            return;
        }
        while(b->l && b->r)
        {
            if(layer(b->l) > layer(b->r))
            {
                b=b->r;
            }
            else
            {
                b=b->l;
            }
        }
        if(!b->l)
        {
            b->l=a;
        }
        else
        {
            b->r=a;
        }
    }
    void Print(int mode=1) {
        if(mode == 1) print(root);
    }
    void print(Node *b)
    {
        if(!b)
        {
            return;
        }
        cout<<b->index<<" ";
        print(b->l);
        print(b->r);
    }
    void print2(Node *b)
    {
        queue<Node*> q;
        Node* a;
        if(root)
        {
            q.push(root);
        }
        while(!q.empty())
        {
            a=q.front();
            if(a->l)
            {
                q.push(a->l);
            }
            if(a->r)
            {
                q.push(a->r);
            }
            cout<<a->index<<" ";
            q.pop();
        }
        cout<<endl;
    }
};
int main()
{
    int n,a;
    Tree b;
    while(cin>>n && n)
    {
        b.put(n);
    }
    b.Print();
    cout<<"\n";
    b.print2();
    
}
