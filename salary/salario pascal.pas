var 
HORAS_REGULARES: String;
SALARIO_POR_HORA: Integer;
HORAS_TRABAJADAS: Integer;
OVERTIME: Double;
HORAS_EXTRAS: Integer;
SALARIO: Integer;
SOCIAL: Integer;
IMPUESTO: Integer;
PLAN: Integer;
PLANDESC: Integer;
DENTAL: Integer;
EMPLEADO: Integer;

begin
  horas_regulares := 40;
  salario_por_hora := 7.25;
  for empleado := 1 to 10 do 
  begin
    salario = 0
    horas_trabajadas = random(50) + 30
    overtime = salario_por_hora + 1.5
    If (horas_trabajadas > horas_regulares) Then 
      horas_extras = horas_trabajadas - horas_regulares
      salario = overtime * horas_extras
    End If
    salario = salario + (horas_trabajadas * salario_por_hora)
    Console.WriteLine("salario bruto de empleado " & empleado & " es: " & salario)
    social = salario * .08
    impuesto = salario * .13
    salario = salario - (social + impuesto)
    do 
      Console.WriteLine("" & vbcrlf & "plan de empleado " & empleado & " es ")
      plan = random(3)
    Loop While ((plan = 0) AND (plan > 3))
    If (plan = 1) Then 
      plandesc = 19
      Console.WriteLine("individual")
    Else
      If (plan = 2) Then 
        plandesc = 100
        Console.WriteLine("pareja")
      Else
        plandesc = 240
        Console.WriteLine("familiar")
      End If
    End If
    Console.WriteLine(" y al patrono le toca pagar " & plandesc & " dolares")
    salario = salario - dental
    Console.WriteLine("" & vbcrlf & "salario neto de empleado " & empleado & " es: " & salario)
    Console.WriteLine("" & vbcrlf & "" & vbcrlf & "")
  end;
end.
