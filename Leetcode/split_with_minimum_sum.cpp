class Solution {
public:
    int splitNum(int num) {
      string a=to_string(num);
      sort(a.begin(),a.end());
      string b,c;
     for(int i=0;i<a.size();i++)
     {
           if(i%2==0)
           b+=a[i];
           else if(i%2!=0)
           c+=a[i];
      
  
     }
     int q=stoi(b);
     int w=stoi(c);
return q+w;
    }
};