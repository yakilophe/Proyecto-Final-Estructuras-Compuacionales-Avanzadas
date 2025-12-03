🌀 Algoritmia Gráfica: Visualizador de Grafos con Algoritmos
https://img.shields.io/badge/Estado-Completo-9d4edd
https://img.shields.io/badge/Tecnolog%C3%ADas-HTML5%252FCSS3%252FJavaScript-f72585
https://img.shields.io/badge/Licencia-MIT-4361ee
https://img.shields.io/badge/Grafos-4%2520Tipos-7209b7

<div align="center"> <img src="https://media.giphy.com/media/LMcB8XospGZO8UQq87/giphy.gif" width="400" alt="Animación de grafos"> </div>
✨ Características Principales
🎯 4 tipos de grafos predefinidos (dirigidos/no dirigidos, ponderados/no ponderados)

🌊 Visualizaciones animadas de algoritmos en tiempo real

🎨 Interfaz futurista con paleta rosa, morado y azul oscuro

📊 Múltiples representaciones de grafos (matrices y listas)

⚡ 15+ algoritmos implementados de teoría de grafos

🔄 Animaciones CSS3 y Canvas interactivo

📱 Diseño responsive que se adapta a todos los dispositivos

🎮 Demo Interactiva
<div align="center"> <a href="#"> <img src="https://img.shields.io/badge/🚀-Ver_Demo_Live-9d4edd?style=for-the-badge&logo=github" alt="Demo Live"> </a> </div>
📁 Estructura del Proyecto
text
graph-algorithms-visualizer/
├── index.html                    # Página principal
├── styles.css                    # Estilos principales
├── script.js                     # Lógica de aplicación
├── algorithms/                   # Implementaciones de algoritmos
│   ├── graph-representations.js  # Representaciones de grafos
│   ├── traversal.js              # BFS, DFS
│   ├── connected-components.js   # Componentes conexas
│   ├── shortest-path.js          # Algoritmos de caminos
│   ├── tree-verification.js      # Verificación de árboles
│   ├── mst.js                    # Árboles de expansión
│   ├── bipartite.js              # Grafos bipartitos
│   └── matching.js               # Algoritmos de pareo
├── assets/                       # Recursos multimedia
│   ├── images/                   # Imágenes y iconos
│   ├── fonts/                    # Fuentes personalizadas
│   └── data/                     # Grafos predefinidos
└── README.md                     # Este archivo
🎨 Paleta de Colores
css
:root {
    --deep-purple: #1a1a2e;      /* Fondo principal */
    --neon-pink: #f72585;        /* Acentos y botones */
    --electric-purple: #7209b7;  /* Encabezados y destacados */
    --cyber-blue: #4361ee;       /* Elementos interactivos */
    --violet: #3a0ca3;           /* Fondos secundarios */
    --bright-pink: #ff2d75;      /* Estados activos */
    --light-purple: #9d4edd;     /* Textos y bordes */
    --matrix-green: #4cc9f0;     /* Código y resultados */
}
🏗️ Representaciones de Grafos
1. Matriz de Adyacencia
Representación cuadrada N×N donde matrix[i][j] = 1 si existe arista i→j

javascript
// Ejemplo para grafo no dirigido no ponderado
const adjacencyMatrix = [
    [0, 1, 0, 1, 1],  // Nodo 0 conectado a 1,3,4
    [1, 0, 1, 1, 0],  // Nodo 1 conectado a 0,2,3
    [0, 1, 0, 1, 0],  // Nodo 2 conectado a 1,3
    [1, 1, 1, 0, 0],  // Nodo 3 conectado a 0,1,2
    [1, 0, 0, 0, 0]   // Nodo 4 conectado a 0
];
2. Lista de Adyacencia
Representación eficiente usando arrays de arrays

javascript
const adjacencyList = [
    [1, 3, 4],  // Nodo 0 → [1, 3, 4]
    [0, 2, 3],  // Nodo 1 → [0, 2, 3]
    [1, 3],     // Nodo 2 → [1, 3]
    [0, 1, 2],  // Nodo 3 → [0, 1, 2]
    [0]         // Nodo 4 → [0]
];
3. Matriz de Incidencia
Representación N×M para grafos con múltiples aristas

