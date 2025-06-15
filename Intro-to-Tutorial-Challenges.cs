using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'introTutorial' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER V
     *  2. INTEGER_ARRAY arr
     */
    
    public static int introTutorial(int V, List<int> arr)
    {
        int left = 0, right = arr.Count;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] < V)
                left = mid + 1;
            else
                right = mid - 1;
        }

        if (left < arr.Count && arr[left] == V)
            return left;
        else
            return -1;
    }


public static int introTutorial2(int V, List<int> arr)
    {
        int left = 0, right = arr.Count - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (arr[mid] == V)
                return mid;
            else if (arr[mid] < V)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }

    


}


class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int V = Convert.ToInt32(Console.ReadLine().Trim());

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        int result = Result.introTutorial(V, arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
