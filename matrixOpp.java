//2)How to perform matrix operations in java?

import java.util.*;

public class matrixOpp {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int p, q, m, n;
        System.out.print("Enter number of rows in first matrix: ");
        p = s.nextInt();
        System.out.print("Enter number of columns in first matrix: ");
        q = s.nextInt();
        System.out.print("Enter number of rows in second matrix: ");
        m = s.nextInt();
        System.out.print("Enter number of columns in second matrix: ");
        n = s.nextInt();

        int a[][] = new int[p][q];
        int b[][] = new int[m][n];
        int c[][] = new int[m][n];
        System.out.println("Enter all the elements of first matrix:");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                a[i][j] = s.nextInt();
            }
        }
        System.out.println("Enter all the elements of second matrix:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = s.nextInt();
            }
        }
        System.out.println("First Matrix:");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }
        System.out.println("Second Matrix:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(b[i][j] + " ");
            }
            System.out.println("");
        }

        mainLoop: while (true) {
            System.out.println("\n**Menu**");
            System.out.println("1. Matrix Addition");
            System.out.println("2. Matrix Subtraction");
            System.out.println("3. Matrix Multiplication");
            System.out.println("4. Terminate the program");
            System.out.println("Enter action number (1-4): ");
            int command;
            if (s.hasNextInt()) {
                command = s.nextInt();
                s.nextLine();
            } else {
                System.out.println("\nILLEGAL RESPONSE. YOU MUST ENTER A NUMBER.");
                s.nextLine();
                continue;
            }
            switch (command) {
                case 1:
                    if (p == m && q == n) {
                        for (int i = 0; i < p; i++) {
                            for (int j = 0; j < n; j++) {
                                for (int k = 0; k < q; k++) {
                                    c[i][j] = a[i][j] + b[i][j];
                                }
                            }
                        }

                        System.out.println("Matrix after addition:");
                        for (int i = 0; i < p; i++) {
                            for (int j = 0; j < n; j++) {
                                System.out.print(c[i][j] + " ");
                            }
                            System.out.println("");
                        }
                    } else {
                        System.out.println("Addition would not be possible");
                    }

                    break;

                case 2:
                    if (p == m && q == n) {
                        for (int i = 0; i < p; i++) {
                            for (int j = 0; j < n; j++) {
                                for (int k = 0; k < q; k++) {
                                    c[i][j] = a[i][j] - b[i][j];
                                }
                            }
                        }
                        System.out.println("Matrix after Subtraction:");
                        for (int i = 0; i < p; i++) {
                            for (int j = 0; j < n; j++) {
                                System.out.print(c[i][j] + " ");
                            }
                            System.out.println("");
                        }
                    } else {
                        System.out.println("Subtraction would not be possible");
                    }

                    break;

                case 3:
                    if (p == m && q == n) {
                        for (int i = 0; i < p; i++) {
                            for (int j = 0; j < n; j++) {
                                for (int k = 0; k < q; k++) {
                                    c[i][j] = a[i][j] * b[i][j];
                                }
                            }
                        }
                        System.out.println("Matrix after Multiplication:");
                        for (int i = 0; i < p; i++) {
                            for (int j = 0; j < n; j++) {
                                System.out.print(c[i][j] + " ");
                            }
                            System.out.println("");
                        }
                    } else {
                        System.out.println("Multiplication would not be possible");
                    }

                    break;

                case 4:
                    System.out.println("Program terminated");
                    break mainLoop;
                default:
                    System.out.println("Wrong choice!!");
            }

        }
    }
}

/*
 Output : 

Enter number of rows in first matrix: 3
Enter number of columns in first matrix: 3
Enter number of rows in second matrix: 3
Enter number of columns in second matrix: 3
Enter all the elements of first matrix:
1
2
3
4
5
6
7
8
9
Enter all the elements of second matrix:
1
2
3
4
5
6
7
8
9
First Matrix:
1 2 3
4 5 6
7 8 9
Second Matrix:
1 2 3
4 5 6
7 8 9

**Menu**
1. Matrix Addition
2. Matrix Subtraction
3. Matrix Multiplication
4. Terminate the program
Enter action number (1-4):
1
Matrix after addition:
2 4 6
8 10 12
14 16 18

**Menu**
1. Matrix Addition
2. Matrix Subtraction
3. Matrix Multiplication
4. Terminate the program
Enter action number (1-4):
2
Matrix after Subtraction:
0 0 0
0 0 0
0 0 0

**Menu**
1. Matrix Addition
2. Matrix Subtraction
3. Matrix Multiplication
4. Terminate the program
Enter action number (1-4):
3
Matrix after Multiplication:
1 4 9
16 25 36
49 64 81

**Menu**
1. Matrix Addition
2. Matrix Subtraction
3. Matrix Multiplication
4. Terminate the program
Enter action number (1-4):
4
Program terminated

 */