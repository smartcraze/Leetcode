class Solution {
    public int repeatedStringMatch(String a, String b) {
        int cnt = 1;
        StringBuilder sa = new StringBuilder(a);
       
        while(sa.length()<b.length()){
            sa.append(a);
            cnt++;
        }
        if(sa.toString().contains(b)) return cnt;
        sa.append(a);
        cnt++;
        if(sa.toString().contains(b)) return cnt;
        return -1;
        
    }
}