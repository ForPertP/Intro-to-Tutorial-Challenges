import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'introTutorial' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER V
     *  2. INTEGER_ARRAY arr
     */

    public static int introTutorial(int V, List<Integer> arr) {
        int left = 0, right = arr.size();
        
        while (left < right) {
            int mid = (left + right) / 2;
            if (arr.get(mid) < V)
                left = mid + 1;
            else
                right = mid;
        }

        if (left < arr.size() && arr.get(left) == V)
            return left;
        else
            return -1;
    }


    public static int introTutorial2(int V, List<Integer> arr) {
        int left = 0, right = arr.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            int value = arr.get(mid);
            if (value == V)
                return mid;
            else if (value < V)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }


    public static int introTutorial3(int V, List<Integer> arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) == V)
                return i;
        }

        return -1;
    }
}


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int V = Integer.parseInt(bufferedReader.readLine().trim());

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        int result = Result.introTutorial(V, arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
