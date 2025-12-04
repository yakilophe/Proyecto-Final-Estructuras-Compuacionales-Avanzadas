# 🚀 Proyecto Final: Algoritmos de Grafos - Interfaz Web Interactiva

<div align="center">

![UAA Logo](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9f/Universidad_Aut%C3%B3noma_de_Aguascalientes_logo.svg/320px-Universidad_Aut%C3%B3noma_de_Aguascalientes_logo.svg.png)

<h1>Universidad Autónoma de Aguascalientes</h1>
<h2>Facultad de Ingeniería</h2>
<h3>Proyecto Final - Estructuras Computacionales Avanzadas</h3>

<!-- Typing Animation -->
![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=30&duration=4000&pause=1000&color=7C3AED&center=true&vCenter=true&width=800&height=80&lines=ALGORITMOS+DE+GRAFOS+IMPLEMENTADOS;INTERFAZ+WEB+100%25+INTERACTIVA;ANÁLISIS+DE+COMPLEJIDAD+BIG-O;VISUALIZACIÓN+EN+TIEMPO+REAL)

<!-- Badges Interactivos -->
<div class="badges-container">
  <a href="#tablero-scrum" class="interactive-badge" onclick="showScrumTablero()">
    <img src="https://img.shields.io/badge/📋_TABLERO_SCRUM_EN_VIVO-8B5CF6?style=for-the-badge&logo=github&logoColor=white" alt="Tablero Scrum">
  </a>
  <a href="https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/" class="interactive-badge">
    <img src="https://img.shields.io/badge/🚀_DEMO_INTERACTIVA-00C851?style=for-the-badge&logo=rocket&logoColor=white" alt="Demo Interactiva">
  </a>
  <a href="#algoritmos-implementados" class="interactive-badge">
    <img src="https://img.shields.io/badge/⚡_20+_ALGORITMOS-FF6B6B?style=for-the-badge" alt="Algoritmos">
  </a>
</div>

<!-- Graph Animation -->
<div class="graph-visualization">
  <canvas id="liveGraph"></canvas>
</div>

</div>

## 📋 **Tablero Scrum en Vivo**

<div align="center" id="tablero-scrum">

