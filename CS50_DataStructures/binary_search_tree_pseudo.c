// BINARY SEARCH TREE
//
// typedef struct node
// {
//     int number;
//     struct node *right;
//     struct node *left;
// }
// node;
//
// bool search(node *tree, int number)
// {
//      if (tree == NULL)
//      {
//          return false;
//      }
//      else if (number < tree->number)
//      {
//          return search(tree->left, number);
//      }
//      else if (number > tree->number)
//      {
//          return search(tree->right, number);
//      }
//      else
//      {
//          return true;
//      }
// }
