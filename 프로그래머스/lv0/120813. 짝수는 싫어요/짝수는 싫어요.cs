using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
        List<int> list = new List<int>();
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 1)
            {
                list.Add(i);
            }
        }
        
        int[] answer = new int[list.Count];
        for(int i = 0; i < list.Count; i++)
        {
            answer[i] = list[i];
        }
        return answer;
    }
}