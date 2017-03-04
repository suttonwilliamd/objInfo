
#include <iostream>
#include <fstream>

using namespace std;

class File
{
	
	
	public:
	File(char* filename);
	
	private:
	ifstream ifs;
	
};



File::File(char* filename)
{
  std::string fileIn(filename);
  //std::string prefix("v ");
  
	
  string line;
  int vertices = 0;
  int textureCoords = 0;
  int vertexNormals = 0;
  int faces = 0;
  
  
  ifstream ifs(filename);
  if (ifs.is_open())
  {
    while ( getline (ifs,line) )
    {
		
		
	  if (line.find("v ") == 0)
	  {
		vertices++;
	  } else
	  if (line.find("vt ") == 0)
	  {
		textureCoords++;
	  } else
	  if (line.find("vn ") == 0)
	  {
		vertexNormals++;
	  } else
	  if (line.find("f ") == 0)
	  {
		faces++;
	  } else
		  cout << line << endl;
    }
    ifs.close();
  }

  else
  {	  
	  cout << "Unable to open file"; 
  }
  
	
	cout << "Vertices(v ): " << vertices << endl;
	cout << "Texture Coords(vt ): " << textureCoords << endl;
	cout << "Vertex Normals(vn ): " << vertexNormals << endl;
	cout << "Faces(f ): " << faces << endl;
	
	
	
	//cout << filename << endl;
}