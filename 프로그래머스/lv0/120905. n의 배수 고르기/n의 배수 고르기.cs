using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n, int[] numlist) {
        List<int> list = new List<int>();
        int[] answer = new int[] {};

        for(int i = 0; i < numlist.Length; i++){
            if(numlist[i] % n == 0){
                list.Add(numlist[i]);
            }
        }
        answer = list.ToArray();
        return answer;
    }
}