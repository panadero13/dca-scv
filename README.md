# dca-scv Luis Miguel Panadero

He creado una nueva funcion en el primer commit en la cual hay un fallo de impresion.

He renombrado el archivo /.git/hooks/pre-commit.sample a pre-commit para poder utilizarlo y comprobar que funciona.

He añadido varios commits sencillos para avanzar la linea temporal del fallo introducio para poder usar bisect.

He usado bisect y he encontrado el commit con la inclusion del error y lo he arreglado.

He añadido un par de alias locales y globales: git co es checkout, git st es git status y git br es branch.