printPointer("fuu");
void printPointer(const char *str){
   const char *p;
    p=str;    
     while(*p){
         cout<<*p;
         p++;
     }
}
################################################################
hello("hello there");
void hello(const char *str) { Serial.println(str); }
################################################################
  int zahl = 100;
  printf ("Value von zahl: %d\n", zahl);	//100
  int *p1 = &zahl;
  //100, * holt den Wert, der sich in der Speicheradresse befindet
  //die in p1 drin ist
  printf ("Value von *p1: %d\n", *p1);
  printf ("Value von p1: %d\n", p1);	//Speicheradresse: 1822935687

  int *p2;
  p2 = &zahl;
  printf ("Value von *p2: %d\n", *p2);	//100
  printf ("Value von p2: %d\n", p2);	//Speicheradresse: 1822935687

  int zahl2 = 33;
  //p2 = zahl2; //ERROR invalid conversion from int to int*
  p2 = &zahl2;
  printf ("Value von *p2: %d\n", *p2);	//33
  printf ("Value von p2: %d\n", p2);	//Speicheradresse: 35939284973

  int a = 100, *pa = &a;	/* a wird mit 100 initialisiert, pa zeigt gleich auf a */
  printf ("a = %d\n", a);	//100
  printf ("*pa = %d\n", *pa);	//100

  *pa = 333;			//write new value to variable a (Speicheradresse von a)
  printf ("a = %d\n", a);	//333
  printf ("*pa = %d\n", *pa);	//333

int feld[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, i2;
 
  for (i2 = 0; i2 < 10; i2++) 
    printf ("Element %d = %d\n", i2, *(feld + i2) );
################################################################
int* ptr;
int a[5];
ptr = &a[2];  // &a[2] is the address of third element of a[5].
################################################################
    int *pa;
    int a = 100;
    pa = &a; //pa hat die Adresse von a
    cout <<"*pa: "<<*pa<<endl; //100
    *pa = 500; //*pa und a haben nun gleichen Wert 500
    
   cout <<&a<<" "<<a<<" *pa:"<<*pa<<" p: "<<pa<<endl;
  //0x7ffda209716c 500   *pa:500     p: 0x7ffda209716c  
################################################################
################################################################
################################################################
################################################################
################################################################
