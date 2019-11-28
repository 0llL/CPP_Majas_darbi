program kastes;
var aka : integer;
 tuksa : integer;
begin
  tuksa:=0;
  aka:=Random(100)+1;
  if (aka>0) then
  begin
    Write('aka kaste ir ');
    write(aka);
    write(' prieksmets, tie tika parvietoti uz tukso kasti');
    tuksa:=aka;
  aka:=0;
    end
else
begin
    writeln('aka kaste ir tuksa');
    end;
    readln;
end.        
