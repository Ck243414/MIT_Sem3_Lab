/* Write a menu driven program to do the following:-
a. To compare two strings
b. To convert the uppercase character to lower and vice-versa
c. To display whether an entered string is a substring of the other or not
d. If the entered string is a substring of the other, replace it with “Hello” */
import java.util.Scanner;

class Excercise4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        while (true) {
            System.out.println("String Operations Menu:");
            System.out.println("1. Compare two strings");
            System.out.println("2. Convert uppercase to lowercase and vice versa");
            System.out.println("3. Check if a string is a substring of the other");
            System.out.println("4. Replace substring with 'Hello'");
            System.out.println("5. Exit");
            System.out.print("Enter your choice (1-5): ");

            int choice = in.nextInt();
            //in.nextLine(); // Consume the newline character

            switch (choice) {
                case 1:
                    System.out.print("Enter the first string: ");
                    String firstString = in.next();
                    System.out.print("Enter the second string: ");
                    String secondString = in.next();
                    int comparisonResult = compareStrings(firstString, secondString);
                    if (comparisonResult == 0) {
                        System.out.println("The strings are equal.");
                    } else {
                        System.out.println("The strings are not equal.");
                    }
                    break;
                case 2:
                    System.out.print("Enter a string: ");
                    String inputString = in.next();
                    String convertedString = convertCase(inputString);
                    System.out.println("Converted string: " + convertedString);
                    break;
                case 3:
                    System.out.print("Enter the main string: ");
                    String mainString = in.next();
                    System.out.print("Enter the substring to check: ");
                    String substringToCheck = in.next();
                    boolean isSubstring = checkSubstring(mainString, substringToCheck);
                    if (isSubstring) {
                        System.out.println("The entered string is a substring of the other.");
                    } else {
                        System.out.println("The entered string is not a substring of the other.");
                    }
                    break;
                case 4:
                    System.out.print("Enter the main string: ");
                    String mainString4 = in.next();
                    System.out.print("Enter the substring to replace: ");
                    String substringToReplace = in.next();
                    String replacedString = replaceSubstring(mainString4, substringToReplace);
                    System.out.println("Modified string: " + replacedString);
                    break;
                case 5:
                    System.out.println("Exiting the program. Goodbye!");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 5.");
            }
        }
    }

static int compareStrings(String str1, String str2) {
        return str1.compareTo(str2);
    }

static String convertCase(String str) {
        StringBuilder converted = new StringBuilder();
        for (char c : str.toCharArray()) {
            if (Character.isUpperCase(c)) {
                converted.append(Character.toLowerCase(c));
            } else if (Character.isLowerCase(c)) {
                converted.append(Character.toUpperCase(c));
            } else {
                converted.append(c);
            }
        }
        return converted.toString();
    }

static boolean checkSubstring(String mainString, String substringToCheck) {
        return mainString.contains(substringToCheck);
    }

static String replaceSubstring(String mainString, String substringToReplace) {
        return mainString.replaceFirst(mainString, substringToReplace);
    }
}