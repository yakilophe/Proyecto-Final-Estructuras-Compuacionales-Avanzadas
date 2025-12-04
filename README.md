# Proyecto Estructuras Avanzadas Computacionales
### Universidad Autónoma de Aguascalientes
![Logo UAA](https://tse2.mm.bing.net/th/id/OIP.Z2oDAZiov9szKBOvWBnFMgHaHa?cb=ucfimg2&ucfimg=1&rs=1&pid=ImgDetMain&o=7&rm=3)

[![Ver Repositorio](https://img.shields.io/badge/▶_Ver_Repositorio_GitHub-yakilophe/ProyectoFinal_ECA-FF69B4?style=for-the-badge&logo=github&logoColor=white)](https://github.com/yakilophe/ProyectoFinal_ECA.git)
[![Ver Commits](https://img.shields.io/badge/📜_Ver_Commits_del_Proyecto-Historial_de_Cambios-FF69B4?style=for-the-badge&logo=git&logoColor=white)](https://github.com/yakilophe/ProyectoFinal_ECA/commits/main)

---

# Repositorio de Algoritmos de Grafos
## Proyecto Final - Estructuras Computacionales Avanzadas
### Fecha de Entrega: 4 de diciembre de 2025

---

## Integrantes del Equipo

| Nombre del Integrante | Rol Asignado | Responsabilidades Principales |
| :--- | :--- | :--- |
| **Norma Yakelin Herrada López** | Scrum Master | Facilitador del equipo. Encargado de gestionar el tablero (GitHub), eliminar impedimentos y asegurar que se cumplan los tiempos de entrega y la metodología ágil. |
| **Gustavo Trueba Cardoso** | Product Owner | Responsable de definir y priorizar las historias de usuario basadas en los requerimientos. Asegura que los algoritmos cumplan con los criterios de aceptación (Big-O, pruebas). |
| **Luis Octavio Delgado Ramírez** | Developer | Implementación del código fuente, refactorización y escritura de pruebas unitarias. |
| **Valeria Itzel Trinidad González** | Developer | Implementación del código fuente, refactorización y escritura de pruebas unitarias. |
| **Ángel Joshua González Bennetts** | Developer | Implementación del código fuente, documentación técnica y análisis de complejidad. |

---

## Metodología Utilizada (Scrum)

Este proyecto fue desarrollado utilizando la metodología ágil Scrum durante un sprint de una semana. El objetivo principal fue implementar diversos algoritmos de grafos en C++, asegurando calidad técnica, pruebas, documentación y correcta organización del trabajo mediante el uso de GitHub Projects como tablero Scrum.

**Equipo Scrum:**
- Scrum Master: Norma Yakelin Herrada López
- Product Owner: Gustavo Trueba Cardoso
- Developers: Luis Octavio Delgado Ramírez, Valeria Itzel Trinidad González, Ángel Joshua González Bennetts

**Duración del Sprint:** 27 de noviembre - 3 de diciembre de 2025

**Objetivo del Sprint:** Implementar, probar y documentar los algoritmos de grafos asignados, usando buenas prácticas de C++, pruebas automatizadas y documentación técnica.

---

## Algoritmos Implementados

### 1. Representación de Grafos
- **Matriz de Adyacencia** (No dirigido, Ponderado/No ponderado)
- **Visualización como Lista de Adyacencia** (No dirigido, Ponderado/No ponderado)
- **Matriz de Incidencia** (Dirigido/No dirigido, Ponderado/No ponderado)

### 2. Algoritmos de Recorrido
- **BFS (Breadth-First Search)** (Dirigido/No dirigido, Ponderado/No ponderado)
- **DFS (Depth-First Search)** (Dirigido/No dirigido, Ponderado/No ponderado)

### 3. Componentes Conexas
- **Componentes Conexas con BFS** (No dirigido, No ponderado)
- **Componentes Conexas con DFS** (No dirigido, No ponderado)
- **Componentes Conexas con Union-Find** (No dirigido, No ponderado)
- **Componentes Fuertemente Conexas - Gabow** (Dirigido, No ponderado)
- **Componentes Fuertemente Conexas - Kosaraju** (Dirigido, No ponderado)
- **Componentes Fuertemente Conexas - Tarjan** (Dirigido, No ponderado)

### 4. Caminos Más Cortos
- **Backtracking con Poda** (Dirigido/No dirigido, Ponderado/No ponderado)
- **Bellman-Ford** (Dirigido/No dirigido, Ponderado)
- **Floyd-Warshall** (Dirigido/No dirigido, Ponderado/No ponderado)

### 5. Verificación de Árbol
- **DFS** (Dirigido/No dirigido, Ponderado/No ponderado)
- **BFS y Grados** (Dirigido/No dirigido, Ponderado/No ponderado)
- **DFS, Grados y N-1** (Dirigido/No dirigido, Ponderado/No ponderado)

### 6. Árbol de Expansión
- **Kruskal** (No dirigido, Ponderado)
- **Prim** (No dirigido, Ponderado)
- **Reverse-Kruskal** (No dirigido, Ponderado)

### 7. Grafo Bipartito
- **BFS** (No dirigido, No ponderado)
- **Multiplicación de Matrices** (No dirigido, No ponderado)
- **DFS** (No dirigido, No ponderado)

### 8. Pareo (Matching)
- **Edmonds (Blossom)** (General, No ponderado)
- **Greedy** (No dirigido, Ponderado/No ponderado)
- **Hopcroft-Karp** (Bipartito, No dirigido, No ponderado)
- **Húngaro (Kuhn-Munkres)** (Bipartito, Ponderado)
- **Random Greedy** (General, No ponderado)

---

## Análisis de Complejidad (Big-O)

### Representación de Grafos
- **Matriz de Adyacencia:** Tiempo O(N²), Espacio O(N²)
- **Lista de Adyacencia (visualización):** Tiempo O(N²), Espacio O(N²)
- **Matriz de Incidencia:** Tiempo O(V×E), Espacio O(V×E)

### Algoritmos de Recorrido
- **BFS/DFS con Matriz:** Tiempo O(N²), Espacio O(N²)

### Componentes Conexas
- **Con BFS/DFS:** Tiempo O(N²), Espacio O(N²)
- **Union-Find:** Tiempo O(N²), Espacio O(N²)
- **Gabow/Kosaraju/Tarjan:** Tiempo O(N²), Espacio O(N²)

### Caminos Más Cortos
- **Backtracking con Poda:** Tiempo O(N!), Espacio O(N²)
- **Bellman-Ford:** Tiempo O(N³), Espacio O(N²)
- **Floyd-Warshall:** Tiempo O(N³), Espacio O(N²)

### Verificación de Árbol
- **DFS/BFS con Listas:** Tiempo O(V+E), Espacio O(V+E)

### Árbol de Expansión
- **Kruskal:** Tiempo O(E log E), Espacio O(V+E)
- **Prim:** Tiempo O(V²), Espacio O(V²)
- **Reverse-Kruskal:** Tiempo O(E²), Espacio O(V²)

### Grafo Bipartito
- **BFS/DFS:** Tiempo O(V+E), Espacio O(V+E)
- **Multiplicación de Matrices:** Tiempo O(V⁴), Espacio O(V²)

### Pareo (Matching)
- **Edmonds (Blossom):** Tiempo O(V³), Espacio O(V+E)
- **Greedy:** Tiempo O(E), Espacio O(V+E)
- **Hopcroft-Karp:** Tiempo O(E√V), Espacio O(V+E)
- **Húngaro:** Tiempo O(V³), Espacio O(V²)

---

## Análisis y Discusión

El proyecto se centró en la implementación exhaustiva de algoritmos fundamentales de teoría de grafos utilizando C++. La elección de estructuras de datos, particularmente la matriz de adyacencia para la mayoría de las implementaciones, influyó directamente en las complejidades temporales y espaciales reportadas. Aunque esta representación facilita ciertas operaciones (como verificar la existencia de una arista en O(1)), incrementa el costo en grafos dispersos para algoritmos de recorrido y componentes conexas.

La metodología Scrum permitió una organización eficiente del trabajo en un tiempo limitado (una semana), con claridad en la distribución de responsabilidades y seguimiento continuo del progreso mediante GitHub Projects. La integración de ceremonias ágiles (planificación, dailies, revisión y retrospectiva) contribuyó a mantener el enfoque y resolver impedimentos oportunamente.

---

## Conclusiones

El proyecto "Repositorio acerca de algoritmos para grafos" se completó exitosamente en el plazo establecido de una semana. Se implementaron, probaron y documentaron más de 20 algoritmos diferentes de teoría de grafos, abarcando desde representaciones básicas hasta algoritmos avanzados de pareo y componentes fuertemente conexas.

La aplicación de la metodología Scrum demostró ser efectiva para gestionar proyectos de desarrollo de software con múltiples integrantes y tareas técnicas complejas. La combinación de roles definidos (Scrum Master, Product Owner, Developers), ceremonias regulares y herramientas de seguimiento (GitHub Projects) facilitó la coordinación y el cumplimiento de los objetivos del sprint.

El análisis de complejidad realizado para cada algoritmo proporciona una comprensión clara de las limitaciones y aplicabilidad de cada implementación, lo cual es fundamental para tomar decisiones informadas sobre qué algoritmo utilizar en diferentes contextos prácticos.

---

## Referencias

1. Aprende con IA. (2025). Entendiendo grafos bipartitos [Video]. YouTube.
2. UCAM Universidad Católica de Murcia. (2016). Matemática Discreta - Grafo bipartido [Video]. YouTube.
3. Universitat Politècnica de València. (2011). Problema de emparejamientos [Video]. YouTube.
4. Usha's EduVids. (2024). Graph Matching, Maximal Matching, Maximum matching, Perfect Matching [Video]. YouTube.
5. OptWhiz. (2022). Can we assign everyone a job? (maximum matchings) | Bipartite Matchings [Video]. YouTube.
6. Varun Sir. (s.f.). BFS & DFS | Breadth First Search | Depth First Search [Video]. YouTube.
7. WilliamFiset. (2020). Tarjan's Strongly Connected Component (SCC) Algorithm [Video]. YouTube.
8. The code bit. (2025). Gabow's Algorithm Explained [Video]. YouTube.
9. Potato Coders. (2020). Union Find in 5 minutes [Video]. YouTube.
10. HeadEasy. (2023). Kosaraju's Algorithm | Strongly Connected Components [Video]. YouTube.
11. Juan Villalpando. (2021). Método Kruskal y Prim; Árbol Recubridor Mínimo y Máximo [Video]. YouTube.
12. Balvin, J. (2022). Árbol de Expansión Mínima (Prim + Kruskal) [Video]. YouTube.
13. Rodríguez, F. (2020). Grafos: Árbol parcial mínimo con algoritmo de Prim [Video]. YouTube.
14. Estudiante Digital. (2021). Árbol de Expansión Mínima - Algoritmo de Kruskal [Video]. YouTube.
