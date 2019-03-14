int main(int argc, char* argv []){
int found;
binary_tree bt;
file* file_1;
file_1 = fopen(argv[1], "r");  
  
printf("Print in order\n"); 
printinorder(&bt);
printf("\nPrint pre order\n"); 
printpreorder(&bt);
printf("\nPrint post order\n"); 
printpostorder(&bt); 
printf("\n");
found = search(&bt,33);
if (found){
printf("FOUND 33\n");
}
found = search(&bt,38);
if (found){ 
printf("FOUND 38\n");
}
printf("Number of elements in tree: %d\n", btsize(&bt)); 
printf("Tree height: %d\n", treeheight(&bt)); 
  return 0;
}
