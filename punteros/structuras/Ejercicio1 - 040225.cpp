/*Una estructura (Struct) esuna forma de agrupar variables de diferetes tipos baso el mismo nombre. 
> Es como crear un tip de dato personalizado, adaptado a las necesidades de tu programa*/

struct Persona
    {
        string nombre;
        int edad;
        float altura;
    };

    int main()
    {
        Persona persona1;
        persona1.nombre = "juan";
        persona1.edad = 30;
        persona1.altura = 1.70;
    }
