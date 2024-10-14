import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static void NFA(int al, int ini, int fin, int Q, int[][][] trans_f) {
        ArrayList<Integer> curr_s = new ArrayList<>(Collections.nCopies(Q, 100));
        ArrayList<Integer> next_s = new ArrayList<>(Collections.nCopies(Q, 100));

        curr_s.set(0, ini);

        System.out.println("Enter the length of the input string");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        for (int i = 0; i < n; i++) {
            int curr_input = array[i];
            System.out.println("Input is: " + curr_input);

            next_s.clear(); // Clear next_s for each input
            for (int state : curr_s) {
                System.out.println("Current state is: " + state);
                if (state == 100) {
                    break;
                }
                if(state== -10){
                    System.out.println("Trap state reached");
                    break;
                }
                for (int k = 0; k < Q; k++) {
                    int nextState = trans_f[state][curr_input][k];
                    if (nextState == -1) {
                        System.out.println("No more state transitions for " + state);
                        break;
                    }
                    next_s.add(nextState);
                    System.out.println("State: " + state + " transitions to " + nextState);
                }
            }

            System.out.println("New State is:");
            curr_s.clear();
            curr_s.addAll(next_s);
            for (int state : curr_s) {
                System.out.print(state + " ");
            }
            System.out.println();
        }

        for (int state : curr_s) {
            if (state == fin) {
                System.out.println("Accepted");
                return;
            }
        }
        System.out.println("Rejected");
    }

    public static void read_file() {
        String filename = "C:\\Users\\AISHA\\OneDrive\\6th sem codes\\a.txt";

        try (Scanner scanner = new Scanner(new File(filename))) {
            int al = scanner.nextInt();
            int Q = scanner.nextInt();
            int ini = scanner.nextInt();
            int fin = scanner.nextInt();
            int[][][] trans_f = new int[Q][al][Q];

            for (int i = 0; i < Q; i++) {
                for (int j = 0; j < al; j++) {
                    for (int k = 0; k < Q; k++) {
                        trans_f[i][j][k] = -1;
                    }
                }
            }

            for (int state = 0; state < Q; state++) {
                for (int symbol = 0; symbol < al; symbol++) {
                    System.out.println("The transitions for state " + state + " with input symbol " + symbol + ":");
                    for (int nextState = 0; nextState < Q; nextState++) {
                        int nextStateInput = scanner.nextInt();
                        if (nextStateInput == -1) {
                            break;
                        }
                        trans_f[state][symbol][nextState] = nextStateInput;
                    }
                }
            }

            System.out.println("Number of alphabets: " + al);
            System.out.println("Number of states: " + Q);
            System.out.println("Initial state: " + ini);
            System.out.println("Final state: " + fin);
            System.out.println("Transition function:");
            for (int i = 0; i < Q; i++) {
                for (int j = 0; j < al; j++) {
                    for (int k = 0; k < Q; k++) {
                        System.out.print(trans_f[i][j][k] + " ");
                    }
                }
                System.out.println();
            }

            System.out.println("Simulating NFA:");
            NFA(al, ini, fin, Q, trans_f);
        } catch (FileNotFoundException e) {
            System.err.println("File not found: " + filename);
        }
    }

    public static void main(String[] args) {
        read_file();
    }
}