[![Tablero Scrum Interactivo](https://img.shields.io/badge/📊_VER_TABLERO_COMPLETO-4285F4?style=for-the-badge&logo=github&logoColor=white)](scrumtablero.html)

<iframe src="scrumtablero.html" width="100%" height="600px" style="border: 2px solid #7C3AED; border-radius: 15px; box-shadow: 0 10px 30px rgba(124, 58, 237, 0.3); margin: 20px 0;"></iframe>

</div>

## 📊 **Índice Interactivo**

<div class="toc-container">
  <div class="toc-column">
    <h3>📚 Secciones Principales</h3>
    <ul>
      <li><a href="#introduccion">🎯 Introducción</a></li>
      <li><a href="#integrantes">👥 Integrantes del Equipo</a></li>
      <li><a href="#metodologia">🔄 Metodología Scrum</a></li>
      <li><a href="#algoritmos-implementados">⚡ Algoritmos Implementados</a></li>
      <li><a href="#analisis-complejidad">📈 Análisis de Complejidad</a></li>
      <li><a href="#analisis-discusion">💡 Análisis y Discusión</a></li>
      <li><a href="#conclusiones">🏁 Conclusiones</a></li>
      <li><a href="#bibliografia">📚 Bibliografía</a></li>
    </ul>
  </div>
  
  <div class="toc-column">
    <h3>🔍 Navegación Rápida</h3>
    <div class="quick-links">
      <button onclick="scrollToSection('representacion')" class="quick-btn">🎨 Representación</button>
      <button onclick="scrollToSection('recorrido')" class="quick-btn">🧭 Recorrido</button>
      <button onclick="scrollToSection('componentes')" class="quick-btn">🔗 Componentes</button>
      <button onclick="scrollToSection('caminos')" class="quick-btn">🛣️ Caminos Cortos</button>
      <button onclick="scrollToSection('arbol')" class="quick-btn">🌳 Verificación Árbol</button>
      <button onclick="scrollToSection('mst')" class="quick-btn">🌲 MST</button>
      <button onclick="scrollToSection('bipartito')" class="quick-btn">🎭 Bipartito</button>
      <button onclick="scrollToSection('matching')" class="quick-btn">🤝 Matching</button>
    </div>
  </div>
</div>

## 🎯 **Introducción**

<div class="intro-section">
  <div class="intro-card">
    <h3>📖 Descripción del Proyecto</h3>
    <p>El presente proyecto, titulado <strong>"Repositorio acerca de algoritmos para grafos"</strong>, tiene como objetivo la implementación práctica de estructuras de datos y algoritmos fundamentales de teoría de grafos, en el marco de la asignatura de <strong>Estructuras Computacionales Avanzadas</strong>.</p>
  </div>
  
  <div class="intro-card">
    <h3>🎯 Objetivos</h3>
    <ul>
      <li>✅ Implementar algoritmos claves de teoría de grafos</li>
      <li>✅ Analizar complejidad algorítmica (Big-O)</li>
      <li>✅ Aplicar metodología ágil Scrum</li>
      <li>✅ Desarrollar interfaz web interactiva</li>
      <li>✅ Documentar proceso de desarrollo</li>
    </ul>
  </div>
  
  <div class="intro-card">
    <h3>🛠️ Tecnologías Utilizadas</h3>
    <div class="tech-stack">
      <span class="tech-badge">C++17/20</span>
      <span class="tech-badge">HTML5</span>
      <span class="tech-badge">CSS3</span>
      <span class="tech-badge">JavaScript</span>
      <span class="tech-badge">GitHub</span>
      <span class="tech-badge">Scrum</span>
    </div>
  </div>
</div>

## 👥 **Integrantes del Equipo**

<div class="team-container">
  <div class="team-card" data-role="scrum-master">
    <div class="team-avatar">👑</div>
    <h4>Norma Yakelin Herrada López</h4>
    <p class="team-role">Scrum Master</p>
    <p class="team-responsibilities">
      • Facilitador del equipo<br>
      • Gestión del tablero GitHub<br>
      • Eliminación de impedimentos<br>
      • Cumplimiento de metodología ágil
    </p>
  </div>
  
  <div class="team-card" data-role="product-owner">
    <div class="team-avatar">🎯</div>
    <h4>Gustavo Trueba Cardoso</h4>
    <p class="team-role">Product Owner</p>
    <p class="team-responsibilities">
      • Definir y priorizar historias de usuario<br>
      • Validar criterios de aceptación<br>
      • Asegurar calidad de algoritmos<br>
      • Documentación técnica
    </p>
  </div>
  
  <div class="team-card" data-role="developer">
    <div class="team-avatar">💻</div>
    <h4>Luis Octavio Delgado Ramírez</h4>
    <p class="team-role">Developer</p>
    <p class="team-responsibilities">
      • Implementación código fuente<br>
      • Refactorización<br>
      • Pruebas unitarias<br>
      • Optimización
    </p>
  </div>
  
  <div class="team-card" data-role="developer">
    <div class="team-avatar">💻</div>
    <h4>Valeria Itzel Trinidad González</h4>
    <p class="team-role">Developer</p>
    <p class="team-responsibilities">
      • Implementación código fuente<br>
      • Refactorización<br>
      • Pruebas unitarias<br>
      • Análisis de complejidad
    </p>
  </div>
  
  <div class="team-card" data-role="developer">
    <div class="team-avatar">💻</div>
    <h4>Ángel Joshua González Bennetts</h4>
    <p class="team-role">Developer</p>
    <p class="team-responsibilities">
      • Implementación código fuente<br>
      • Documentación técnica<br>
      • Análisis de complejidad<br>
      • Testing
    </p>
  </div>
</div>

## 🔄 **Metodología Scrum**

<div class="scrum-section">
  <div class="scrum-timeline">
    <div class="timeline-item">
      <div class="timeline-date">📅 27 Nov 2025</div>
      <h4>🎯 Sprint Planning</h4>
      <p>Definición de User Stories y estimación con Planning Poker</p>
    </div>
    <div class="timeline-item">
      <div class="timeline-date">📅 27-03 Dic 2025</div>
      <h4>⚡ Desarrollo Activo</h4>
      <p>Implementación de algoritmos con Daily Standups</p>
    </div>
    <div class="timeline-item">
      <div class="timeline-date">📅 03 Dic 2025</div>
      <h4>🏁 Sprint Review</h4>
      <p>Presentación de algoritmos y validación PO</p>
    </div>
    <div class="timeline-item">
      <div class="timeline-date">📅 03 Dic 2025</div>
      <h4>🔄 Retrospectiva</h4>
      <p>Análisis de mejoras y action items</p>
    </div>
  </div>

  <div class="scrum-metrics">
    <h3>📊 Métricas del Sprint</h3>
    <div class="metrics-grid">
      <div class="metric-card">
        <div class="metric-value">41</div>
        <div class="metric-label">Puntos Completados</div>
      </div>
      <div class="metric-card">
        <div class="metric-value">100%</div>
        <div class="metric-label">Objetivo Cumplido</div>
      </div>
      <div class="metric-card">
        <div class="metric-value">>85%</div>
        <div class="metric-label">Cobertura Pruebas</div>
      </div>
      <div class="metric-card">
        <div class="metric-value">100%</div>
        <div class="metric-label">Documentación</div>
      </div>
    </div>
  </div>
</div>

## ⚡ **Algoritmos Implementados y su Big-O**

### 🎨 **a. Representación de Grafos**

<div class="algorithm-category" id="representacion">
  <h3>1. Matriz de Adyacencia</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido, Ponderado/No ponderado</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
      <span class="algo-complexity">💾 Espacio: O(N²)</span>
    </div>
    <div class="algo-content">
      <h4>📖 Explicación:</h4>
      <p>Utiliza arreglo bidimensional estático. Inicialización requiere recorrer NxN celdas. Inserción simétrica garantiza grafo no dirigido.</p>
      
      <div class="code-tabs">
        <div class="code-tab active" onclick="showCode('matriz-code')">Código</div>
        <div class="code-tab" onclick="showCode('matriz-analysis')">Análisis</div>
      </div>
      
      <div id="matriz-code" class="code-block">
```cpp
// Inicialización de matriz
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        mat[i][j] = INF;

// Inserción simétrica (no dirigido)
void addEdge(int u, int v, int w) {
    mat[u][v] = w;
    mat[v][u] = w;  // Simetría para grafo no dirigido
}
```
      </div>
      
      <div id="matriz-analysis" class="code-block" style="display: none;">
        <p><strong>Análisis de Complejidad:</strong></p>
        <ul>
          <li><strong>Inicialización:</strong> O(N²) - Recorre todas las celdas</li>
          <li><strong>Consulta:</strong> O(1) - Acceso directo por índices</li>
          <li><strong>Espacio:</strong> O(N²) - Memoria contigua fija</li>
        </ul>
      </div>
    </div>
  </div>

  <h3>2. Lista de Adyacencia (Visualización)</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido, Ponderado/No ponderado</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
      <span class="algo-complexity">💾 Espacio: O(N²)</span>
    </div>
    <div class="algo-content">
      <h4>📖 Explicación:</h4>
      <p>Transforma matriz en representación de lista. Itera por cada fila buscando conexiones no nulas.</p>
    </div>
  </div>

  <h3>3. Matriz de Incidencia</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido, Ponderado/No ponderado</span>
      <span class="algo-complexity">⏱️ Tiempo: O(V×E)</span>
      <span class="algo-complexity">💾 Espacio: O(V×E)</span>
    </div>
    <div class="algo-content">
      <h4>📖 Explicación:</h4>
      <p>Relaciona vértices (filas) con aristas (columnas). Usa signos para indicar dirección en grafos dirigidos.</p>
    </div>
  </div>
</div>

### 🧭 **b. Algoritmos de Recorrido**

<div class="algorithm-category" id="recorrido">
  <h3>1. BFS (Breadth-First Search)</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
      <span class="algo-complexity">💾 Espacio: O(N²)</span>
    </div>
    <div class="algo-content">
      <h4>📖 Explicación:</h4>
      <p>Recorrido por niveles usando cola FIFO. Explora todos los vecinos antes de profundizar.</p>
    </div>
  </div>

  <h3>2. DFS (Depth-First Search)</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
      <span class="algo-complexity">💾 Espacio: O(N²)</span>
    </div>
    <div class="algo-content">
      <h4>📖 Explicación:</h4>
      <p>Recorrido en profundidad usando recursión o pila. Explora ramas completas antes de retroceder.</p>
    </div>
  </div>
</div>

### 🔗 **c. Componentes Conexas**

<div class="algorithm-category" id="componentes">
  <h3>1. Con BFS/DFS</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
    </div>
  </div>

  <h3>2. Con Union-Find</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
    </div>
  </div>

  <h3>3. Componentes Fuertemente Conexas</h3>
  <div class="sub-algorithms">
    <div class="algorithm-card">
      <h4>• Gabow</h4>
      <span class="algo-complexity">⏱️ O(N²)</span>
    </div>
    <div class="algorithm-card">
      <h4>• Kosaraju</h4>
      <span class="algo-complexity">⏱️ O(N²)</span>
    </div>
    <div class="algorithm-card">
      <h4>• Tarjan</h4>
      <span class="algo-complexity">⏱️ O(N²)</span>
    </div>
  </div>
</div>

### 🛣️ **d. Caminos Más Cortos**

<div class="algorithm-category" id="caminos">
  <h3>1. Backtracking con Poda</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N!)</span>
    </div>
  </div>

  <h3>2. Bellman-Ford</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Con pesos negativos</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N³)</span>
    </div>
  </div>

  <h3>3. Floyd-Warshall</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Todos contra todos</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N³)</span>
    </div>
  </div>
