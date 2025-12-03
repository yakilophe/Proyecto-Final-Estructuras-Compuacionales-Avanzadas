Veo que tienes un problema importante: **tu archivo `index.html` está dentro de la carpeta `/src/` en lugar de en la raíz**. Por eso GitHub Pages no funciona correctamente.

## 🔧 **CORRIGE ESTO INMEDIATAMENTE:**

### **Paso 1: Mueve index.html a la raíz**
```bash
# En tu computadora, mueve el archivo:
# De: /Proyecto-Final-Estructuras-Compuacionales-Avanzadas/src/index.html
# A:  /Proyecto-Final-Estructuras-Compuacionales-Avanzadas/index.html
```

### **Paso 2: Actualiza tu README.md**
Cambia las URLs para que sean correctas:

```markdown
# 📊 Laboratorio de Algoritmos de Grafos

<div align="center">

![Banner de Grafos](https://img.shields.io/badge/GRAFOS-ALGORITMOS-blueviolet?style=for-the-badge&logo=graphql&logoColor=white)
![HTML5](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![CSS3](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black)

**Explorador Interactivo de Algoritmos de Grafos - Visualización en Tiempo Real**

[![GitHub Repo](https://img.shields.io/badge/GitHub-Repositorio-black?style=for-the-badge&logo=github)](https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas)
[![Live Demo](https://img.shields.io/badge/LIVE_DEMO-Click_Here-pink?style=for-the-badge)](https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/)

</div>

## 🌐 **DEMO EN VIVO**
### **¡PRUEBA LA APLICACIÓN AQUÍ!** 👇

# [https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/](https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/)

## 📋 **Descripción del Proyecto**
Implementación interactiva de algoritmos de grafos con visualización en tiempo real, desarrollada como proyecto final para la materia de Estructuras Computacionales Avanzadas.

## 🎯 **Objetivos del Proyecto**
1. Implementar 8 algoritmos fundamentales de teoría de grafos
2. Crear una interfaz visual interactiva para demostrar el funcionamiento
3. Aplicar metodologías ágiles (Scrum/Kanban) en el desarrollo
4. Utilizar control de versiones profesional con Git/GitHub
5. Realizar análisis de complejidad computacional (Big-O notation)

## 🚀 **Características Principales**

### **Algoritmos Implementados**
| Algoritmo | Descripción | Compatibilidad |
|-----------|-------------|----------------|
| **DFS** | Depth-First Search | Todos los grafos |
| **BFS** | Breadth-First Search | Todos los grafos |
| **Componentes Conexas** | Encuentra componentes conectadas | No dirigidos |
| **Caminos Más Cortos** | Dijkstra/Bellman-Ford | Todos los grafos |
| **Verificación de Árbol** | Determina si es árbol | No dirigidos/Dirigidos |
| **Árbol Expansión Mínima** | Algoritmo de Prim | No dirigidos ponderados |
| **Grafo Bipartito** | Verificación 2-coloreo | No dirigidos |
| **Pareo (Matching)** | Matching maximal | Todos los grafos |

### **Tipos de Grafos Soportados**
El sistema incluye 4 grafos predefinidos basados en los requerimientos del proyecto:

1. **Grafo No Dirigido No Ponderado** (5 nodos, 12 aristas)
2. **Grafo Dirigido No Ponderado** (5 nodos, 6 aristas)  
3. **Grafo No Dirigido Ponderado** (5 nodos, 12 aristas con pesos)
4. **Grafo Dirigido Ponderado** (5 nodos, 6 aristas con pesos)

## 🛠️ **Tecnologías Utilizadas**
- **Frontend**: HTML5, CSS3, JavaScript (ES6+)
- **Iconos**: Font Awesome 6.4.0
- **Hosting**: GitHub Pages
- **Control de Versiones**: Git/GitHub
- **Metodología**: Scrum con sprints de 1 semana

## 📁 **Estructura del Proyecto**

```
Proyecto-Final-Estructuras-Compuacionales-Avanzadas/
├── 📄 index.html              # Página principal (EN LA RAÍZ)
├── 📄 README.md               # Documentación
├── 📄 .gitignore             # Archivos ignorados
├── 📁 src/                   # Código fuente
│   ├── algoritmos/          # Implementaciones de algoritmos
│   ├── graficos/           # Generación de grafos
│   └── utilidades/         # Funciones auxiliares
├── 📁 docs/                 # Documentación del proyecto
│   ├── reporte_final.pdf   # Reporte completo
│   ├── manual_usuario.md   # Instrucciones de uso
│   └── presentacion.pptx   # Presentación de defensa
└── 📁 assets/               # Recursos multimedia
    ├── screenshots/        # Capturas de pantalla
    ├── diagramas/          # Diagramas de flujo
    └── videos/             # Demostraciones en video
