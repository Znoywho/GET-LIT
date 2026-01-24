#include "solution.h"

ListNode* mergeKLists(vector<ListNode*>& lists){
  vector<pair<int,int>> l;
  int sum = 0;
  for(int i = 0;i < lists.size();i++){
    int count = 0;
    ListNode* p = lists[i];
    while (p!=nullptr) {
      count++;
      p = p->next;
    }
    l.push_back({count,0});
    sum += count;
  }
  

  
}

