'  Programmer: <unknown>
'  Program Name: <unknown>
'  Date: 10/20/2013
'  
'  Comments: 



Sub Main()
  Dim HORAS_REGULARES
  Dim SALARIO_POR_HORA
  Dim HORAS_TRABAJADAS
  Dim OVERTIME
  Dim HORAS_EXTRAS
  Dim SALARIO
  Dim SOCIAL
  Dim IMPUESTO
  Dim PLAN
  Dim PLANDESC
  Dim DENTAL
  Dim EMPLEADO

  horas_regulares = 40
  salario_por_hora = 7.25
  For empleado = 1 To 10
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
  Next empleado
  Console.WriteLine("")
  Console.WriteLine("Program Complete... Press <Enter> to close...")
  Console.ReadLine()
End Sub
