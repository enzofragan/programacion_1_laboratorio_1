void ejemploCargaSecuencial (void)
{
    int edad;
    float precio;
    int listadoEdades[5]={22,33,44,11,55};
    float listadoPrecios[5];
    int i;

    ///edad=66;

    for(i=0;i<5;i++)
    {
        printf("ingrese el %d un numero: ",i);
        scanf("\n %f",&listadoPrecios[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\n %d: %.2f",i,listadoPrecios[i]);
    }

    /**< for(i=0;i<5;i++)
    {
        printf("ingrese el numero: %d ",i);
        scanf("\n %d",&listadoEdades[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\n %d: %d",i,listadoEdades[i]);
    } */
   /**<  printf("\nedad: %d",edad);
    printf("\nedad: %d", &edad);
    printf("\n &listadoEdades: %d",&listadoEdades);
    printf("\n listadoedades: %d",listadoEdades);
    printf("\n listadoedades[0]: %d",listadoEdades[0]);
    printf("\n &listadoedades[0]: %d",&listadoEdades[0]);
    printf("\n listadoedades[4]: %d",listadoEdades[4]);
    printf("\n listadoedades[5]: %d",listadoEdades[5]);
     */
}