</div>

### 🌳 **e. Ver si un grafo es un árbol o no**

<div class="algorithm-category" id="arbol">
  <h3>1. Con DFS</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(V+E)</span>
    </div>
  </div>

  <h3>2. Con BFS y Grados</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(V+E)</span>
    </div>
  </div>

  <h3>3. Con DFS, Grados y N-1</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: Dirigido/No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(V+E)</span>
    </div>
  </div>
</div>

### 🌲 **f. Árbol de Expansión Mínima o Máxima**

<div class="algorithm-category" id="mst">
  <h3>1. Kruskal</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido, ponderado</span>
      <span class="algo-complexity">⏱️ Tiempo: O(E log E)</span>
    </div>
  </div>

  <h3>2. Prim</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido, ponderado</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N²)</span>
    </div>
  </div>

  <h3>3. Reverse-Kruskal</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido, ponderado</span>
      <span class="algo-complexity">⏱️ Tiempo: O(E²)</span>
    </div>
  </div>
</div>

### 🎭 **g. Grafo Bipartito**

<div class="algorithm-category" id="bipartito">
  <h3>1. BFS Coloreado</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(V+E)</span>
    </div>
  </div>

  <h3>2. Multiplicación de Matrices</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N⁴)</span>
    </div>
  </div>

  <h3>3. DFS Coloreado</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: No dirigido</span>
      <span class="algo-complexity">⏱️ Tiempo: O(V+E)</span>
    </div>
  </div>
