#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *a;
};
void create(struct Stack *st)
{
    printf("enter size ");
    scanf("%d",&st->size);
    st->top=-1;
    st->a=(int*)malloc(st->size*sizeof(int));
}
void display(struct Stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        printf("%d ",st.a[i]);
    }
    printf("\n");
}
void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
    {
        printf("stack overflow");
    }
    else
    {
        st->top++;
        st->a[st->top]=x;
    }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("stack underflow");

    }
    else
    {
        x= st->a[st->top];
        st->top--;
    }
    return x;
}
int peek(struct Stack st,int p)
{
    int x=-1;
    if(st.top-p+1<0)
    {
        printf("invalid position");
    }
    else
    {
        x= st.a[st.top-p+1];
    }
    return x;
}
int stacktop(struct Stack st)
{
    if(st.top==-1)
    {
        return -1;
    }
    else
    {
        return st.a[st.top];
    }
    
}
int isfull(struct Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isempty(struct Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void main()
{
    struct Stack st;
    create(&st);
    printf("%d \n",isempty(st));
    push(&st,24);
    push(&st,34);
    push(&st,44);
    push(&st,54);
    printf("%d \n",peek(st,3));
    display(st);
    printf("%d \n",pop(&st));
    printf("%d \n",isfull(st));
    display(st);
    printf("%d \n",stacktop(st));
}