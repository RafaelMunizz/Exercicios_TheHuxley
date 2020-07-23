msg = "Delação rejeitada."

crime_delator = input()

if( (crime_delator == "roubo") or (crime_delator == "tráfico") or (crime_delator == "homic�dio") ):
    if( (crime_delator == "roubo") or (crime_delator == "tráfico") ):
        valor_crime_delator = int(input())
    
    crime_delatado = input()

    if( (crime_delatado == "roubo") or (crime_delatado == "tráfico") or (crime_delatado == "homic�dio") ):
        
        if( (crime_delatado == "roubo") or (crime_delatado == "tráfico") ):
            valor_crime_delatado = int(input())

        if( (crime_delator == "roubo") or (crime_delator == "tráfico") ):
            if( crime_delatado == "homic�dio" ):
                msg = "Delação concedida."
    
        if( (crime_delator == "roubo") and (crime_delatado == "roubo") ):
            if( valor_crime_delatado > (5*valor_crime_delator) ):
                msg = "Delação concedida."
    
        if( (crime_delator == "roubo") and (crime_delatado == "tráfico") ):
            if( valor_crime_delatado > (3*valor_crime_delator) ):
                msg = "Delação concedida."
            
        if( (crime_delator == "tráfico") and (crime_delatado == "tráfico") ):
            if( valor_crime_delatado > (5*valor_crime_delator) ):
                msg = "Delação concedida."
            
        if( (crime_delator == "homic�dio") and (crime_delatado == "homic�dio") ):
            msg = "Delação concedida."
    else:
        msg = "Crime inv�lido."
else:
    msg = "Crime inv�lido."


print( msg )