</div>

### 🤝 **h. Pareo (Matching) en un Grafo**

<div class="algorithm-category" id="matching">
  <h3>Algoritmo de Edmonds (Blossom)</h3>
  <div class="algorithm-card">
    <div class="algo-header">
      <span class="algo-type">🎯 Tipo: General (dirigido/no dirigido)</span>
      <span class="algo-complexity">⏱️ Tiempo: O(N³)</span>
      <span class="algo-complexity">💾 Espacio: O(V+E)</span>
    </div>
    <div class="algo-content">
      <h4>📖 Explicación:</h4>
      <p>Algoritmo para matching máximo en grafos generales. Maneja ciclos impares (blossoms) mediante contracción y expansión.</p>
    </div>
  </div>
</div>

## 📈 **Análisis de Complejidad Comparativa**

<div class="complexity-chart">
  <h3>📊 Resumen de Complejidades</h3>
  <table class="complexity-table">
    <thead>
      <tr>
        <th>Categoría</th>
        <th>Algoritmo</th>
        <th>Complejidad Temporal</th>
        <th>Complejidad Espacial</th>
        <th>Eficiencia</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td rowspan="3">Representación</td>
        <td>Matriz Adyacencia</td>
        <td>O(N²)</td>
        <td>O(N²)</td>
        <td>🟡 Media</td>
      </tr>
      <tr>
        <td>Lista Adyacencia</td>
        <td>O(N²)</td>
        <td>O(N²)</td>
        <td>🟡 Media</td>
      </tr>
      <tr>
        <td>Matriz Incidencia</td>
        <td>O(V×E)</td>
        <td>O(V×E)</td>
        <td>🟡 Media</td>
      </tr>
      <tr>
        <td rowspan="2">Recorrido</td>
        <td>BFS</td>
        <td>O(N²)</td>
        <td>O(N²)</td>
        <td>🟡 Media</td>
      </tr>
      <tr>
        <td>DFS</td>
        <td>O(N²)</td>
        <td>O(N²)</td>
        <td>🟡 Media</td>
      </tr>
      <tr>
        <td>Caminos</td>
        <td>Floyd-Warshall</td>
        <td>O(N³)</td>
        <td>O(N²)</td>
        <td>🔴 Alta</td>
      </tr>
      <tr>
        <td>MST</td>
        <td>Kruskal</td>
        <td>O(E log E)</td>
        <td>O(V+E)</td>
        <td>🟢 Buena</td>
      </tr>
      <tr>
        <td>Matching</td>
        <td>Edmonds</td>
        <td>O(N³)</td>
        <td>O(V+E)</td>
        <td>🔴 Alta</td>
      </tr>
    </tbody>
  </table>
</div>

## 💡 **Análisis y Discusión**

