/************************************************************/
/*   		AUTHOR      : Mohamed	MeGa	              	*/
/*   		Description : LinkedList DRIVER	  				*/
/*   		DATE        : 2 Jan 2022                    	*/
/*   		VERSION     : V02                            	*/
/************************************************************/



/************************************************************/
/**			LinkedList Directives						 	*/
/************************************************************/
#include	"LinkedList_int.h"
#include	"LinkedList_config.h"
#include	"LinkedList_priv.h"


void	LinkedList_VoidInit(List	*LS)
{
	LS->Size = 0;
	LS->Head = NULL;
}

void	LinkedList_VoidAddNode(List	*LS, DataEntry	Dat, u8 Pos)
{
	Node *q = LS->Head;
	Node *p = (Node *)malloc(sizeof(Node));
	u8 i = 0;
	
	if(pos == 0)
	{
		p->Next  = LS->Head;
		LS->Head = p;
		LS->Head->DataEntry = Dat;

	}else
	{
		for(i=0; i<=Pos-1; i++)
		{
			q=q->Next;
		}
		p->Next = q->Next;
		q->Next = p;
		q->Next->DataEntry = Dat;
	}
	LS->Size++;
}



int		LinkedList_U8IsEmpty(List *LS)
{
	u8 Loc_Return = 0;
	if(LS->Size == 0)
	{
		Loc_Return = 1;
	}else
	{
		Loc_Return = 0;
	}
	return Loc_Return;
}

void	LinkedList_VoidRead(List *LS, u8 Pos, DataEntry * Dat)
{
	Node * q = LS->Head;
	if(Pos == 0)
	{
		Dat = LS->Head->DataEntry;
	}
	else
	{
		for(int i=0; i<pos; i++)
		{
			q = q->Next;
		}
		Dat = q->DataEntry;
	}
}

void	LinkedList_VoidDeleteNode(List *LS, u8 Pos)
{
	Node *temp = LS->Head;
	
	if(Pos == 0)
	{
		temp = LS->Head->Next;
		LS->Head = temp;
	}
	else
	{
		for(i=0; i<=Pos - 1; i++)
		{
			q= q->Next;
		}
		temp = q->Next->Next;
		free(q->Next);
		q->Next = temp;
	}
	LS->Size--;
}


void	LinkedList_VoidDeleteAllNode(List *LS)
{
	Node *q = LS->Head;
	while(q !=NULL)
	{
		q = q->Next;
		free(LS->Head);
		LS->Head = q;
	}
	LS->Size--;
}