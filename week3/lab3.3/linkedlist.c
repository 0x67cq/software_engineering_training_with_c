/*
 * file  header
 *
 *
 */
// linkedlist 接口实现 
//
#include "linkedlist.h"

char* getname(cnode* c){
    return c->cname;

}

char* getdesc(cnode* c){
    return c->cdesc;

}

chandler gethandler(cnode* c){
    return c->chandler;

}
