class Solution {
    public int romanToInt(String s) {
        char[] list = s.toCharArray();
        int val = 0;

        for (int i = 0; i < list.length; i++) {

            if (i+1 < list.length){
                if (list[i+1] == 'V' && list[i] == 'I'){
                    val+=4;
                    i++;
                    continue;
                }
                else if (list[i+1] == 'X' && list[i] == 'I'){
                    val+=9;
                    i++;
                    continue;
                }
                else if (list[i+1] == 'L' && list[i] == 'X'){
                    val+=40;
                    i++;
                    continue;
                }
                else if (list[i+1] == 'C' && list[i] == 'X'){
                    val+=90;
                    i++;
                    continue;
                }
                else if (list[i+1] == 'D' && list[i] == 'C'){
                    val+=400;
                    i++;
                    continue;
                }
                else if (list[i+1] == 'M' && list[i] == 'C'){
                    val+=900;
                    i++;
                    continue;
                }
            }

            if (list[i] == 'I') {
                val += 1;
            } else if (list[i] == 'V') {
                val += 5;
            } else if (list[i] == 'X') {
                val += 10;
            } else if (list[i] == 'L') {
                val += 50;
            } else if (list[i] == 'C') {
                val += 100;
            } else if (list[i] == 'D') {
                val += 500;
            } else if (list[i] == 'M') {
                val += 1000;
            }
        }
        return val;
    }
}