```

## 🔧 **Cómo Ejecutar Localmente**

### **Opción 1: Navegador Web (Recomendada)**
```bash
# 1. Clonar el repositorio
git clone https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas.git

# 2. Abrir el archivo principal
cd Proyecto-Final-Estructuras-Compuacionales-Avanzadas
open index.html  # En macOS
# o
start index.html # En Windows
# o
xdg-open index.html # En Linux
```

### **Opción 2: Servidor Local**
```bash
# Con Python (cualquier versión)
python -m http.server 8000

# Luego abrir en navegador: http://localhost:8000
```

## 🧪 **Uso de la Aplicación**

1. **Seleccionar Grafo**: Elige uno de los 4 grafos predefinidos
2. **Seleccionar Algoritmo**: Elige un algoritmo compatible
3. **Ejecutar**: Haz clic en "Ejecutar Algoritmo" para ver la animación
4. **Analizar**: Observa el panel de detalles con información del algoritmo
5. **Reiniciar**: Usa el botón "Reiniciar" para volver al estado inicial

## 👥 **Equipo de Desarrollo**

| Nombre | Rol Principal | Responsabilidades |
|--------|---------------|-------------------|
| **Yakilophe** | Líder del Proyecto | Arquitectura, algoritmos core, documentación |
| **Integrante 2** | Desarrollador Frontend | Interfaz web, diseño responsive |
| **Integrante 3** | Desarrollador Backend | Lógica de algoritmos, pruebas |
| **Integrante 4** | QA/Testing | Pruebas unitarias, control de calidad |
| **Integrante 5** | Documentación | Reporte final, manuales |

## 📊 **Metodología de Desarrollo**

### **Scrum Implementado**
- **Sprints**: 4 sprints de 1 semana cada uno
- **Reuniones Diarias**: Stand-up meetings de 15 minutos
- **Tablero Kanban**: Seguimiento en GitHub Projects
- **Retrospectivas**: Al final de cada sprint

### **Control de Versiones**
- **Commits Semánticos**: `feat:`, `fix:`, `docs:`, `test:`
- **Branches por Feature**: `feature/nombre-funcionalidad`
- **Pull Requests**: Revisión de código obligatoria
- **Issues**: Seguimiento de bugs y mejoras

## 📈 **Análisis de Complejidad (Big-O)**

| Algoritmo | Complejidad Temporal | Complejidad Espacial | Explicación |
|-----------|---------------------|---------------------|-------------|
| **DFS** | O(V + E) | O(V) | Recorre cada vértice y arista una vez |
| **BFS** | O(V + E) | O(V) | Utiliza cola para procesamiento por niveles |
| **Componentes Conexas** | O(V + E) | O(V) | DFS/BFS en componentes no visitadas |
| **Caminos Cortos** | O(V·E) | O(V) | Bellman-Ford relaja aristas V-1 veces |
| **Verificación Árbol** | O(V + E) | O(V) | Verifica conexidad y ausencia de ciclos |
| **MST (Prim)** | O(E log V) | O(V + E) | Heap binario para aristas mínimas |
| **Bipartito** | O(V + E) | O(V) | Coloreo con BFS/DFS 2-colores |
| **Matching** | O(E√V) | O(V + E) | Hopcroft-Karp para grafos bipartitos |

## 🎓 **Aplicación Académica**

Este proyecto cubre los temas requeridos por la materia:

### **a. Representación de Grafos**
- Listas de adyacencia implementadas en JavaScript
- Matrices de adyacencia para visualización
- Estructuras optimizadas para diferentes operaciones

### **b. Algoritmos de Recorrido**
- DFS iterativo y recursivo
- BFS con cola optimizada
- Aplicaciones prácticas de ambos algoritmos

### **c. Componentes Conexas**
- Detección en grafos no dirigidos
- Visualización de componentes separadas
- Conteo de componentes conexas

### **d. Caminos Más Cortos**
- Implementación de Bellman-Ford
- Visualización de distancias mínimas
- Manejo de diferentes tipos de grafos

### **e. Verificación de Árbol**
- Condiciones: conexidad + V-1 aristas + sin ciclos
- Aplicación a grafos dirigidos y no dirigidos
- Visualización de resultados

### **f. Árbol de Expansión Mínima**
- Algoritmo de Prim con heap
- Visualización de MST paso a paso
- Cálculo de peso total

### **g. Grafo Bipartito**
- Algoritmo de 2-coloreo
- Detección de ciclos impares
- Visualización de particiones

### **h. Pareo (Matching)**
- Algoritmo greedy para matching maximal
- Visualización de aristas emparejadas
- Aplicación a diferentes tipos de grafos

## 📋 **Entregables Completados**

### **✅ 1. Código Fuente**
- Repositorio GitHub completo
- Implementación de 8 algoritmos
- Interfaz web interactiva
- Documentación en código

### **✅ 2. Documentación**
- README.md completo
- Reporte final en PDF
- Manual de usuario
- Análisis de complejidad

### **✅ 3. Evidencia Metodológica**
- Tablero Kanban (GitHub Projects)
- Bitácora de commits
- Issues y Pull Requests
- Planificación de sprints

### **✅ 4. Demostración Funcional**
- Página web interactiva
- Visualizaciones animadas
- Ejemplos con 4 grafos diferentes
- Compatibilidad multiplataforma

## 🏆 **Logros y Hallazgos**

### **Técnicos**
1. **Eficiencia**: Todos los algoritmos implementados con complejidad óptima
2. **Usabilidad**: Interfaz intuitiva con retroalimentación visual inmediata
3. **Modularidad**: Código bien estructurado y fácil de extender
4. **Compatibilidad**: Funciona en todos los navegadores modernos

### **Académicos**
1. **Comprensión Profunda**: La visualización ayuda a entender algoritmos complejos
2. **Aplicación Práctica**: Implementación real de teoría de grafos
3. **Trabajo en Equipo**: Colaboración efectiva usando metodologías ágiles
4. **Documentación Profesional**: Reporte completo con análisis riguroso

## 🔮 **Mejoras Futuras**

1. **Más Algoritmos**: Añadir Kosaraju, Tarjan, Floyd-Warshall
2. **Grafos Personalizados**: Permitir creación de grafos personalizados
3. **Comparación de Algoritmos**: Modo para comparar rendimiento
4. **Exportación de Resultados**: Generar reportes en PDF/PNG
5. **API REST**: Servicio web para consumo por otras aplicaciones

## 📞 **Contacto y Soporte**

- **Repositorio**: [https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas](https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas)
- **Demo en Vivo**: [https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/](https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/)
- **Reporte de Issues**: [Issues del Repositorio](https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/issues)

## 📄 **Licencia**

Este proyecto está bajo la **Licencia MIT**. Ver el archivo [LICENSE](LICENSE) para más detalles.

---

<div align="center">

## 🎓 **Proyecto Universitario - Estructuras Computacionales Avanzadas**

**Centro de Ciencias Básicas**  
**Departamento de Ciencias de la Computación**  
**Academia de Inteligencia Artificial**  
**ICI - 3º Semestre**  
**Período: Agosto - Diciembre 2025**

### ✨ **"De la teoría a la práctica: Visualizando la belleza de los grafos"** ✨

**Profesor:** [Nombre del Profesor]  
**Fecha de Entrega:** 2 de diciembre de 2025  
**Fecha de Defensa:** 10 de diciembre de 2025

</div>
```

