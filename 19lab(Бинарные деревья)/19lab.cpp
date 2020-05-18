# include <iostream>
using namespace std;


struct node
{
    int info;
    node *l, *r;
};

node * tree=NULL;

void push(int a,node **t)
{
    if ((*t)==NULL)
    {
        (*t)=new node;
        (*t)->info=a;
        (*t)->l=(*t)->r=NULL;
        return;
    }

        if (a>(*t)->info) push(a,&(*t)->r);
        else push(a,&(*t)->l);
}


void print (node *t,int u)
{
    if (t==NULL) return;
    else
    {
    print(t->l,++u);
    for (int i=0;i<u;++i) cout<<"|";
    cout<<t->info<<endl;
    u--;
    }
    print(t->r,++u);
}

int MaxValue(node * NODE)
{
    if ( NODE == NULL)
        {return -1;}

    int right = MaxValue(NODE->r);
    int left = MaxValue(NODE->l);

    if (NODE->info > left)
        {if (NODE->info > right)
            {return NODE->info;}
        else
            {return right;}}
    else {if(left > right)
        {return left;}
    else
        {return right;}}
}

int main ()
{
    int n;
    int s;
    cout<<"kol-vo elementov  ";
    cin>>n;

    for (int i=0;i<n;++i)
    {
    cout<<"vvedite chislo  ";
    cin>>s;

    push(s,&tree);
    }
    cout<<"derevo\n";
    print(tree,0);
    cout << endl << "Max element dereva :";
    cout << MaxValue(tree);
}
