// Tail Recursion:-


// A recursive function in which the recursive call is the last body of you function is tail recursion.


void func(){
        // base 
        // kaam
        // call
        func();  // This itself the last step so it
        is tail recursion.
}

// if i will do any thing after the recusive code than it is non - tail recursion

// Important


// This is non tail recursion because in end after getting value from one function its going to multiply by n.

int facto(int n){
    if(n<=1) return 1;
    return n* facto(n-1);
}
 


 // Lets convert this in tail recursion

 // we will take a parameter to solve the issue

 int pro=1;
 int facto (int n,int pro){
    if(n<=1){
        return product;
    }
    return facto(n-1,pro*n); 
 }

// Tail recursion is space efficient and as if there is nothing to work in last recursion call, compiler smartly detects this directly removes previous one and makes call again.


// Same thing we have seen in the tree order traversals

1. preorder----  print ,L  , R   (last step is recursion only)
2.postorder ---  L , R , Print  (last step is not recursion) its printing
3.inOrder---     L , print , R  (last step is recursion only)


