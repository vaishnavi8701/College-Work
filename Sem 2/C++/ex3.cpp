#include <iostream>
using namespace std;

class matrix
{
        int m[3][3],i,j;
        public:
                void enter()
                {
                        cout << "Enter the Matrix: \n";
                        for(i=0; i<3; i++)
                        {
                                for(j=0; j<3; j++)
                                {
                                        cin >> m[i][j];
                                }
                        }

                }


                void display()
                {
                        cout << "Displaying the matrix: \n";
                        for(i=0; i<3; i++)
                        {
                                for(j=0; j<3; j++)
                                {
                                        cout <<m[i][j] <<" ";
                                }
                                cout <<endl;
                        }
                }

                matrix operator +(matrix temp)
                {
                        matrix add;

                        for(i=0; i<3; i++)
                        {
                                for(j=0; j<3; j++)
                                {
                                        add.m[i][j] = m[i][j] + temp.m[i][j];
                                }
                        }
                        return add;
                }
                
            	matrix operator ++()
            	{
            		matrix prefix;
					for(i=0; i<3; i++)
                       {
                           for(j=0; j<3; j++)
                                {
                                        prefix.m[i][j] = ++m[i][j];
                                }
                        
						}
					return prefix;
				}
				
				matrix operator ++(int)
            	{
            		matrix postfix;
					for(i=0; i<3; i++)
                       {
                           for(j=0; j<3; j++)
                                {
                                        postfix.m[i][j] = m[i][j]++;
                                }
                        
						}
					return postfix;
				}
				
               matrix operator-(matrix temp)
               {
                        matrix sub;

                        for(i=0; i<3; i++)
                        {
                                for(j=0; j<3; j++)
                                {
                                        sub.m[i][j] = m[i][j] - temp.m[i][j];
                                }
                        }
                        return sub;
                }
                
                matrix operator --()
            	{
            		matrix prefix;
					for(i=0; i<3; i++)
                       {
                           for(j=0; j<3; j++)
                                {
                                        prefix.m[i][j] = --m[i][j];
                                }
                        
						}
					return prefix;
				}
				
				matrix operator --(int)
            	{
            		matrix postfix;
					for(i=0; i<3; i++)
                       {
                           for(j=0; j<3; j++)
                                {
                                        postfix.m[i][j] = m[i][j]--;
                                }
                        
						}
					return postfix;
				}


};

int main()
{
        matrix A,B,C,D;
        A.enter();
        B.enter();
        C = A + B;
        C.display();
        D = A - B;
        D.display();
        return 0;
}



