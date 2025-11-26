create database Coppel

use Coppel

CREATE TABLE Puestos (
    NoPuesto INT NOT NULL,
    Puesto NVARCHAR(50) NOT NULL,
    Descripcion NVARCHAR(MAX) NULL,
    CONSTRAINT PK_Puestos PRIMARY KEY CLUSTERED (NoPuesto ASC)
);


CREATE TABLE CentroTrabajo (
    NoCentro NVARCHAR(6) NOT NULL,
    NombreCentro NVARCHAR(100) NOT NULL,
    Ciudad NVARCHAR(100) NOT NULL,
    CONSTRAINT PK_CentroTrabajo PRIMARY KEY CLUSTERED (NoCentro ASC)
);

CREATE TABLE Empleados (
    NoEmpleado INT IDENTITY(1,1) NOT NULL,
    Nombre NVARCHAR(50) NULL,
    ApellidoP NVARCHAR(50) NULL,
    ApellidoM NVARCHAR(50) NULL,
    FechaNacimiento DATE NULL,
    RFC NVARCHAR(13) NULL,
    CentroTrabajo NVARCHAR(6) NULL,
    Puesto INT NULL,
    DescripcionPuesto NVARCHAR(MAX) NULL,
    Directivo BIT NULL,
    CONSTRAINT PK_Empleados PRIMARY KEY CLUSTERED (NoEmpleado ASC),
    CONSTRAINT FK_Empleados_Puestos FOREIGN KEY (Puesto) REFERENCES Puestos(NoPuesto),
    CONSTRAINT FK_Empleados_CentroTrabajo FOREIGN KEY (CentroTrabajo) REFERENCES CentroTrabajo(NoCentro)
);

CREATE TABLE Directivos (
    NoEmpleado INT NOT NULL,
    NumeroCentroSupervisa NVARCHAR(6) NOT NULL,
    Prestaciones INT NULL,
    CONSTRAINT PK_Directivos PRIMARY KEY CLUSTERED (NoEmpleado ASC),
    CONSTRAINT FK_Directivos_Empleados FOREIGN KEY (NoEmpleado) REFERENCES Empleados(NoEmpleado),
    CONSTRAINT FK_Directivos_CentroTrabajo FOREIGN KEY (NumeroCentroSupervisa) REFERENCES CentroTrabajo(NoCentro)
);


INSERT CentroTrabajo (NoCentro, NombreCentro, Ciudad) VALUES (N'000871', N'Plaza Jardines', N'Tultitlan')
INSERT CentroTrabajo (NoCentro, NombreCentro, Ciudad) VALUES (N'000983', N'La Torres', N'Tultitlan')
INSERT CentroTrabajo (NoCentro, NombreCentro, Ciudad) VALUES (N'001403', N'Peralvillo', N'Cuauhtemoc')
INSERT CentroTrabajo (NoCentro, NombreCentro, Ciudad) VALUES (N'000893', N'Lagunilla', N'Cuauhtemoc')
INSERT CentroTrabajo (NoCentro, NombreCentro, Ciudad) VALUES (N'000580', N'Pino Suarez', N'Cuauhtemoc')
INSERT CentroTrabajo (NoCentro, NombreCentro, Ciudad) VALUES (N'049003', N'La Primavera Cajas', N'Culiacan')

INSERT Puestos (NoPuesto, Puesto, Descripcion)VALUES (283, N'Vendedor', N'Vendedor electronica');
INSERT Puestos (NoPuesto, Puesto, Descripcion) VALUES (420,N'GT', N'Gerente de Tienda')
INSERT Puestos (NoPuesto, Puesto, Descripcion) VALUES (421,N'GGT', N'Gerente Gral de Tienda')
INSERT Puestos (NoPuesto, Puesto, Descripcion) VALUES (432,N'GTZ', N'Gerente de Zona')
INSERT Puestos (NoPuesto, Puesto, Descripcion) VALUES (520,N'Cajero', N'Cajero Multifuncional')
INSERT Puestos (NoPuesto, Puesto, Descripcion) VALUES (350,N'Vendedor',  N'Vendedor Telcel')

SET IDENTITY_INSERT Empleados ON
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (94658432, N'Saul    ', N'Rivera      ', N'Martinez   ', N'2000-11-03', N'RIMS001103 ', N'000871', 283, N'Vendedor Electronica', 0)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (96061056, N'Samantha  ', N'Castro     ', N'Perez     ', N'1993-10-03', N'CAPS931083 ', N'000871', 420, N'Gerente de Tienda', 1)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (95651054, N'Fernando    ', N'Martinez    ', N'Arce      ', N'1997-02-13', N'MAAF12345  ', N'000983', 520, N'Cajero Multifuncional', 0)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (95984056, N'Armando   ', N'Castañeda     ', N'Santiago  ', N'1996-01-23', N'CASA12345  ', N'001403', 283, N'Vendedor Ropa', 0)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (91561098, N'Francisco    ', N'Perez   ', N'Palacios  ', N'1995-07-11', N'PEPF12345  ', N'001403', 520, N'Cajero Multifuncional', 0)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (94909840, N'Angel     ', N'Martinez    ', N'Reyes     ', N'1983-06-30', N'MARA12345  ', N'000893', 421, N'Gerente General de Tienda', 1)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (97509509, N'Daniel      ', N'Pichardo    ', N'Estudillo ', N'1999-06-27', N'PIED12345  ', N'000580', 350, N'Vendedor Telcel', 0)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (95905904, N'Diana     ', N'Aburto    ', N'Martinez  ', N'2003-12-11', N'DAM12345  ', N'049003', 350, N'Vendedor Telcel', 0)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (98590564, N'Carlos    ', N'Hernandez ', N'Lopez     ', N'2001-03-03', N'CHL12345  ', N'000871', 520, N'Cajero Multifuncional', 1)
INSERT Empleados(NoEmpleado, Nombre, ApellidoP, ApellidoM, FechaNacimiento, RFC, CentroTrabajo, Puesto, DescripcionPuesto, Directivo) VALUES (98980498, N'Martin    ', N'Suarez    ', N'Colins    ', N'1999-04-09', N'MSC12345  ', N'000871', 432, N'Gerente de Zona', 1)
SET IDENTITY_INSERT Empleados OFF;

INSERT Directivos (NoEmpleado, NumeroCentroSupervisa, Prestaciones) VALUES (96061056, N'000871', 1)
INSERT Directivos (NoEmpleado, NumeroCentroSupervisa, Prestaciones) VALUES (94909840, N'000893', 1)
INSERT Directivos (NoEmpleado, NumeroCentroSupervisa, Prestaciones) VALUES (98980498, N'001403', 1)
INSERT Directivos (NoEmpleado, NumeroCentroSupervisa, Prestaciones) VALUES (98590564, N'000893', 1)

Select * From CentroTrabajo;

Select * From Empleados;

Select NoEmpleado,Nombre,CentroTrabajo  From Empleados