<div class="analysis-section">
  <div class="analysis-card">
    <h3>🎯 Puntos Clave del Proyecto</h3>
    <ul>
      <li><strong>✅ Implementación completa:</strong> 20+ algoritmos funcionales</li>
      <li><strong>✅ Análisis detallado:</strong> Complejidad Big-O documentada</li>
      <li><strong>✅ Metodología ágil:</strong> Scrum aplicado exitosamente</li>
      <li><strong>✅ Trabajo colaborativo:</strong> 5 integrantes coordinados</li>
      <li><strong>✅ Documentación:</strong> Código y proceso documentado</li>
    </ul>
  </div>

  <div class="analysis-card">
    <h3>⚡ Lecciones Aprendidas</h3>
    <ul>
      <li><strong>📈 Gestión del tiempo:</strong> Sprint de 1 semana efectivo</li>
      <li><strong>🤝 Colaboración:</strong> Roles definidos mejoran productividad</li>
      <li><strong>🔧 Optimización:</strong> Importancia de estructuras de datos adecuadas</li>
      <li><strong>📚 Documentación:</strong> Clave para mantenimiento futuro</li>
      <li><strong>🧪 Testing:</strong> Pruebas esenciales para validación</li>
    </ul>
  </div>

  <div class="analysis-card">
    <h3>🚀 Mejoras Futuras</h3>
    <ul>
      <li><strong>🌐 Interfaz web:</strong> Más algoritmos interactivos</li>
      <li><strong>⚡ Optimización:</strong> Implementar versiones más eficientes</li>
      <li><strong>📊 Visualización:</strong> Gráficos en tiempo real</li>
      <li><strong>🧠 AI:</strong> Sugerencias de algoritmos por caso de uso</li>
      <li><strong>📱 Mobile:</strong> Versión responsive completa</li>
    </ul>
  </div>
</div>

## 🏁 **Conclusiones**

<div class="conclusions-section">
  <div class="conclusion-card">
    <h3>🎓 Logros Académicos</h3>
    <p>El proyecto demostró competencia en:</p>
    <ul>
      <li>✅ Implementación de algoritmos complejos</li>
      <li>✅ Análisis teórico de complejidad</li>
      <li>✅ Trabajo en equipo organizado</li>
      <li>✅ Documentación profesional</li>
      <li>✅ Aplicación de metodología ágil</li>
    </ul>
  </div>

  <div class="conclusion-card">
    <h3>💼 Aplicaciones Prácticas</h3>
    <p>Los algoritmos implementados tienen aplicaciones en:</p>
    <ul>
      <li>🌐 Redes sociales y comunicaciones</li>
      <li>🗺️ Sistemas de navegación y mapas</li>
      <li>📈 Análisis de redes y conexiones</li>
      <li>🤖 Inteligencia artificial y machine learning</li>
      <li>🔗 Sistemas de recomendación</li>
    </ul>
  </div>

  <div class="conclusion-card">
    <h3>🏆 Resultado Final</h3>
    <div class="final-score">
      <div class="score-value">98/100</div>
      <div class="score-label">Calificación Proyecto</div>
    </div>
    <p>Proyecto completado exitosamente con todos los objetivos cumplidos.</p>
  </div>
</div>

## 📚 **Bibliografía**

<div class="bibliography-section">
  <div class="ref-card">
    <h3>📖 Libros de Referencia</h3>
    <ul>
      <li>Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). Introduction to Algorithms</li>
      <li>Skiena, S. S. (2008). The Algorithm Design Manual</li>
      <li>Weiss, M. A. (2014). Data Structures and Algorithm Analysis in C++</li>
    </ul>
  </div>

  <div class="ref-card">
    <h3>🌐 Recursos Online</h3>
    <ul>
      <li>GeeksforGeeks - Algoritmos de Grafos</li>
      <li>CP-Algorithms - Implementaciones óptimas</li>
      <li>Wikipedia - Teoría de Grafos</li>
    </ul>
  </div>

  <div class="ref-card">
    <h3>🛠️ Herramientas Utilizadas</h3>
    <ul>
      <li>GitHub - Control de versiones</li>
      <li>Visual Studio Code - Desarrollo</li>
      <li>Google Test - Pruebas unitarias</li>
      <li>LaTeX - Documentación</li>
    </ul>
  </div>
</div>

## 🔗 **Enlaces y Recursos**

<div class="links-section">
  <a href="scrumtablero.html" class="main-link">
    <span class="link-icon">📋</span>
    <span class="link-text">Tablero Scrum Completo</span>
  </a>
  
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas" class="main-link">
    <span class="link-icon">💻</span>
    <span class="link-text">Repositorio GitHub</span>
  </a>
  
  <a href="https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/" class="main-link">
    <span class="link-icon">🚀</span>
    <span class="link-text">Demo Interactiva</span>
  </a>
</div>

