public class Solution {
    public string solution(int a, int b) {
    string answer = "";
        string[] day = new string[] { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
        int[] days = new int[] {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int totalDays = 0;
        for(int i=0; i<a-1; i++)
        {
            totalDays += days[i];
        }
        totalDays += b -1;
        
        answer = day[totalDays % 7];
        return answer;
    }
}