#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};
struct Stack *st;

void create()
{
    struct Stack st;
    int n,r;
    st.size=100;
    st.top=-1;
    st.S=(int *)malloc(5*sizeof(int));

    printf("enter a decimal no");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%2;
        Push(&st,r);
        n=n/2;
    }
    while(st.top!=-1)
    {
        printf("%d ",Pop(&st));
    }
}

void Push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
        printf("stack overflow");
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

int Pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("stack underflow");
    else
    {
        x=st->S[st->top];
        st->top--;

    }
    return x;
}

void Display(struct Stack st)
{
    int i;
    for(i=st.top; i>=0; i--)
        printf("%d ",st.S[i]);
    printf("\n");
}


int main()
{
    struct Stack st;
    create();
    return 0;
}
