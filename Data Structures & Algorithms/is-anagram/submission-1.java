
class Solution {
    public boolean isAnagram(String s, String t) {
        Hashtable <String,Integer> sChar = new Hashtable<>();
        Hashtable <String,Integer> tChar = new Hashtable<>();

        for (int i=0; i<s.length(); i++){
            if (sChar.containsKey(""+s.charAt(i))) sChar.put(""+s.charAt(i), sChar.get(""+s.charAt(i))+1);
            else sChar.put(""+s.charAt(i),1);
        }
        for (int i=0; i<t.length(); i++){
            if (tChar.containsKey(""+t.charAt(i))) tChar.put(""+t.charAt(i), tChar.get(""+t.charAt(i))+1);
            else tChar.put(""+t.charAt(i),1);
        }
        return sChar.equals(tChar);

    }
}
