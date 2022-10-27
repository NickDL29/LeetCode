bool isSubsequence(char * s, char * t){
    int i, j;

  i = j = 0;

  while (s[i] != '\0') {
    while ((s[i] != t[j]) && t[j] != '\0')
      j++;
      
    if (t[j] == '\0')
      break;
    j++;
    i++;
  }
  if (s[i] == '\0')
    return 1;
  else
    return 0;
}
