class Solution {
    class Charpair{
        int freq;
        char letter;
        Charpair(char l,int f){
            this.freq=f;
            this.letter=l;
        }
    }
    public String reorganizeString(String s) {
      PriorityQueue<Charpair> h=new PriorityQueue<>((a,b)->b.freq-a.freq);
      Queue<Charpair> q= new LinkedList<>();
      Map<Character, Integer> map = new HashMap<>();
        for (char x : s.toCharArray()) {
            map.put(x, map.getOrDefault(x, 0) + 1);
        }

         for (Map.Entry<Character, Integer> x : map.entrySet()) {
            h.add(new Charpair(x.getKey(), x.getValue()));
        }

        String ans="";
        char last='/';
        while(!q.isEmpty() || !h.isEmpty()){
            if(!h.isEmpty()){
                Charpair ele= h.poll();

                ans+=ele.letter;
                last=ele.letter;
                ele.freq=ele.freq-1;
                System.out.println(ele.letter);
                 System.out.println(ele.freq);
                if(ele.freq>0){
                    q.offer( new Charpair(ele.letter,ele.freq));
                }
            }
            if(!q.isEmpty() && last!= q.peek().letter){
                h.offer(q.poll());
                
            }
            if(h.isEmpty() && !q.isEmpty()){
                return "";
            }
           
        }
        return ans;


    }
}