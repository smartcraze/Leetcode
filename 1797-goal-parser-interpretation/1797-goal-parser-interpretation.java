class Solution {
    public String interpret(String command) {
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<command.length();i++){
            if(command.charAt(i)=='(' && command.charAt(i+1)==')'){
                sb.append('o');
                i++;

            }else if(command.charAt(i)=='(' && command.charAt(i+3)==')'){
                sb.append("al");
                i+=3;
            }else{
                sb.append(command.charAt(i));
            }
        }
        return sb.toString();
        
    }
}