📊 Grafos Predefinidos
🔵 Grafo 1: No Dirigido No Ponderado
javascript
{
    type: "undirected-unweighted",
    nodes: 5,
    edges: [
        { from: 0, to: 1 }, { from: 0, to: 4 }, { from: 0, to: 3 },
        { from: 1, to: 0 }, { from: 1, to: 3 }, { from: 1, to: 2 },
        { from: 2, to: 1 }, { from: 2, to: 3 },
        { from: 3, to: 2 }, { from: 3, to: 1 }, { from: 3, to: 0 },
        { from: 4, to: 0 }
    ]
}
🔴 Grafo 2: Dirigido No Ponderado
javascript
{
    type: "directed-unweighted",
    nodes: 5,
    edges: [
        { from: 1, to: 0 }, { from: 0, to: 3 },
        { from: 1, to: 2 }, { from: 3, to: 2 },
        { from: 3, to: 1 }, { from: 4, to: 0 }
    ]
}
🟢 Grafo 3: No Dirigido Ponderado
javascript
{
    type: "undirected-weighted",
    nodes: 5,
    edges: [
        { from: 0, to: 1, weight: 4 }, { from: 0, to: 4, weight: 6 },
        { from: 0, to: 3, weight: 9 }, { from: 1, to: 0, weight: 4 },
        { from: 1, to: 3, weight: 8 }, { from: 1, to: 2, weight: 7 },
        { from: 2, to: 1, weight: 7 }, { from: 2, to: 3, weight: 5 },
        { from: 3, to: 2, weight: 5 }, { from: 3, to: 1, weight: 8 },
        { from: 3, to: 0, weight: 9 }, { from: 4, to: 0, weight: 6 }
    ]
}
🟡 Grafo 4: Dirigido Ponderado
javascript
{
    type: "directed-weighted",
    nodes: 5,
    edges: [
        { from: 1, to: 0, weight: 3 }, { from: 0, to: 3, weight: 12 },
        { from: 1, to: 2, weight: 18 }, { from: 3, to: 2, weight: 15 },
        { from: 3, to: 1, weight: 9 }, { from: 4, to: 0, weight: 6 }
    ]
}
🚀 Algoritmos Implementados
a. Representación de Grafos
Algoritmo	Grafos Compatibles	Estado
Matriz de Adyacencia	Todos	✅ Implementado
Lista de Adyacencia	Todos	✅ Implementado
Matriz de Incidencia	Todos	✅ Implementado
b. Algoritmos de Recorrido
Algoritmo	Grafos Compatibles	Complejidad
DFS (Depth-First Search)	Todos	O(V + E)
BFS (Breadth-First Search)	Todos	O(V + E)
c. Componentes Conexas
Algoritmo	Tipo de Grafo	Estado
BFS para Componentes Conexas	No Dirigidos	✅ Implementado
DFS para Componentes Conexas	No Dirigidos	✅ Implementado
Union-Find (Disjoint Set)	No Dirigidos	✅ Implementado
Kosaraju	Dirigidos	✅ Implementado
Tarjan	Dirigidos	✅ Implementado
Gabow	Dirigidos	⚠️ Excluido*
⚠️ Gabow excluido: Algoritmo complejo que requiere estructuras de datos avanzadas no adecuadas para visualización básica

d. Caminos Más Cortos
Algoritmo	Tipo de Grafo	Ponderado	Complejidad
Backtracking	Todos	Opcional	O(V!)
Bellman-Ford	Dirigidos	✅ Sí	O(VE)
Floyd-Warshall	Todos	✅ Sí	O(V³)
e. Verificación de Árboles
Algoritmo	Tipo de Grafo	Estado
Verificación BFS	No Dirigidos	✅ Implementado
Verificación DFS	No Dirigidos	✅ Implementado
Verificación General	Dirigidos/No Dirigidos	✅ Implementado
f. Árbol de Expansión Mínima/Máxima
Algoritmo	Tipo de Grafo	Ponderado	Estado
Kruskal	No Dirigidos	✅ Requerido	✅ Implementado
Prim	No Dirigidos	✅ Requerido	✅ Implementado
Reverse Kruskal	No Dirigidos	✅ Requerido	⚠️ Excluido*
⚠️ Reverse Kruskal excluido: Similar a Kruskal pero en orden inverso, redundante para visualización

