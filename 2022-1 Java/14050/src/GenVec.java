
public class GenVec{
    public static void main(String[] args){
        MyVector<Integer> v = new MyVector<Integer>(100);   // 100개짜리로 한다.
        v.insert(11);
        v.insert(22);
        v.insert(33);
        for (int i=0; i<v.size(); i++){
            System.out.println(v.get(i));
        }
    }
}