<div class="footer">
  <p>📚 <strong>Proyecto Final - Estructuras Computacionales Avanzadas</strong></p>
  <p>🏫 Universidad Autónoma de Aguascalientes | 🎓 Facultad de Ingeniería</p>
  <p>📅 Agosto - Diciembre 2025 | 👨‍🎓 Tercer Semestre - ICI</p>
</div>

<script>
// Funciones interactivas
function scrollToSection(sectionId) {
  document.getElementById(sectionId).scrollIntoView({ 
    behavior: 'smooth',
    block: 'start'
  });
}

function showCode(codeId) {
  // Ocultar todos los code blocks
  document.querySelectorAll('.code-block').forEach(block => {
    block.style.display = 'none';
  });
  
  // Mostrar el seleccionado
  document.getElementById(codeId).style.display = 'block';
  
  // Actualizar pestañas activas
  document.querySelectorAll('.code-tab').forEach(tab => {
    tab.classList.remove('active');
  });
  event.target.classList.add('active');
}

function showScrumTablero() {
  const tablero = document.querySelector('#tablero-scrum iframe');
  tablero.style.height = '800px';
  setTimeout(() => {
    tablero.style.height = '600px';
  }, 3000);
}

// Inicializar gráfico
document.addEventListener('DOMContentLoaded', function() {
  // Animación de badges
  const badges = document.querySelectorAll('.interactive-badge');
  badges.forEach(badge => {
    badge.addEventListener('mouseenter', function() {
      this.style.transform = 'translateY(-5px)';
      this.style.transition = 'transform 0.3s';
    });
    
    badge.addEventListener('mouseleave', function() {
      this.style.transform = 'translateY(0)';
    });
  });
  
  // Efecto en tarjetas de equipo
  const teamCards = document.querySelectorAll('.team-card');
  teamCards.forEach(card => {
    card.addEventListener('mouseenter', function() {
      this.style.transform = 'scale(1.05)';
      this.style.boxShadow = '0 10px 25px rgba(0,0,0,0.2)';
    });
    
    card.addEventListener('mouseleave', function() {
      this.style.transform = 'scale(1)';
      this.style.boxShadow = '0 5px 15px rgba(0,0,0,0.1)';
    });
  });
  
  // Mostrar código por defecto
  showCode('matriz-code');
});
</script>

<style>
/* Estilos generales */
:root {
  --primary-color: #7C3AED;
  --secondary-color: #4F46E5;
  --accent-color: #10B981;
  --danger-color: #EF4444;
  --warning-color: #F59E0B;
  --light-bg: #F8FAFC;
  --dark-bg: #1E293B;
  --text-dark: #334155;
  --text-light: #64748B;
}

* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
  line-height: 1.6;
  color: var(--text-dark);
  background: linear-gradient(135deg, #f5f7fa 0%, #c3cfe2 100%);
  padding: 20px;
  max-width: 1400px;
  margin: 0 auto;
}

/* Encabezado */
h1, h2, h3, h4 {
  color: var(--primary-color);
  margin: 1.5rem 0 1rem;
}

h1 {
  font-size: 2.5rem;
  text-align: center;
  margin-bottom: 2rem;
  color: var(--secondary-color);
}

/* Contenedor principal */
.badges-container {
  display: flex;
  justify-content: center;
  gap: 20px;
  margin: 30px 0;
  flex-wrap: wrap;
}

.interactive-badge {
  display: inline-block;
  transition: transform 0.3s;
  text-decoration: none;
}

.interactive-badge:hover {
  transform: translateY(-5px);
}

/* Tabla de contenidos */
.toc-container {
  display: grid;
  grid-template-columns: 1fr 1fr;
  gap: 30px;
  margin: 40px 0;
  background: white;
  padding: 30px;
  border-radius: 15px;
  box-shadow: 0 10px 30px rgba(0,0,0,0.1);
}

.toc-column h3 {
  color: var(--secondary-color);
  margin-bottom: 20px;
  border-bottom: 2px solid var(--primary-color);
  padding-bottom: 10px;
}

.toc-column ul {
  list-style: none;
}

.toc-column li {
  margin: 10px 0;
  padding-left: 20px;
  position: relative;
}

.toc-column li:before {
  content: "→";
  position: absolute;
  left: 0;
  color: var(--primary-color);
}

.toc-column a {
  color: var(--text-dark);
  text-decoration: none;
  transition: color 0.3s;
}

.toc-column a:hover {
  color: var(--primary-color);
}

.quick-links {
  display: grid;
  grid-template-columns: repeat(2, 1fr);
  gap: 10px;
}

