/************************************************************/
/*   		AUTHOR      : Mohamed	MeGa	              	*/
/*   		Description : LinkedList DRIVER	  				*/
/*   		DATE        : 2 Jan 2022                    	*/
/*   		VERSION     : V02                            	*/
/************************************************************/

#ifndef	LinkedList_INT_H
#define	LinkedList_INT_H
	


typedef	unsigned int	DataEntry;


typedef struct ListNode{
	DataEntry	Data;
	Node*		Next;
}Node;


typedef	struct	Liststruct{
	unsigned char	Size;
	Node*			Head;
}List;



/************************************************************/
/* 			Description :  PROTOTYPE DECLARTION 		   	*/
/************************************************************/


/************************************************************/
/* Description :  function for initialization The LinkedList*/
/*				  input	 :	void							*/
/*				  output :	void							*/
/************************************************************/
void	LinkedList_VoidInit(List	*LS);




void	LinkedList_VoidAddNode(List	*LS, DataEntry	Dat, u8 Pos);




int		LinkedList_U8IsEmpty(List *LS);



void	LinkedList_VoidRead(List *LS, u8 Pos, DataEntry * Dat);




void	LinkedList_VoidDeleteNode(List *LS, u8 Pos);



void	LinkedList_VoidDeleteAllNode(List *LS);



#endif