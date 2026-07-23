# Volcanic World — 3D Graphics Project in C++

[![C++](https://img.shields.io/badge/C%2B%2B-Graphics-blue)](https://isocpp.org/)
[![OpenGL](https://img.shields.io/badge/OpenGL-3D_Rendering-green)](https://www.opengl.org/)
[![Grade](https://img.shields.io/badge/Grade-16.5%2F20-brightgreen)](#result)

**English** · [Version française](README.fr.md)

University graphics programming project developed in C++ using an OpenGL framework provided by Université Claude Bernard Lyon 1.

The goal was to create a 3D scene containing:

- a complex object built from basic geometric shapes;
- a textured terrain;
- billboards;
- an animation;
- a cubemap surrounding the scene.

![Volcanic world preview](docs/screenshots/volcanic-world.png)

## My idea

I chose to transform the standard scene proposed for the project into a volcanic world.

Instead of using a green terrain, I created an environment made of rock and magma. The water was replaced with lava, while billboards were used to represent lava jets and rocks placed across the terrain.

The required complex object is an aircraft built from several basic shapes, including spheres, cubes, cylinders, and cones.

## Main features

- creation of basic shapes: cube, sphere, cylinder, disc, and cone;
- construction of an aircraft from these shapes;
- generation of terrain from a height map;
- application of magma and lava textures;
- creation of a volcano by rotating a 2D profile around an axis;
- calculation of surface normals for lighting;
- display of lava jets and rocks using billboards;
- addition of a volcanic cubemap;
- animation of the aircraft through the scene.

## Technologies and concepts

- C++
- OpenGL
- 3D meshes
- textures
- geometric transformations
- height maps
- billboards
- cubemaps
- vector calculations
- animation and interpolation

## Main files

```text
.
├── src/
│   ├── Viewer_etudiant.h
│   └── Viewer_etudiant.cpp
├── data/
│   ├── terrain/
│   ├── billboard/
│   └── cubemap/
├── docs/
│   ├── project-report.pdf
│   └── screenshots/
├── README.md
└── README.fr.md
```

Most of my implementation is contained in `Viewer_etudiant.cpp` and `Viewer_etudiant.h`.

The complete project report is available here: [`docs/project-report.pdf`](docs/project-report.pdf).

## Running the project

This repository only contains the student files that I was able to recover.

The graphics framework provided by the university, along with some required data files, is no longer available. The project therefore cannot currently be compiled as a standalone application.

The screenshots and project report still show the final result and the main implementation stages.

## Result

**Grade received: 16.5/20**

## Author

**Leopold Nahas**
