// Q.1
// #include <stdio.h>
// int main()
// {
//     int a[500],i,n;
   
//     printf("Enter size of the array shivang : ");
//     scanf("%d", &n);
 
//     printf("Enter elements in array : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
 
//     printf("\nAll negative elements in array are : ");
//     for(i=0; i<n; i++)
//     {
         
//         if(a[i] < 0)
//         {
//             printf("%d", a[i]);
//         }
//     }
 
//     return 0;
// }

// Q.2
// #include<stdio.h>
// int main(){
//           int arr[3][3];
//     int value;
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
//     printf("arr is %d and  %d ",i, j);
//     scanf("%d",&arr[i][j]);
  
// }
// }
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
   
//     printf(" %d ", arr[i][j]);
  
// }
// printf("\n");
// }
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
   
// if(i>=j){
//     value=arr[i][j];
   
// }
  
// }
// printf("\n");
// }
//  printf("%d",value);

//     return 0;
// }


// Q.3

// #include<stdio.h>

// int main(){
//     int rows=3;
//     int cols=3;
//     int arr[rows][cols];

//     int transposeMatrix[cols][rows];

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             printf("Enter the array's row & column size %d :",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            transposeMatrix[i][j]=arr[j][i];
//         }
//     }
    
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            printf("%d ",transposeMatrix[i][j]);
//         }
//         printf(("\n"));
//     }

//     return 0;
// }


// Q.4
// #include<stdio.h>
// #include<string.h>


// int main(){
// printf("hello world\n");

// int arr[3][3];
// int row;
// int col;
// int rowSum=0;
// int colSum=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("enter value at row %d and col %d : ",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }

// printf("enter row no : ");
// scanf("%d",&row);
// // printf("row no is %d\n",row);

// for(int i=row;i==row;i++){
//     for(int j=0;j<3;j++){
//         printf("%d ",arr[i][j]);
//         rowSum+=arr[i][j];
//     }
// }
// printf("sum of row elements is %d\n",rowSum);
// printf("enter col no : ");
// scanf("%d",&col);


// for(int i=row;i<3;i++){
//     for(int j=col;j==col;j++){
//    printf("%d ",arr[i][j]);
//    colSum+=arr[i][j];
//     }
// }
// printf("sum of col elements is %d\n",colSum);

//     return 0;
// }