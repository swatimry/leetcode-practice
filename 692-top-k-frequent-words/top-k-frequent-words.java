class Solution {
    class wordPair{
        int freq;
        String word;
        wordPair(int f,String word){
            this.freq=f;
            this.word=word;
        }
    }
    public List<String> topKFrequent(String[] words, int k) {
        PriorityQueue<wordPair> h=new PriorityQueue<wordPair>(
           (a, b) -> (a.freq == b.freq) ? a.word.compareTo(b.word) : b.freq - a.freq
);
       
       Map<String, Integer> map = new HashMap<>();

        for(String x:words){
          map.put(x, map.getOrDefault(x, 0) + 1);
        }

         map.forEach((key, val) -> {
          
                h.add(new wordPair(val,key));
          
         });

        List<String> ans = new ArrayList<>();

         for(int i=0;i<k;i++){
            ans.add( h.poll().word);
         }
         return ans;

    }
}