
#include <stdio.h>

struct struct1 {
  int number[5];
  int top;
  
}st;

void push(int number)
{
  st.number[st.top]=number;
  st.top++;

  printf("%d Sucessfully added \n",number );
}

int pop()
{
  int out;
  st.number[st.top]=out;
  st.top--;

  printf("%d Sucessfully removed.\n",out);

  return out;
}

int main()
{
  st.top=0;
  int numbe=0;
  int temp=0;
  
  printf("Please select \n\n");
  printf("1 ==> Push elements(Add elements to the array.)\n");
  printf("2 ==> Pop elements (remove elements from array.\n\n)");


for(int i =0 ; i<10;i++){
  printf("Select a Number :");
  scanf("%d",&temp);

    if(temp == 1){
      printf("Enter a number to add : ");
        scanf("%d",&numbe);

      push(numbe);
    }
    else{
      pop();
    }
}
}
