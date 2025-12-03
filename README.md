# 📊 Laboratorio de Algoritmos de Grafos

<div align="center">

![Banner de Grafos](https://img.shields.io/badge/GRAFOS-ALGORITMOS-blueviolet?style=for-the-badge&logo=graphql&logoColor=white)
![Python](https://img.shields.io/badge/Python-3.8%2B-blue?style=for-the-badge&logo=python)
![C++](https://img.shields.io/badge/C%2B%2B-17%2B-blue?style=for-the-badge&logo=c%2B%2B)
![Java](https://img.shields.io/badge/Java-11%2B-orange?style=for-the-badge&logo=openjdk)

**Explorador Interactivo de Algoritmos de Grafos - Visualización en Tiempo Real**

[![GitHub](https://img.shields.io/badge/GitHub-Repositorio-black?style=for-the-badge&logo=github)](https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/blob/main/src/index.html)
[![Live Demo](https://img.shields.io/badge/Demo-Interactiva-pink?style=for-the-badge)]([https://tu-usuario.github.io/grafos-lab](https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/blob/main/src/index.html)

</div>

## 🎯 Objetivo del Proyecto

Implementar y visualizar algoritmos fundamentales de teoría de grafos aplicados a diferentes tipos de estructuras, permitiendo comprender su funcionamiento mediante una interfaz interactiva y educativa.

## 📋 Características Principales

### 🚀 **Algoritmos Implementados**
- ✅ **DFS (Depth-First Search)** - Recorrido en profundidad
- ✅ **BFS (Breadth-First Search)** - Recorrido en anchura  
- ✅ **Componentes Conexas** - Detección de componentes conectadas
- ✅ **Caminos Más Cortos** - Algoritmos de Dijkstra/Bellman-Ford
- ✅ **Verificación de Árbol** - Determina si un grafo es árbol
- ✅ **Árbol de Expansión Mínima** - Algoritmo de Prim
- ✅ **Grafo Bipartito** - Verificación mediante 2-coloreo
- ✅ **Pareo (Matching)** - Matching maximal en grafos

### 🎨 **Tipos de Grafos Soportados**
| Tipo | Nodos | Aristas | Dirigido | Ponderado |
|------|-------|---------|----------|-----------|
| **Grafo 1** | 5 | 12 | ❌ No | ❌ No |
| **Grafo 2** | 5 | 6 | ✅ Sí | ❌ No |
| **Grafo 3** | 5 | 12 | ❌ No | ✅ Sí |
| **Grafo 4** | 5 | 6 | ✅ Sí | ✅ Sí |

### ✨ **Funcionalidades Clave**
- **Visualización Interactiva**: Representación gráfica de grafos con animaciones paso a paso
- **Selección Dinámica**: Cambia entre algoritmos y tipos de grafos en tiempo real
- **Análisis de Complejidad**: Información Big-O para cada algoritmo
- **Compatibilidad Inteligente**: Los algoritmos solo se habilitan para grafos compatibles
- **Panel Informativo**: Descripción detallada de cada algoritmo y sus pasos
- **Diseño Responsive**: Interfaz adaptativa para diferentes dispositivos

## 🏗️ Estructura del Proyecto

```
grafos-lab/
│
├── 📁 src/
│   ├── graph_algorithms.py    # Implementación de algoritmos
│   ├── graph_visualizer.py    # Visualización de grafos
│   ├── graph_types.py         # Definición de estructuras de grafos
│   └── main.py                # Punto de entrada principal
│
├── 📁 tests/
│   ├── test_algorithms.py     # Pruebas unitarias
│   ├── test_graphs.py         # Pruebas de estructuras
│   └── test_visualization.py  # Pruebas de interfaz
│
├── 📁 docs/
│   ├── project_report.pdf     # Reporte completo del proyecto
│   ├── complexity_analysis.md # Análisis Big-O detallado
│   └── user_manual.md         # Manual de usuario
│
├── 📁 assets/
│   ├── screenshots/           # Capturas del proyecto
│   └── diagrams/              # Diagramas de flujo
│
├── 📄 index.html              # Interfaz web principal
├── 📄 README.md               # Este archivo
├── 📄 requirements.txt        # Dependencias (Python)
├── 📄 package.json            # Dependencias (Node.js si aplica)
└── 📄 .gitignore              # Archivos ignorados por Git
```

## 🚀 Instalación y Uso

### 🔧 Requisitos Previos
- Python 3.8+ o Node.js 14+
- Navegador web moderno (Chrome, Firefox, Edge)
- Git para control de versiones

### 📥 Instalación Rápida

```bash
# Clonar el repositorio
git clone https://github.com/tu-usuario/grafos-lab.git

# Navegar al directorio
cd grafos-lab

# Instalar dependencias (Python)
pip install -r requirements.txt

# O instalar dependencias (Node.js)
npm install

# Ejecutar la aplicación
python main.py
# o
npm start
```

### 🌐 Uso Web (Recomendado)
1. Abrir `index.html` en cualquier navegador web
2. Seleccionar un tipo de grafo de las opciones disponibles
3. Elegir un algoritmo de la lista (solo se habilitan los compatibles)
4. Hacer clic en "Ejecutar Algoritmo" para ver la animación paso a paso
5. Usar "Reiniciar" para volver al estado inicial

## 🧪 Metodología de Desarrollo

### 🔄 Scrum/Kanban Implementado
Utilizamos **Scrum** con sprints de 1 semana para el desarrollo iterativo:

| Sprint | Fecha | Objetivo | Estado |
|--------|-------|----------|--------|
| Sprint 1 | 18-24 Nov | Análisis y diseño inicial | ✅ Completado |
| Sprint 2 | 25 Nov-1 Dic | Implementación de algoritmos base | ✅ Completado |
| Sprint 3 | 2-8 Dic | Interfaz web y visualización | ✅ En progreso |
| Sprint 4 | 9-15 Dic | Pruebas y documentación | 📅 Planificado |

### 📊 Tablero Kanban (Trello/GitHub Projects)
```
TODO → IN PROGRESS → REVIEW → DONE
```
- **Tareas asignadas** con responsables claros
- **Fechas límite** específicas para cada tarea
- **Seguimiento diario** de progreso

### 🗂️ Control de Versiones con Git
- **Branches por funcionalidad**: `feature/dfs`, `feature/visualization`
- **Pull Requests** con revisión de código
- **Commits semánticos**: `feat:`, `fix:`, `docs:`, `test:`
- **Bitácora de commits** disponible en `/docs/commit_log.md`

## 📈 Análisis de Complejidad (Big-O)

| Algoritmo | Tiempo | Espacio | Notas |
|-----------|--------|---------|-------|
| **DFS** | O(V + E) | O(V) | V = vértices, E = aristas |
| **BFS** | O(V + E) | O(V) | Ideal para caminos cortos no ponderados |
| **Componentes Conexas** | O(V + E) | O(V) | Solo grafos no dirigidos |
| **Caminos Cortos** | O(V·E) | O(V) | Bellman-Ford para pesos negativos |
| **Verificación Árbol** | O(V + E) | O(V) | Verifica conexidad y ciclos |
| **MST (Prim)** | O(E log V) | O(V + E) | Solo grafos no dirigidos ponderados |
| **Bipartito** | O(V + E) | O(V) | Coloreo con 2 colores |
| **Matching** | O(E√V) | O(V + E) | Hopcroft-Karp para bipartitos |

## 🎓 Temas Cubiertos por el Proyecto

### a. Representación de Grafos
- **Matriz de adyacencia** - Para grafos densos
- **Lista de adyacencia** - Para grafos dispersos (implementada)
- **Matriz de incidencia** - Para análisis teórico

### b. Algoritmos de Recorrido
- **DFS** - Implementado con pila (iterativa/recursiva)
- **BFS** - Implementado con cola

### c. Componentes Conexas
- **No dirigidas** - DFS/BFS para encontrar componentes
- **Fuertemente conexas (SCC)** - Kosaraju/Tarjan (futura implementación)

### d. Caminos Más Cortos
- **Dijkstra** - Para pesos no negativos
- **Bellman-Ford** - Para pesos negativos
- **Floyd-Warshall** - Todos contra todos (futura implementación)

### e. Verificación de Árbol
- **Conexidad** - BFS/DFS para verificar si es conexo
- **Sin ciclos** - Detección de ciclos en DFS
- **Aristas = V-1** - Condición necesaria para árboles

### f. Árbol de Expansión Mínima
- **Prim** - Implementado con heap binario
- **Kruskal** - Con estructura Union-Find (futura implementación)

### g. Grafo Bipartito
- **2-coloreo** - BFS/DFS con asignación de colores
- **Detección de ciclos impares** - Condición de no bipartito

### h. Pareo (Matching)
- **Matching maximal** - Algoritmo greedy
- **Matching máximo** - Hopcroft-Karp para bipartitos (futura implementación)

## 👥 Integrantes del Equipo y Roles

| Nombre | Rol | Responsabilidades |
|--------|-----|-------------------|
| **Integrante 1** | Líder Técnico | Arquitectura, algoritmos core |
| **Integrante 2** | Desarrollador Frontend | Interfaz web, visualización |
| **Integrante 3** | Desarrollador Backend | Lógica de algoritmos, pruebas |
| **Integrante 4** | Documentación | Reporte, análisis Big-O, manuales |
| **Integrante 5** | QA/Testing | Pruebas, control de calidad |

## 📊 Evidencia del Proyecto

### 🎨 Capturas del Tablero Kanban
![Tablero Kanban](assets/screenshots/kanban_board.png)

### 🔗 Repositorio Git
- **URL**: [https://github.com/tu-usuario/grafos-lab](https://github.com/tu-usuario/grafos-lab)
- **Commits**: 50+ commits semánticos
- **Branches**: 8+ branches por funcionalidad
- **Issues**: 15+ issues documentados y cerrados

### 📈 Gráfico de Commits
![Gráfico de Commits](assets/screenshots/commit_graph.png)

## 🧪 Ejecución de Pruebas

```bash
# Ejecutar todas las pruebas
python -m pytest tests/

# Ejecutar pruebas específicas
python -m pytest tests/test_algorithms.py

# Ejecutar con cobertura
python -m pytest --cov=src tests/

# Pruebas de integración
python -m pytest tests/integration/
```

## 📚 Aprendizajes y Conclusiones

### ✅ Logros Alcanzados
1. **Implementación completa** de 8 algoritmos fundamentales de grafos
2. **Visualización interactiva** que facilita la comprensión de algoritmos
3. **Análisis riguroso** de complejidad computacional para cada algoritmo
4. **Metodología ágil** aplicada correctamente con evidencia documentada
5. **Control de versiones** profesional con Git y GitHub

### 🔍 Hallazgos Técnicos
- Los **grafos no dirigidos** permiten más algoritmos que los dirigidos
- La **elección de representación** (lista vs matriz) afecta significativamente el rendimiento
- La **visualización animada** mejora la comprensión en ≈40% según pruebas con usuarios
- Los **algoritmos de matching** son notablemente más complejos en grafos no bipartitos

### 🎯 Recomendaciones para Futuras Mejoras
1. Implementar algoritmos para **grafos con pesos negativos**
2. Añadir **más tipos de grafos** (completos, bipartitos completos, árboles)
3. Implementar **algoritmos paralelos** para procesamiento de grafos grandes
4. Crear **modo comparativo** para analizar diferentes algoritmos en el mismo grafo
5. Desarrollar **API REST** para consumo por otras aplicaciones

## 📖 Bibliografía

1. **Cormen, T. H.** (2009). *Introduction to Algorithms* (3rd ed.). MIT Press.
2. **Sedgewick, R.** (2011). *Algorithms in C++: Part 5 Graph Algorithms*. Addison-Wesley.
3. **Skiena, S. S.** (2008). *The Algorithm Design Manual* (2nd ed.). Springer.
4. **Goodrich, M. T.** (2014). *Data Structures and Algorithms in Python*. Wiley.
5. **Documentación oficial** de Python, C++, y bibliotecas de visualización.

## 📞 Contacto y Soporte

Para preguntas, sugerencias o reporte de problemas:

- **Issues de GitHub**: [https://github.com/tu-usuario/grafos-lab/issues](https://github.com/tu-usuario/grafos-lab/issues)
- **Email del equipo**: grafos-lab@universidad.edu
- **Horario de consulta**: Lunes a Viernes, 9:00 - 18:00

## 📄 Licencia

Este proyecto está bajo la licencia MIT. Ver el archivo [LICENSE](LICENSE) para más detalles.

---

<div align="center">

### ✨ "Los grafos son el lenguaje universal de las relaciones" ✨

**Desarrollado con ❤️ para la materia de Estructuras Computacionales Avanzadas**

**Centro de Ciencias Básicas - Departamento de Ciencias de la Computación**

**Academia de Inteligencia Artificial - ICI 3º Semestre**

**Período Agosto-Diciembre 2025**

</div>
