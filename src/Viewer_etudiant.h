
#ifndef VIEWER_ETUDIANT_H
#define VIEWER_ETUDIANT_H

#include "Viewer.h"



class ViewerEtudiant : public Viewer
{
public:
    ViewerEtudiant();

    int init();
    int render();
    int update( const float time, const float delta );

protected:

void init_cube();    
void draw_cube(const Transform&);


void init_cylindre();
void draw_cylindre(const Transform&);


void init_disque();
void draw_disque(const Transform&);


void init_cone();
void draw_cone(const Transform&);


void init_sphere();
void draw_sphere(const Transform&);


void draw_avion_base(const Transform&);
void draw_avion(const Transform&);


void init_terrain(const Image&);
void draw_terrain(const Transform&);


void init_lava(const Image&);
void draw_lava(const Transform&);


void init_quad(const Image&);
void init_coord_jet(const Image&);
void draw_jet(const Transform&, int tex);
void draw_nature(const Transform&);


void init_cube1();
void draw_cube1(const Transform&);


//tout pour le volcan (objet complexe)
    
int volcan_NBPT=7;
int volcan_NBROT=20;

void create_vertex_normal_volcan();
void init_volcan();  
void draw_volcan(const Transform &T);   


    /// Declaration des Mesh
    Mesh m_cylindre;
    Mesh m_disque;
    Mesh m_cone;
    Mesh m_sphere;
    Mesh m_terrain;
    Mesh m_cube1;
    Mesh m_lava;
    Mesh m_volcan;
    
	
    /// Declaration des Textures
    GLuint terrain_texture;
    GLuint arbre_texture;
    GLuint arbre_texture2;
    GLuint arbre_texture3;
    GLuint arbre_texture4;
    GLuint sol;
    GLuint cubemap;
    GLuint avion_tex;
	 ///Declaration des Images 
	 Image m_terrainAlti;
	 
	 ///Declaration des Transformation 
	  Transform m_t_avion;
	  
	 ///Declaration des tableaux
	 Vector tab_nature[130];
	 int  tab_text[130];
	 Point volcan_v[20][7];
	 Vector volcan_vn[20][7];
	

};



#endif

