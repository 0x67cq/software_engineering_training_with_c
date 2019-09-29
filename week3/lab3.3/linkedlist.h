
typedef void (* chandler ) ();

// 修改点1 增加命令结构体
typedef struct cnode{
    char* cname; // command name
    char* cdesc; // command descript
    chandler chandler;
    /*struct cnode* next;*/
} cnode;         /* command node */


// 操作函数声明   -> 接口 
//
char* getname(cnode* c);

char* getdesc(cnode* c);

chandler gethandler(cnode* c);