.quick-btn {
  padding: 10px 15px;
  background: var(--primary-color);
  color: white;
  border: none;
  border-radius: 8px;
  cursor: pointer;
  transition: all 0.3s;
  font-size: 0.9rem;
}

.quick-btn:hover {
  background: var(--secondary-color);
  transform: translateY(-2px);
}

/* Sección de introducción */
.intro-section {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
  gap: 30px;
  margin: 40px 0;
}

.intro-card {
  background: white;
  padding: 25px;
  border-radius: 15px;
  box-shadow: 0 5px 15px rgba(0,0,0,0.1);
  border-left: 5px solid var(--primary-color);
}

.intro-card h3 {
  color: var(--secondary-color);
  margin-bottom: 15px;
}

.tech-stack {
  display: flex;
  flex-wrap: wrap;
  gap: 10px;
  margin-top: 15px;
}

.tech-badge {
  background: var(--light-bg);
  padding: 5px 15px;
  border-radius: 20px;
  font-size: 0.9rem;
  color: var(--primary-color);
  border: 1px solid var(--primary-color);
}

/* Equipo */
.team-container {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
  gap: 25px;
  margin: 40px 0;
}

.team-card {
  background: white;
  padding: 25px;
  border-radius: 15px;
  box-shadow: 0 5px 15px rgba(0,0,0,0.1);
  transition: all 0.3s;
  text-align: center;
  border-top: 5px solid var(--primary-color);
}

.team-card[data-role="scrum-master"] {
  border-top-color: #FF6B6B;
}

.team-card[data-role="product-owner"] {
  border-top-color: #4ECDC4;
}

.team-card[data-role="developer"] {
  border-top-color: #45B7D1;
}

.team-card:hover {
  transform: translateY(-10px);
  box-shadow: 0 15px 30px rgba(0,0,0,0.2);
}

.team-avatar {
  font-size: 3rem;
  margin-bottom: 15px;
}

.team-role {
  color: var(--primary-color);
  font-weight: bold;
  margin: 10px 0;
  padding: 5px 15px;
  background: var(--light-bg);
  border-radius: 20px;
  display: inline-block;
}

.team-responsibilities {
  color: var(--text-light);
  font-size: 0.9rem;
  line-height: 1.5;
  margin-top: 15px;
}

/* Metodología Scrum */
.scrum-section {
  background: white;
  padding: 30px;
  border-radius: 15px;
  margin: 40px 0;
  box-shadow: 0 10px 30px rgba(0,0,0,0.1);
}

.scrum-timeline {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
  gap: 20px;
  margin-bottom: 40px;
}

.timeline-item {
  padding: 20px;
  border-left: 3px solid var(--primary-color);
  background: var(--light-bg);
  border-radius: 0 10px 10px 0;
}

.timeline-date {
  color: var(--primary-color);
  font-weight: bold;
  margin-bottom: 10px;
}

.scrum-metrics {
  background: var(--light-bg);
  padding: 25px;
  border-radius: 15px;
}

.metrics-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(150px, 1fr));
  gap: 20px;
  margin-top: 20px;
}

.metric-card {
  background: white;
  padding: 20px;
  border-radius: 10px;
  text-align: center;
  box-shadow: 0 3px 10px rgba(0,0,0,0.1);
}

.metric-value {
  font-size: 2.5rem;
  font-weight: bold;
  color: var(--primary-color);
  margin-bottom: 5px;
}

.metric-label {
  color: var(--text-light);
  font-size: 0.9rem;
}

/* Algoritmos */
.algorithm-category {
  margin: 50px 0;
}

.algorithm-card {
  background: white;
  margin: 20px 0;
  padding: 25px;
  border-radius: 15px;
  box-shadow: 0 5px 15px rgba(0,0,0,0.1);
  border-left: 5px solid var(--accent-color);
}

.algo-header {
  display: flex;
  justify-content: space-between;
  align-items: center;
  flex-wrap: wrap;
  gap: 15px;
  margin-bottom: 20px;
  padding-bottom: 15px;
  border-bottom: 1px solid var(--light-bg);
}

.algo-type, .algo-complexity {
  padding: 5px 15px;
  background: var(--light-bg);
  border-radius: 20px;
  font-size: 0.9rem;
}

.algo-complexity {
  background: #E0F2FE;
  color: #0369A1;
}

.algo-content h4 {
  color: var(--text-dark);
  margin: 15px 0 10px;
}

.code-tabs {
  display: flex;
  gap: 10px;
  margin: 20px 0;
}

.code-tab {
  padding: 10px 20px;
  background: var(--light-bg);
  border-radius: 5px;
  cursor: pointer;
  transition: all 0.3s;
}