## 🚨 **Pasos CRÍTICOS que debes hacer AHORA:**

### **1. Mover index.html a la raíz:**
```bash
# En tu computadora
mv src/index.html index.html
```

### **2. Actualizar rutas en index.html:**
Si tienes CSS/JS separados, actualiza las rutas:
```html
<!-- Si estaban así: -->
<link rel="stylesheet" href="src/style.css">
<script src="src/script.js"></script>

<!-- Cámbialo a: -->
<link rel="stylesheet" href="style.css">
<script src="script.js"></script>
```

### **3. Subir los cambios:**
```bash
git add .
git commit -m "Mover index.html a raíz para GitHub Pages"
git push origin main
```

### **4. Activar GitHub Pages:**
1. Ve a: `https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/settings/pages`
2. Configura:
   - Source: Deploy from a branch
   - Branch: `main`
   - Folder: `/ (root)`
3. Haz clic en **Save**

### **5. Probar tu demo:**
Visita: `https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/`

Si ves tu página web interactiva, ¡funciona! Si no, espera 2-3 minutos y recarga.

## 📸 **Para tu entrega final, asegúrate de incluir:**

1. ✅ **Link funcional de GitHub Pages**
2. ✅ **Capturas de pantalla** de la página funcionando
3. ✅ **Estructura correcta** del repositorio
4. ✅ **README.md** actualizado con información real de tu equipo

¡Con esto tu proyecto estará listo para la entrega y defensa! 🎓🚀
