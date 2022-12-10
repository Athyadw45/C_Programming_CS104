#include<stdio.h>

float grand(float tot,float gt)
{
  float dis,nt,gst=0.18*tot;
  if(tot>=60000)
  {
  dis=0.15*tot;
  }
  else if(tot>=30000)
  {
  dis=0.10*tot;
  }
  else
  {
  dis=0;
  }
  nt=tot-dis;
  gt=nt+gst;
  printf("\n\t THE DISCOUNT IS = %f",dis);
  printf("\n\t THE GST ON PRODUCT IS = %f",gst);
  printf("\n\t THE GRAND TATAL IS = %f",gt);

 return gt;
}
int main()

{
int i,a,opt,c1,c2,c3,qt,n;
float tot,gt;



  printf(" \n\n\t\t\t\t  W E L C O M E ");
  printf(" \n\t\t\t   EVOLVE ELECTRONICS Pvt. Ltd.");
  printf(" \n\t\t\t    Plot no. 74 Bus Stand Road,");
  printf(" \n\t\t\t    ShivajiNagar,PUNE:- 411003.");
  printf("\n\n -------------------------------------------------------------------------------");
  printf("\nEnter The No.of Products: ");
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
  printf(" \n\n    Enter the CODE of the Product:");
  printf(" \n\t11:- PHONE \n\t22:- KEYBOARD \n\t33:- LAPTOP \n\t44:- PRINTERS \n\t55:- GRAPHICS CARD ");
  printf("\n    ENTER HERE:");
  scanf("%d",&opt);
  switch(opt)
	{
	    case 11:
	    printf("\n   Enter the model name of the Phone");
	    printf("\n\t 12:- Samsung \n\t 13:- MI \n\t 14:- Apple \n\t 15:- Oneplus");
	    printf("\n ENTER HERE:");
	    scanf("%d",&c1);
	    switch(c1)
	    {
		  case 12:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Z FOLD 3\t\tRs.40000 \n\t 2:-A33\t\t\t\tRs.24000 \n\t 3:-S23\t\t\t\tRs.30000 \n\t 4:-F13\t\t\t\tRs.13000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*40000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*24000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*30000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*13000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;

		  case 13:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-NOTE 12 PRO MAX\t\tRs.10000 \n\t 2:-MI 12\t\t\t\tRs.35000 \n\t 3:-MI FOLD\t\t\t\tRs.25000 \n\t 4:-REDMI 12\t\t\tRs.9000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*10000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*35000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*25000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*9000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }
		  break;

		  case 14:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-iPHONE 14\t\t\tRs.25000  \n\t 2:-iPHONE 14 PLUS\t\tRs.30000 \n\t 3:-iPHONE 14 PRO\t\tRs.35000 \n\t 4:-iPHONE 14 PRO MAX\tRs.40000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*25000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*30000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				grand(tot,gt);
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*35000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*40000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }
		  break;

		  case 15:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-ONEPLUS NORD 3\t\t\t\tRs.25000 \n\t 2:-ONEPLUS NORD CE 3\t\t\tRs.15000 \n\t 3:-ONEPLUS 10 PRO\t\t\t\tRs.45000 \n\t 4:-ONEPLUS 10R\t\t\t\t\tRs.40000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*25000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*15000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*45000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*40000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }
		  break;

		  default:
		  printf("invalid");

	    }

	    break;

	    case 22:
	    printf("\n   Enter the model of the Keyboard");
	    printf("\n\t 23:- Logitech  \n\t 24:- Zebronics \n\t 25:- HyperX \n\t 26:- Alienware");
	    printf("\n ENTER HERE:");
	    scanf("%d",&c1);
	    switch(c1)
	    {
		  case 23:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Office\t\t\t\tRs.550  \n\t 2:-Gaming\t\t\t\tRs.2000 \n\t 3:-Professional\t\tRs.1500 \n\t 4:-Combo\t\t\t\tRs.2500");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*550;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*2000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*1500;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*2500;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;

		  case 24:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Office\t\t\t\tRs.450  \n\t 2:-Gaming\t\t\t\tRs.1500 \n\t 3:-Professional\t\tRs.1000 \n\t 4:-Combo\t\t\t\tRs.2000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*450;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*1500;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*1000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*2000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;


		  case 25:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Office\t\t\t\tRs.700  \n\t 2:-Gaming\t\t\t\tRs.2500 \n\t 3:-Professional\t\tRs.2000 \n\t 4:-Combo\t\t\t\tRs.3000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*700;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*2500;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*2000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*3000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;



		  case 26:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Office\t\t\t\tRs.600 \n\t 2:-Gaming\t\t\t\tRs.1800 \n\t 3:-Professional\t\tRs.1300 \n\t 4:-Combo\t\t\t\tRs.2300");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*600;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*1800;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*1300;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*2300;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;


		  default:
		  printf("invalid");

	    }

	    break;

	    case 33:
	    printf("\n   Enter the model name of the laptop");
	    printf("\n\t 34:- Lenovo \n\t 35:- Apple \n\t 36:- Asus \n\t 37:- HP");
	    printf("\n ENTER HERE:");
	    scanf("%d",&c1);
	    switch(c1)
	    {
		  case 34:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Legion 5\t\t\t\tRs.60000  \n\t 2:-Legion 5i\t\t\t\tRs.55000 \n\t 3:-Ideapad\t\t\t\t\tRs.50000 \n\t 4:-Thinbook\t\t\t\tRs.45000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*60000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*55000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*50000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*45000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;

		  case 35:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Macbook\t\t\t\tRs.60000  \n\t 2:-Macbook Pro\t\t\tRs.55000 \n\t 3:-Macbook Pro2021\t\tRs.50000 \n\t 4:-Macbook Pro 2022\tRs.45000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
		  {
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*60000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*55000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*50000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*45000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		      }

	       break;


		  case 36:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Rog\t\t\t\tRs.60000 \n\t 2:-Tuf\t\t\t\tRs.55000 \n\t 3:-Vivobook\t\tRs.50000 \n\t 4:-Zenbook\t\t\tRs.45000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*60000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*55000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*50000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*45000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;

		  case 37:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-Omen\t\t\t\tRs.60000 \n\t 2:-Pavillion\t\t\tRs.55000 \n\t 3:-Victus\t\t\t\tRs.50000 \n\t 4:-Elitebook\t\t\tRs.45000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*60000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*55000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*50000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*45000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }
		  break;

		  default:
		  printf("invalid");

	    }

	    break;

	    case 44:
	    printf("\n   Enter the Model name of the Printer");
	    printf("\n\t 45:- HP \n\t 46:- BROTHER \n\t 47:- EPSON \n\t 48:- CANON");
	    printf("\n ENTER HERE:");
	    scanf("%d",&c1);
	    switch(c1)
	    {
		  case 45 :
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-LASERJET 1060 5\t\t\tRs.15000  \n\t 2:-LASER 2080 5i\t\t\tRs.12000 \n\t 3:-INKJET 450\t\t\t\tRs.6000 \n\t 4:-INKTANK 419\t\t\t\tRs.10000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*15000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*12000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*6000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*10000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;

		  case 46:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-ULTRA LASER\t\t\t\tRs.15500  \n\t 2:-LASER Pro\t\t\t\tRs.13500 \n\t 3:-INKKART 2351\t\t\tRs.10000 \n\t 4:-INKBEAM 1923\t\t\tRs.7000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
		  {
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*15500;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*13500;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*10000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*7000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				

			  break;

			  default:
			       printf("enter the valid input");

		      }

	       break;


		  case 47:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-LASER BOT\t\t\t\tRs.14000 \n\t 2:-COLOUR LASER\t\t\tRs.17000 \n\t 3:-INKBOOST\t\t\t\tRs.12000 \n\t 4:-BIGTANK\t\t\t\t\tRs.9000 ");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*14000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*17000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*12000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*9000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  default:
			       printf("enter the valid input");

		       }

		  break;

		  case 48:
		  printf("\n  Enter the Model No.");
		  printf("\n\t 1:-SPEEDLEASOR\t\t\t\tRs.15000 \n\t 2:-ULTRA LES\t\t\t\tRs.13000 \n\t 3:-MINI BOT\t\t\t\tRs.11000 \n\t 4:ELITE TANK\t\t\t\tRs.9000");
		  printf("\n ENTER HERE:-");
		  scanf("%d",&c2);
		  switch(c2)
			{
			  case 1:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*15000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 2:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*13000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 3:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*11000;
				printf("\n\n\t\t\t\t\t Total amount is = %f",tot);
				
			  break;

			  case 4:
				printf("Enter The Quantity:-");
				scanf("%d",&qt);
				tot=qt*9000;
				printf("\n\n\t\t\t\t\t\t Total amount is = %f",tot);
				

			  break;

			  default:
			       printf("enter the valid input");

		       }
	       }

	    break;

	    case 55:
		printf("   OUT OF STOCK");
	    break;

	    default:
	    printf("invalid");

	}

  }

//   for(i=0;i<a;i++)
//   {
// 	   printf("\n%d",&pur[i]);
//   }

return 0;
}