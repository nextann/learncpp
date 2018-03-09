#include <iostream>

int main()
{
  using namespace std;

  unsigned char option_viewed = 0x01;
  unsigned char option_edited = 0x02;
  unsigned char option_favorited = 0x04;
  unsigned char option_shared = 0x08;
  unsigned char option_deleted = 0x80;

  unsigned char myArticleFlags = 0;
  /*
  myArticleFlags |= option_viewed; //set the article as viewed
  if (myArticleFlags & option_deleted) ... //check if the article was deleted
  myArticleFlags &= ~option_favorited //clear the article as a favorite


  */

  return 0;
}
