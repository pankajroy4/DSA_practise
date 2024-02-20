class Compare{
    public static void main(String []args){
        String s1="Ram";
        String s2="Ram";
        System.out.println(s1.equals(s2)); //output--->true

        String s3=new String("Ram");
        String s4=new String("Ram");
        System.out.println(s3.equals(s4));  //output -->true
    }
}
//original equals() methos compares the address stored in object references.
// As we know s1 and s2 will point to same string object created in SCP (String constant pool ).So the output is 'true'.
//s3 and s4 will store two different addresses.
//But,the String class has overidden the method equals().This is the reason that we got 'true' as    output when comparing s3 and s4 despite after holding different addesss.

