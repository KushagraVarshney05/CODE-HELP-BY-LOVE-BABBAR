// Replace Spaces
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string temp="@40";
        for (int i = 0; i < str.length(); i++) {
          if (str[i]==' ')
		  {
			  str.replace(i,1,temp);
		  }
        }
		return str;
}