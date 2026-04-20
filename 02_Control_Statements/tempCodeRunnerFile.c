int a,b,choice;

printf("Enter the two number here : ");
scanf ("%d %d",&a,&b);

printf("What you want to do:\n1.add\n 2.substract\n 3.multiply\n 4.division\n ");
scanf("%d",&choice);

switch (choice){

    case 1:
    printf("add= %d",a+b);
    break;
    
    case 2:
    printf("Substract= %d",a-b);
    break;

    case 3:
    printf("Multiplication= %d",a*b);
    break;
    
    case 4:
    if(b!=0){
    printf("Div= %f",(float)a/b);
    }
    else{
        printf("division by 0 not allowed");
    }
    break;
    default:
    printf("Invalid")