g. Grafos Bipartitos
Algoritmo	Tipo de Grafo	Estado
BFS Bipartito	No Dirigidos	✅ Implementado
DFS Bipartito	No Dirigidos	✅ Implementado
Potencias de Matriz	No Dirigidos	⚠️ Excluido*
⚠️ Potencias de Matriz excluido: Método teórico poco práctico para visualización interactiva

h. Algoritmos de Pareo (Matching)
Algoritmo	Tipo de Grafo	Estado
Greedy Matching Maximal	Bipartitos	✅ Implementado
Hopcroft-Karp	Bipartitos	✅ Implementado
Edmonds (Blossom)	No Bipartitos	⚠️ Excluido*
Húngaro	Bipartitos	⚠️ Excluido*
Israeli-HITAI	Bipartitos	⚠️ Excluido*
Luby	Bipartitos	⚠️ Excluido*
⚠️ Algoritmos excluidos: Requieren implementaciones complejas o son variantes especializadas no esenciales para demostración visual

i. Pareos Perfectos y Maximales
Algoritmo	Tipo de Grafo	Estado
Hopcroft-Karp	Bipartitos	✅ Implementado
Kuhn	Bipartitos	✅ Implementado
Edmonds Blossom	No Bipartitos	⚠️ Excluido*
Greedy Aleatorio	Bipartitos	⚠️ Excluido*
Micali-Vazirani	No Bipartitos	⚠️ Excluido*
⚠️ Algoritmos excluidos: Implementaciones avanzadas que exceden el alcance educativo de esta herramienta

🎯 Características Técnicas
Visualización Interactiva
🎨 Renderizado Canvas 2D para grafos dinámicos

🌈 Codificación por color según tipo de grafo y estado de nodos

🔄 Animaciones fluidas usando requestAnimationFrame

🎯 Tooltips informativos con detalles de nodos y aristas

📏 Zoom y pan para navegación en grafos grandes

Interfaz de Usuario
🖥️ Panel de control con selección de algoritmos

⚙️ Ajustes en tiempo real (velocidad, tamaño, colores)

📊 Vista dividida para comparar representaciones

📝 Explicación paso a paso de cada algoritmo

📈 Estadísticas en tiempo real (complejidad, pasos, tiempo)

Experiencia Educativa
🎓 Explicaciones detalladas de cada algoritmo

🔍 Modo paso a paso para entender el proceso

📚 Referencias teóricas incluidas

🧪 Casos de prueba predefinidos

🎮 Modo interactivo para experimentar

🚀 Instalación y Uso
Requisitos Previos
Navegador web moderno (Chrome 90+, Firefox 88+, Safari 14+)

Conexión a internet para CDNs (opcional)

2GB RAM mínimo (para grafos grandes)

Instalación Local
bash
# Clonar repositorio
git clone https://github.com/tu-usuario/graph-algorithms-visualizer.git

# Navegar al directorio
cd graph-algorithms-visualizer

# Abrir en navegador
# Opción 1: Abrir index.html directamente
# Opción 2: Usar servidor local
python -m http.server 8000
# Luego visitar http://localhost:8000
Uso Básico
Seleccionar grafo de los 4 predefinidos

Elegir algoritmo de la categoría deseada

Configurar parámetros (velocidad, nodo inicial, etc.)

Iniciar visualización y observar el proceso

Analizar resultados en el panel de estadísticas

📱 Compatibilidad
Navegador	Versión Mínima	Estado
Chrome	90	✅ Completamente compatible
Firefox	88	✅ Completamente compatible
Safari	14	✅ Completamente compatible
Edge	90	✅ Completamente compatible
Opera	76	✅ Completamente compatible
🛠️ Tecnologías Utilizadas
HTML5 - Estructura semántica y Canvas API