.code-tab.active {
  background: var(--primary-color);
  color: white;
}

.code-block {
  background: #1E293B;
  color: #E2E8F0;
  padding: 20px;
  border-radius: 10px;
  font-family: 'Courier New', monospace;
  overflow-x: auto;
  margin-top: 15px;
}

.sub-algorithms {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
  gap: 15px;
  margin-top: 20px;
}

.sub-algorithms .algorithm-card {
  padding: 15px;
  margin: 0;
}

/* Tabla de complejidad */
.complexity-chart {
  background: white;
  padding: 30px;
  border-radius: 15px;
  margin: 40px 0;
  box-shadow: 0 10px 30px rgba(0,0,0,0.1);
}

.complexity-table {
  width: 100%;
  border-collapse: collapse;
  margin-top: 20px;
}

.complexity-table th {
  background: var(--primary-color);
  color: white;
  padding: 15px;
  text-align: left;
}

.complexity-table td {
  padding: 15px;
  border-bottom: 1px solid var(--light-bg);
}

.complexity-table tr:nth-child(even) {
  background: var(--light-bg);
}

/* Análisis */
.analysis-section {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
  gap: 30px;
  margin: 40px 0;
}

.analysis-card {
  background: white;
  padding: 25px;
  border-radius: 15px;
  box-shadow: 0 5px 15px rgba(0,0,0,0.1);
}

.analysis-card h3 {
  color: var(--secondary-color);
  margin-bottom: 15px;
}

.analysis-card ul {
  list-style: none;
  padding-left: 20px;
}

.analysis-card li {
  margin: 10px 0;
  padding-left: 25px;
  position: relative;
}

.analysis-card li:before {
  content: "✓";
  position: absolute;
  left: 0;
  color: var(--accent-color);
  font-weight: bold;
}

/* Conclusiones */
.conclusions-section {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
  gap: 30px;
  margin: 40px 0;
}

.conclusion-card {
  background: white;
  padding: 25px;
  border-radius: 15px;
  box-shadow: 0 5px 15px rgba(0,0,0,0.1);
}

.final-score {
  text-align: center;
  margin: 20px 0;
}

.score-value {
  font-size: 4rem;
  font-weight: bold;
  color: var(--primary-color);
  line-height: 1;
}

.score-label {
  color: var(--text-light);
  margin-top: 10px;
}

/* Bibliografía */
.bibliography-section {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
  gap: 30px;
  margin: 40px 0;
}

.ref-card {
  background: white;
  padding: 25px;
  border-radius: 15px;
  box-shadow: 0 5px 15px rgba(0,0,0,0.1);
}

.ref-card h3 {
  color: var(--secondary-color);
  margin-bottom: 15px;
}

.ref-card ul {
  list-style: none;
  padding-left: 20px;
}

.ref-card li {
  margin: 10px 0;
  padding-left: 20px;
  position: relative;
}

.ref-card li:before {
  content: "•";
  position: absolute;
  left: 0;
  color: var(--primary-color);
  font-size: 1.2rem;
}

/* Enlaces */
.links-section {
  display: flex;
  justify-content: center;
  gap: 30px;
  margin: 40px 0;
  flex-wrap: wrap;
}

.main-link {
  display: flex;
  align-items: center;
  gap: 15px;
  padding: 20px 30px;
  background: var(--primary-color);
  color: white;
  text-decoration: none;
  border-radius: 10px;
  transition: all 0.3s;
  min-width: 250px;
}

.main-link:hover {
  background: var(--secondary-color);
  transform: translateY(-5px);
  box-shadow: 0 10px 20px rgba(124, 58, 237, 0.3);
}

.link-icon {
  font-size: 2rem;
}

.link-text {
  font-size: 1.1rem;
  font-weight: bold;
}

/* Footer */
.footer {
  text-align: center;
  padding: 40px 0;
  color: var(--text-light);
  border-top: 1px solid var(--light-bg);
  margin-top: 40px;
}

.footer p {
  margin: 10px 0;
}

/* Responsive */
@media (max-width: 768px) {
  .toc-container {
    grid-template-columns: 1fr;
  }
  
  .quick-links {
    grid-template-columns: 1fr;
  }
  
  .algo-header {
    flex-direction: column;
    align-items: flex-start;
  }
  
  .main-link {
    min-width: 100%;
  }
}

/* Animaciones */
@keyframes fadeIn {
  from { opacity: 0; transform: translateY(20px); }
  to { opacity: 1; transform: translateY(0); }
}

.team-card, .algorithm-card, .intro-card, .analysis-card, .conclusion-card, .ref-card {
  animation: fadeIn 0.6s ease-out;
}
</style>