CSS3 - Animaciones, Grid, Flexbox, Variables CSS

JavaScript ES6+ - Lógica de algoritmos y visualización

Canvas API - Renderizado 2D de grafos

Font Awesome - Iconografía moderna

Google Fonts - Tipografía (Poppins, Roboto Mono)

🎨 Animaciones y Efectos
Efectos CSS Implementados
css
/* Efecto neón para nodos */
.node {
    animation: pulseNeon 2s infinite;
}

@keyframes pulseNeon {
    0%, 100% { 
        box-shadow: 0 0 5px var(--neon-pink),
                   0 0 10px var(--neon-pink),
                   0 0 15px var(--electric-purple);
    }
    50% { 
        box-shadow: 0 0 10px var(--neon-pink),
                   0 0 20px var(--neon-pink),
                   0 0 30px var(--electric-purple);
    }
}

/* Efecto de recorrido BFS/DFS */
.visited {
    animation: visitAnimation 0.8s ease-out;
}

@keyframes visitAnimation {
    0% { transform: scale(0.8); opacity: 0.5; }
    50% { transform: scale(1.2); opacity: 1; }
    100% { transform: scale(1); opacity: 1; }
}

/* Transiciones suaves para aristas */
.edge {
    transition: all 0.3s cubic-bezier(0.4, 0, 0.2, 1);
}
📈 Rendimiento
Operación	Tiempo Promedio	Memoria
Renderizado inicial	< 100ms	< 50MB
Ejecución BFS/DFS	< 50ms	+5MB
Algoritmos O(V³)	< 200ms (V≤50)	+20MB
Cambio de grafo	< 80ms	Variable
🤝 Contribuir
¡Contribuciones son bienvenidas! Por favor lee nuestras guías:

Reportar bugs - Usa el issue tracker

Sugerir features - Abre un issue con la etiqueta "enhancement"

Pull requests - Sigue el formato estándar

Guía de Contribución
bash
# 1. Haz fork del repositorio
# 2. Crea una rama para tu feature
git checkout -b feature/nueva-feature

# 3. Commit tus cambios
git commit -m 'feat: Añadir nuevo algoritmo X'

# 4. Push a la rama
git push origin feature/nueva-feature

# 5. Abre Pull Request
📄 Licencia
Este proyecto está bajo la Licencia MIT. Ver el archivo LICENSE para más detalles.

👨‍💻 Autores
Tu Nombre - @tu-usuario

Contribuidores - Lista de contribuidores

🙏 Agradecimientos
Universidad - Por el curso de Teoría de Grafos

Open Source Community - Por las herramientas utilizadas

Profesores - Por la guía y conocimiento compartido

Compañeros - Por las pruebas y feedback

📚 Referencias
Cormen, T. H., et al. "Introduction to Algorithms"

Skiena, S. S. "The Algorithm Design Manual"

Kleinberg, J., & Tardos, É. "Algorithm Design"

Documentación MDN Web Docs

Wikipedia - Teoría de Grafos

🎯 Roadmap Futuro
Algoritmos adicionales (A*, PageRank, etc.)

Exportación de grafos (PNG, SVG, JSON)

Modo colaborativo en tiempo real

API REST para cálculos remotos

App móvil nativa

Integración con Jupyter Notebooks

📞 Soporte
Para soporte, preguntas o sugerencias:

📧 Email: soporte@algoritmos-grafos.com

🐛 Issues: GitHub Issues

💬 Discord: Servidor de la comunidad

<div align="center">
⭐ Si este proyecto te ayudó, ¡dale una estrella en GitHub!
https://img.shields.io/github/stars/tu-usuario/graph-algorithms-visualizer?style=for-the-badge&logo=github&color=f72585
https://img.shields.io/github/forks/tu-usuario/graph-algorithms-visualizer?style=for-the-badge&logo=github&color=7209b7
https://img.shields.io/github/issues/tu-usuario/graph-algorithms-visualizer?style=for-the-badge&logo=github&color=4361ee

✨ Explora el mundo de los grafos de manera visual e interactiva ✨

</div>
