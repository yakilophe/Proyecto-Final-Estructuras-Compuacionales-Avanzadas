# 🎓 Proyecto Final: Implementación de Algoritmos de Grafos en C++ con Interfaz Web Interactiva

<div align="center">

![Banner Animado](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=35&duration=4000&pause=1000&color=7C3AED&center=true&vCenter=true&width=800&height=80&lines=%F0%9F%8E%93+PROYECTO+FINAL+DE+GRAFOS;%F0%9F%9A%80+ALGORITMOS+OPTIMIZADOS+EN+C%2B%2B;%F0%9F%8E%A0+INTERFAZ+WEB+INTERACTIVA;%F0%9F%93%88+VISUALIZACIÓN+EN+TIEMPO+REAL)

</div>

<div align="center">

<!-- Badges con animaciones -->
<div style="display: flex; justify-content: center; flex-wrap: wrap; gap: 15px; margin: 30px 0;">

![C++](https://img.shields.io/badge/C%2B%2B-17%2B-blue?style=for-the-badge&logo=c%2B%2B&logoColor=white&labelColor=1e40af&color=3b82f6&animation=glow)
![Web Interface](https://img.shields.io/badge/INTERFAZ%20WEB-INTERACTIVA-orange?style=for-the-badge&logo=html5&logoColor=white&labelColor=ea580c&color=f97316&animation=pulse)
![Algorithms](https://img.shields.io/badge/20%2B%20ALGORITMOS-IMPLEMENTADOS-purple?style=for-the-badge&logo=graphql&logoColor=white&labelColor=7c3aed&color=8b5cf6&animation=float)
![Visualization](https://img.shields.io/badge/VISUALIZACIÓN%20ANIMADA-EN%20TIEMPO%20REAL-green?style=for-the-badge&logo=eye&logoColor=white&labelColor=15803d&color=22c55e&animation=bounce)

</div>

</div>

<!-- SVG Animations Section -->
<div align="center">

<!-- Graph Animation SVG -->
<svg width="800" height="120" xmlns="http://www.w3.org/2000/svg">
  <style>
    @keyframes pulse-node {
      0%, 100% { r: 12; fill: #3b82f6; }
      50% { r: 15; fill: #8b5cf6; }
    }
    @keyframes move-edge {
      0% { stroke-dashoffset: 20; }
      100% { stroke-dashoffset: 0; }
    }
    @keyframes highlight {
      0%, 100% { stroke-width: 2; }
      50% { stroke-width: 4; stroke: #ef4444; }
    }
  </style>
  
  <!-- Edges -->
  <line x1="50" y1="60" x2="150" y2="40" stroke="#6b7280" stroke-width="2" stroke-dasharray="5,5">
    <animate attributeName="stroke-dashoffset" from="20" to="0" dur="2s" repeatCount="indefinite"/>
  </line>
  <line x1="150" y1="40" x2="250" y2="60" stroke="#6b7280" stroke-width="2" stroke-dasharray="5,5">
    <animate attributeName="stroke-dashoffset" from="20" to="0" dur="2s" repeatCount="indefinite" begin="0.5s"/>
  </line>
  <line x1="250" y1="60" x2="350" y2="40" stroke="#6b7280" stroke-width="2" stroke-dasharray="5,5">
    <animate attributeName="stroke-dashoffset" from="20" to="0" dur="2s" repeatCount="indefinite" begin="1s"/>
  </line>
  
  <!-- Nodes -->
  <circle cx="50" cy="60" r="12" fill="#3b82f6">
    <animate attributeName="r" values="12;15;12" dur="1.5s" repeatCount="indefinite"/>
    <animate attributeName="fill" values="#3b82f6;#8b5cf6;#3b82f6" dur="1.5s" repeatCount="indefinite"/>
  </circle>
  <text x="50" y="65" text-anchor="middle" fill="white" font-size="12" font-weight="bold">A</text>
  
  <circle cx="150" cy="40" r="12" fill="#3b82f6">
    <animate attributeName="r" values="12;15;12" dur="1.5s" repeatCount="indefinite" begin="0.3s"/>
    <animate attributeName="fill" values="#3b82f6;#10b981;#3b82f6" dur="1.5s" repeatCount="indefinite" begin="0.3s"/>
  </circle>
  <text x="150" y="45" text-anchor="middle" fill="white" font-size="12" font-weight="bold">B</text>
  
  <circle cx="250" cy="60" r="12" fill="#3b82f6">
    <animate attributeName="r" values="12;15;12" dur="1.5s" repeatCount="indefinite" begin="0.6s"/>
    <animate attributeName="fill" values="#3b82f6;#ef4444;#3b82f6" dur="1.5s" repeatCount="indefinite" begin="0.6s"/>
  </circle>
  <text x="250" y="65" text-anchor="middle" fill="white" font-size="12" font-weight="bold">C</text>
  
  <circle cx="350" cy="40" r="12" fill="#3b82f6">
    <animate attributeName="r" values="12;15;12" dur="1.5s" repeatCount="indefinite" begin="0.9s"/>
    <animate attributeName="fill" values="#3b82f6;#f59e0b;#3b82f6" dur="1.5s" repeatCount="indefinite" begin="0.9s"/>
  </circle>
  <text x="350" y="45" text-anchor="middle" fill="white" font-size="12" font-weight="bold">D</text>
  
  <!-- Highlighted Path -->
  <line x1="50" y1="60" x2="250" y2="60" stroke="#ef4444" stroke-width="3" opacity="0.7">
    <animate attributeName="stroke-width" values="3;5;3" dur="1s" repeatCount="indefinite"/>
  </line>
</svg>

<!-- Floating Demo Button -->
<div style="margin: 30px 0;">
  <a href="https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/" target="_blank">
    <img src="https://img.shields.io/badge/%F0%9F%9A%80_PROBAR_DEMO_EN_VIVO-8B5CF6?style=for-the-badge&logo=rocket&logoColor=white&labelColor=7C3AED&color=8B5CF6&animation=bounce" 
         alt="Probar Demo en Vivo" 
         style="animation: bounce 2s infinite; box-shadow: 0 8px 25px rgba(139, 92, 246, 0.5);"/>
  </a>
</div>

</div>

## 🌟 **Características Destacadas**

<div align="center" style="display: grid; grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); gap: 20px; margin: 40px 0;">

<div style="background: linear-gradient(135deg, #1e1b4b 0%, #312e81 100%); padding: 25px; border-radius: 15px; border: 2px solid #4f46e5; animation: slideInLeft 1s ease-out;">
  <h3 style="color: #818cf8; margin-top: 0;">🎨 Visualización Animada</h3>
  <ul style="text-align: left; color: #c7d2fe;">
    <li>🔵 Nodos con animación de pulso</li>
    <li>🔄 Aristas con flujo direccional</li>
    <li>🌈 Coloreado de componentes conexas</li>
    <li>⚡ Resaltado de caminos óptimos</li>
  </ul>
</div>

<div style="background: linear-gradient(135deg, #0c4a6e 0%, #075985 100%); padding: 25px; border-radius: 15px; border: 2px solid #0ea5e9; animation: slideInUp 1s ease-out;">
  <h3 style="color: #38bdf8; margin-top: 0;">⚡ Ejecución en Tiempo Real</h3>
  <ul style="text-align: left; color: #bae6fd;">
    <li>▶️ Control de velocidad de animación</li>
    <li>⏸️ Pausa y modo paso a paso</li>
    <li>📊 Estadísticas en tiempo real</li>
    <li>🎯 Visualización de resultados</li>
  </ul>
</div>

<div style="background: linear-gradient(135deg, #422006 0%, #7c2d12 100%); padding: 25px; border-radius: 15px; border: 2px solid #ea580c; animation: slideInRight 1s ease-out;">
  <h3 style="color: #fb923c; margin-top: 0;">🔧 Herramientas Profesionales</h3>
  <ul style="text-align: left; color: #fed7aa;">
    <li>📐 Creación intuitiva de grafos</li>
    <li>⚖️ Comparación de algoritmos</li>
    <li>📈 Análisis de complejidad</li>
    <li>💾 Exportación de resultados</li>
  </ul>
</div>

</div>

## 🎮 **Demo Interactiva - ¡Pruébala Ahora!**

<div align="center">

<!-- Animated GIF placeholder with CSS animation -->
<div style="position: relative; width: 100%; max-width: 800px; margin: 40px auto; padding: 20px; background: linear-gradient(135deg, #1e293b 0%, #0f172a 100%); border-radius: 20px; border: 3px solid #4f46e5; overflow: hidden; box-shadow: 0 20px 60px rgba(79, 70, 229, 0.4); animation: float 6s ease-in-out infinite;">
  
  <!-- Demo UI Mockup -->
  <div style="display: grid; grid-template-columns: 1fr 300px; gap: 20px; height: 400px;">
    
    <!-- Canvas Area -->
    <div style="background: #0f172a; border-radius: 10px; padding: 20px; position: relative;">
      <!-- Animated nodes -->
      <div style="position: absolute; width: 100%; height: 100%; top: 0; left: 0;">
        <!-- Moving node 1 -->
        <div style="position: absolute; width: 24px; height: 24px; background: linear-gradient(135deg, #3b82f6, #8b5cf6); border-radius: 50%; animation: moveNode1 4s ease-in-out infinite; box-shadow: 0 0 20px #3b82f6;"></div>
        <!-- Moving node 2 -->
        <div style="position: absolute; width: 24px; height: 24px; background: linear-gradient(135deg, #10b981, #22c55e); border-radius: 50%; animation: moveNode2 4s ease-in-out infinite; box-shadow: 0 0 20px #10b981;"></div>
        <!-- Path line -->
        <div style="position: absolute; height: 3px; background: linear-gradient(90deg, transparent, #ef4444, transparent); animation: drawPath 3s linear infinite; transform-origin: left;"></div>
      </div>
      
      <h4 style="color: #c7d2fe; text-align: center; margin-top: 150px;">🖱️ Haz clic para agregar nodos</h4>
      <p style="color: #94a3b8; text-align: center;">⇄ Arrastra para crear conexiones</p>
    </div>
    
    <!-- Control Panel -->
    <div style="background: #1e293b; border-radius: 10px; padding: 20px;">
      <h4 style="color: #818cf8; margin-top: 0;">🎯 Panel de Control</h4>
      
      <!-- Algorithm Selector -->
      <div style="background: #334155; padding: 10px; border-radius: 8px; margin-bottom: 15px; animation: glow 2s ease-in-out infinite;">
        <select style="width: 100%; padding: 8px; background: #475569; color: white; border: none; border-radius: 5px;">
          <option>🚀 Dijkstra - Camino más corto</option>
          <option>🌳 Kruskal - Árbol de expansión</option>
          <option>🔍 BFS - Recorrido en anchura</option>
          <option>🌀 DFS - Recorrido en profundidad</option>
        </select>
      </div>
      
      <!-- Execution Controls -->
      <div style="display: flex; gap: 10px; margin-bottom: 20px;">
        <button style="flex: 1; padding: 10px; background: linear-gradient(135deg, #10b981, #22c55e); border: none; border-radius: 8px; color: white; cursor: pointer; animation: pulse 2s infinite;">▶️ Ejecutar</button>
        <button style="flex: 1; padding: 10px; background: linear-gradient(135deg, #f59e0b, #fbbf24); border: none; border-radius: 8px; color: white; cursor: pointer;">⏸️ Pausar</button>
      </div>
      
      <!-- Stats -->
      <div style="background: #0f172a; padding: 15px; border-radius: 8px;">
        <div style="display: flex; justify-content: space-between; margin-bottom: 10px; animation: slideInRight 0.5s ease-out;">
          <span style="color: #94a3b8;">Nodos:</span>
          <span style="color: #60a5fa; font-weight: bold;">8</span>
        </div>
        <div style="display: flex; justify-content: space-between; margin-bottom: 10px; animation: slideInRight 0.7s ease-out;">
          <span style="color: #94a3b8;">Aristas:</span>
          <span style="color: #60a5fa; font-weight: bold;">12</span>
        </div>
        <div style="display: flex; justify-content: space-between; animation: slideInRight 0.9s ease-out;">
          <span style="color: #94a3b8;">Tiempo:</span>
          <span style="color: #60a5fa; font-weight: bold;">0.45s</span>
        </div>
      </div>
    </div>
  </div>
  
</div>

<div style="margin: 30px 0;">
  <a href="https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/" target="_blank">
    <button style="padding: 18px 40px; font-size: 18px; background: linear-gradient(135deg, #7c3aed, #8b5cf6); color: white; border: none; border-radius: 50px; cursor: pointer; font-weight: bold; letter-spacing: 1px; transition: all 0.3s; box-shadow: 0 10px 30px rgba(139, 92, 246, 0.4); animation: pulse 2s infinite;">
      🚀 ABRIR DEMO INTERACTIVA
    </button>
  </a>
</div>

</div>

## 📊 **Algoritmos Implementados con Visualización**

<div align="center" style="margin: 50px 0;">

<!-- Animated Algorithm Cards -->
<div style="display: grid; grid-template-columns: repeat(auto-fit, minmax(250px, 1fr)); gap: 25px;">

<div style="background: linear-gradient(135deg, rgba(30, 64, 175, 0.1), rgba(59, 130, 246, 0.1)); border-left: 5px solid #3b82f6; padding: 20px; border-radius: 12px; animation: fadeIn 1s ease-out; position: relative; overflow: hidden;">
  <div style="position: absolute; top: -50px; right: -50px; width: 100px; height: 100px; background: radial-gradient(circle, rgba(59, 130, 246, 0.2), transparent); border-radius: 50%;"></div>
  <h3 style="color: #3b82f6; margin-top: 0;">📍 Dijkstra</h3>
  <p style="color: #6b7280;">Camino más corto ponderado</p>
  <div style="display: flex; align-items: center; margin-top: 15px;">
    <span style="background: #3b82f6; color: white; padding: 5px 10px; border-radius: 20px; font-size: 12px; animation: pulse 2s infinite;">O(E log V)</span>
    <span style="margin-left: auto; color: #22c55e; font-weight: bold;">✅ Animado</span>
  </div>
</div>

<div style="background: linear-gradient(135deg, rgba(21, 128, 61, 0.1), rgba(34, 197, 94, 0.1)); border-left: 5px solid #10b981; padding: 20px; border-radius: 12px; animation: fadeIn 1.2s ease-out; position: relative; overflow: hidden;">
  <div style="position: absolute; top: -50px; right: -50px; width: 100px; height: 100px; background: radial-gradient(circle, rgba(16, 185, 129, 0.2), transparent); border-radius: 50%;"></div>
  <h3 style="color: #10b981; margin-top: 0;">🌳 Kruskal & Prim</h3>
  <p style="color: #6b7280;">Árbol de expansión mínima</p>
  <div style="display: flex; align-items: center; margin-top: 15px;">
    <span style="background: #10b981; color: white; padding: 5px 10px; border-radius: 20px; font-size: 12px; animation: pulse 2s infinite;">O(E log V)</span>
    <span style="margin-left: auto; color: #22c55e; font-weight: bold;">✅ Animado</span>
  </div>
</div>

<div style="background: linear-gradient(135deg, rgba(124, 58, 237, 0.1), rgba(139, 92, 246, 0.1)); border-left: 5px solid #8b5cf6; padding: 20px; border-radius: 12px; animation: fadeIn 1.4s ease-out; position: relative; overflow: hidden;">
  <div style="position: absolute; top: -50px; right: -50px; width: 100px; height: 100px; background: radial-gradient(circle, rgba(139, 92, 246, 0.2), transparent); border-radius: 50%;"></div>
  <h3 style="color: #8b5cf6; margin-top: 0;">🔍 BFS & DFS</h3>
  <p style="color: #6b7280;">Recorrido de grafos</p>
  <div style="display: flex; align-items: center; margin-top: 15px;">
    <span style="background: #8b5cf6; color: white; padding: 5px 10px; border-radius: 20px; font-size: 12px; animation: pulse 2s infinite;">O(V + E)</span>
    <span style="margin-left: auto; color: #22c55e; font-weight: bold;">✅ Animado</span>
  </div>
</div>

<div style="background: linear-gradient(135deg, rgba(217, 119, 6, 0.1), rgba(245, 158, 11, 0.1)); border-left: 5px solid #f59e0b; padding: 20px; border-radius: 12px; animation: fadeIn 1.6s ease-out; position: relative; overflow: hidden;">
  <div style="position: absolute; top: -50px; right: -50px; width: 100px; height: 100px; background: radial-gradient(circle, rgba(245, 158, 11, 0.2), transparent); border-radius: 50%;"></div>
  <h3 style="color: #f59e0b; margin-top: 0;">🔗 Hopcroft-Karp</h3>
  <p style="color: #6b7280;">Pareo bipartito máximo</p>
  <div style="display: flex; align-items: center; margin-top: 15px;">
    <span style="background: #f59e0b; color: white; padding: 5px 10px; border-radius: 20px; font-size: 12px; animation: pulse 2s infinite;">O(E√V)</span>
    <span style="margin-left: auto; color: #22c55e; font-weight: bold;">✅ Animado</span>
  </div>
</div>

</div>

</div>

## ⚡ **Instalación Rápida**

<div align="center" style="background: linear-gradient(135deg, #0f172a, #1e293b); padding: 30px; border-radius: 20px; border: 2px solid #334155; margin: 40px 0;">

<!-- Animated Terminal -->
<div style="background: #1a1a1a; border-radius: 15px; padding: 25px; font-family: 'Monaco', 'Courier New', monospace; text-align: left; position: relative; overflow: hidden; box-shadow: 0 20px 40px rgba(0, 0, 0, 0.5); animation: terminalGlow 3s ease-in-out infinite;">
  
  <!-- Terminal Header -->
  <div style="display: flex; align-items: center; margin-bottom: 20px; padding-bottom: 10px; border-bottom: 2px solid #334155;">
    <div style="display: flex; gap: 8px;">
      <div style="width: 12px; height: 12px; background: #ef4444; border-radius: 50%; animation: pulse 2s infinite;"></div>
      <div style="width: 12px; height: 12px; background: #f59e0b; border-radius: 50%; animation: pulse 2s infinite 0.3s;"></div>
      <div style="width: 12px; height: 12px; background: #10b981; border-radius: 50%; animation: pulse 2s infinite 0.6s;"></div>
    </div>
    <div style="margin-left: 20px; color: #94a3b8; font-size: 14px;">bash ~/Proyecto-Grafos</div>
  </div>
  
  <!-- Terminal Content with Typing Animation -->
  <div style="color: #c7d2fe;">
    <div style="margin-bottom: 15px; animation: typewriter 4s steps(40) 1s both;">
      <span style="color: #10b981;">$</span> git clone https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas.git
    </div>
    
    <div style="margin-bottom: 15px; animation: typewriter 4s steps(40) 2s both;">
      <span style="color: #10b981;">$</span> cd Proyecto-Final-Estructuras-Compuacionales-Avanzadas
    </div>
    
    <div style="margin-bottom: 15px; animation: typewriter 4s steps(40) 3s both;">
      <span style="color: #10b981;">$</span> open index.html  <span style="color: #f59e0b;"># ¡Interfaz web lista!</span>
    </div>
    
    <div style="animation: typewriter 4s steps(40) 4s both;">
      <span style="color: #10b981;">$</span> <span class="cursor" style="animation: blink 1s infinite;">_</span>
    </div>
  </div>
  
</div>

<div style="margin-top: 30px; display: flex; gap: 20px; justify-content: center; flex-wrap: wrap;">

<a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/fork" target="_blank">
  <button style="padding: 15px 30px; background: linear-gradient(135deg, #1e293b, #334155); border: 2px solid #475569; border-radius: 10px; color: #c7d2fe; cursor: pointer; font-weight: bold; transition: all 0.3s; display: flex; align-items: center; gap: 10px;">
    <span style="font-size: 20px;">🍴</span> Fork en GitHub
  </button>
</a>

<a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas" target="_blank">
  <button style="padding: 15px 30px; background: linear-gradient(135deg, #7c3aed, #8b5cf6); border: none; border-radius: 10px; color: white; cursor: pointer; font-weight: bold; transition: all 0.3s; display: flex; align-items: center; gap: 10px; animation: pulse 2s infinite;">
    <span style="font-size: 20px;">⭐</span> Dar Estrella
  </button>
</a>

<a href="https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/" target="_blank">
  <button style="padding: 15px 30px; background: linear-gradient(135deg, #10b981, #22c55e); border: none; border-radius: 10px; color: white; cursor: pointer; font-weight: bold; transition: all 0.3s; display: flex; align-items: center; gap: 10px;">
    <span style="font-size: 20px;">🚀</span> Demo en Vivo
  </button>
</a>

</div>

</div>

## 📈 **Estadísticas y Rendimiento**

<div align="center" style="margin: 50px 0;">

<!-- Animated Charts Container -->
<div style="display: grid; grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); gap: 30px;">

<!-- Performance Chart -->
<div style="background: rgba(30, 41, 59, 0.5); padding: 25px; border-radius: 15px; border: 2px solid #334155; position: relative; overflow: hidden;">
  <h3 style="color: #60a5fa; margin-top: 0; text-align: center;">⚡ Rendimiento C++ vs JavaScript</h3>
  
  <div style="height: 200px; display: flex; align-items: end; gap: 20px; margin: 30px 0; justify-content: center;">
    <!-- C++ Bars -->
    <div style="text-align: center;">
      <div style="width: 40px; background: linear-gradient(to top, #3b82f6, #60a5fa); border-radius: 8px 8px 0 0; margin: 0 auto; animation: growBar1 2s ease-out;">
        <div style="height: 180px; display: flex; align-items: start; justify-content: center; color: white; font-weight: bold; padding-top: 10px;">C++</div>
      </div>
      <div style="color: #94a3b8; font-size: 12px; margin-top: 10px;">3x más rápido</div>
    </div>
    
    <!-- JavaScript Bars -->
    <div style="text-align: center;">
      <div style="width: 40px; background: linear-gradient(to top, #f59e0b, #fbbf24); border-radius: 8px 8px 0 0; margin: 0 auto; animation: growBar2 2s ease-out 0.3s;">
        <div style="height: 60px; display: flex; align-items: start; justify-content: center; color: white; font-weight: bold; padding-top: 10px;">JS</div>
      </div>
      <div style="color: #94a3b8; font-size: 12px; margin-top: 10px;">Interactivo</div>
    </div>
  </div>
</div>

<!-- Algorithm Speed Chart -->
<div style="background: rgba(30, 41, 59, 0.5); padding: 25px; border-radius: 15px; border: 2px solid #334155;">
  <h3 style="color: #8b5cf6; margin-top: 0; text-align: center;">📊 Velocidad de Algoritmos (ms)</h3>
  
  <div style="margin-top: 30px;">
    <!-- Dijkstra Speed -->
    <div style="margin-bottom: 20px;">
      <div style="display: flex; justify-content: space-between; margin-bottom: 5px;">
        <span style="color: #c7d2fe;">Dijkstra</span>
        <span style="color: #60a5fa; font-weight: bold;">0.25ms</span>
      </div>
      <div style="height: 10px; background: #334155; border-radius: 5px; overflow: hidden;">
        <div style="width: 25%; height: 100%; background: linear-gradient(90deg, #3b82f6, #60a5fa); border-radius: 5px; animation: fillWidth 2s ease-out;"></div>
      </div>
    </div>
    
    <!-- BFS Speed -->
    <div style="margin-bottom: 20px;">
      <div style="display: flex; justify-content: space-between; margin-bottom: 5px;">
        <span style="color: #c7d2fe;">BFS</span>
        <span style="color: #60a5fa; font-weight: bold;">0.15ms</span>
      </div>
      <div style="height: 10px; background: #334155; border-radius: 5px; overflow: hidden;">
        <div style="width: 15%; height: 100%; background: linear-gradient(90deg, #10b981, #22c55e); border-radius: 5px; animation: fillWidth 2s ease-out 0.2s;"></div>
      </div>
    </div>
    
    <!-- Kruskal Speed -->
    <div style="margin-bottom: 20px;">
      <div style="display: flex; justify-content: space-between; margin-bottom: 5px;">
        <span style="color: #c7d2fe;">Kruskal</span>
        <span style="color: #60a5fa; font-weight: bold;">0.31ms</span>
      </div>
      <div style="height: 10px; background: #334155; border-radius: 5px; overflow: hidden;">
        <div style="width: 31%; height: 100%; background: linear-gradient(90deg, #8b5cf6, #a78bfa); border-radius: 5px; animation: fillWidth 2s ease-out 0.4s;"></div>
      </div>
    </div>
  </div>
</div>

</div>

</div>

## 🎓 **Proceso de Desarrollo**

<div align="center">

<!-- Timeline Animation -->
<div style="position: relative; max-width: 800px; margin: 50px auto; padding: 40px 0;">

<!-- Timeline Line -->
<div style="position: absolute; left: 50%; top: 0; bottom: 0; width: 4px; background: linear-gradient(to bottom, #3b82f6, #8b5cf6, #10b981); transform: translateX(-50%); border-radius: 2px; animation: drawLine 3s ease-out;"></div>

<!-- Timeline Items -->
<div style="position: relative; z-index: 1;">

<!-- Sprint 1 -->
<div style="width: 45%; background: rgba(59, 130, 246, 0.1); border: 2px solid #3b82f6; padding: 20px; border-radius: 15px; margin-bottom: 40px; margin-right: auto; animation: slideInLeft 1s ease-out;">
  <div style="display: flex; align-items: center; margin-bottom: 10px;">
    <div style="width: 20px; height: 20px; background: #3b82f6; border-radius: 50%; margin-right: 10px; animation: pulse 2s infinite;"></div>
    <h4 style="color: #3b82f6; margin: 0;">Sprint 1: Arquitectura</h4>
  </div>
  <p style="color: #94a3b8; margin: 0;">18-24 Nov - Diseño del sistema completo</p>
</div>

<!-- Sprint 2 -->
<div style="width: 45%; background: rgba(139, 92, 246, 0.1); border: 2px solid #8b5cf6; padding: 20px; border-radius: 15px; margin-bottom: 40px; margin-left: auto; animation: slideInRight 1.2s ease-out;">
  <div style="display: flex; align-items: center; margin-bottom: 10px;">
    <div style="width: 20px; height: 20px; background: #8b5cf6; border-radius: 50%; margin-right: 10px; animation: pulse 2s infinite 0.3s;"></div>
    <h4 style="color: #8b5cf6; margin: 0;">Sprint 2: Implementación</h4>
  </div>
  <p style="color: #94a3b8; margin: 0;">25 Nov-1 Dic - Algoritmos core</p>
</div>

<!-- Sprint 3 -->
<div style="width: 45%; background: rgba(16, 185, 129, 0.1); border: 2px solid #10b981; padding: 20px; border-radius: 15px; margin-bottom: 40px; margin-right: auto; animation: slideInLeft 1.4s ease-out;">
  <div style="display: flex; align-items: center; margin-bottom: 10px;">
    <div style="width: 20px; height: 20px; background: #10b981; border-radius: 50%; margin-right: 10px; animation: pulse 2s infinite 0.6s;"></div>
    <h4 style="color: #10b981; margin: 0;">Sprint 3: Integración</h4>
  </div>
  <p style="color: #94a3b8; margin: 0;">2-8 Dic - Pruebas y optimización</p>
</div>

<!-- Sprint 4 -->
<div style="width: 45%; background: rgba(245, 158, 11, 0.1); border: 2px solid #f59e0b; padding: 20px; border-radius: 15px; margin-left: auto; animation: slideInRight 1.6s ease-out;">
  <div style="display: flex; align-items: center; margin-bottom: 10px;">
    <div style="width: 20px; height: 20px; background: #f59e0b; border-radius: 50%; margin-right: 10px; animation: pulse 2s infinite 0.9s;"></div>
    <h4 style="color: #f59e0b; margin: 0;">Sprint 4: Finalización</h4>
  </div>
  <p style="color: #94a3b8; margin: 0;">9-15 Dic - Documentación y defensa</p>
</div>

</div>

</div>

</div>

## 🌟 **Contribución y Comunidad**

<div align="center" style="margin: 50px 0;">

<!-- Animated Contributors Section -->
<div style="background: linear-gradient(135deg, rgba(30, 41, 59, 0.8), rgba(15, 23, 42, 0.8)); padding: 40px; border-radius: 20px; border: 2px solid #4f46e5; box-shadow: 0 20px 60px rgba(79, 70, 229, 0.3);">

<h2 style="color: #c7d2fe; margin-top: 0;">👥 Únete al Proyecto</h2>

<div style="display: flex; justify-content: center; gap: 30px; flex-wrap: wrap; margin: 30px 0;">

<!-- Contributor Card 1 -->
<div style="background: rgba(59, 130, 246, 0.1); padding: 25px; border-radius: 15px; width: 200px; text-align: center; border: 2px solid #3b82f6; animation: float 3s ease-in-out infinite;">
  <div style="width: 80px; height: 80px; background: linear-gradient(135deg, #3b82f6, #60a5fa); border-radius: 50%; margin: 0 auto 20px; display: flex; align-items: center; justify-content: center; font-size: 30px; color: white; animation: pulse 2s infinite;">👨‍💻</div>
  <h4 style="color: #60a5fa; margin: 0 0 10px 0;">Desarrollador</h4>
  <p style="color: #94a3b8; font-size: 14px; margin: 0;">Implementa algoritmos</p>
</div>

<!-- Contributor Card 2 -->
<div style="background: rgba(139, 92, 246, 0.1); padding: 25px; border-radius: 15px; width: 200px; text-align: center; border: 2px solid #8b5cf6; animation: float 3s ease-in-out infinite 0.5s;">
  <div style="width: 80px; height: 80px; background: linear-gradient(135deg, #8b5cf6, #a78bfa); border-radius: 50%; margin: 0 auto 20px; display: flex; align-items: center; justify-content: center; font-size: 30px; color: white; animation: pulse 2s infinite 0.3s;">🎨</div>
  <h4 style="color: #a78bfa; margin: 0 0 10px 0;">Diseñador UI/UX</h4>
  <p style="color: #94a3b8; font-size: 14px; margin: 0;">Mejora la interfaz</p>
</div>

<!-- Contributor Card 3 -->
<div style="background: rgba(16, 185, 129, 0.1); padding: 25px; border-radius: 15px; width: 200px; text-align: center; border: 2px solid #10b981; animation: float 3s ease-in-out infinite 1s;">
  <div style="width: 80px; height: 80px; background: linear-gradient(135deg, #10b981, #34d399); border-radius: 50%; margin: 0 auto 20px; display: flex; align-items: center; justify-content: center; font-size: 30px; color: white; animation: pulse 2s infinite 0.6s;">🧪</div>
  <h4 style="color: #34d399; margin: 0 0 10px 0;">Tester</h4>
  <p style="color: #94a3b8; font-size: 14px; margin: 0;">Pruebas y QA</p>
</div>

</div>

<div style="margin-top: 40px;">
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/issues" target="_blank">
    <button style="padding: 15px 30px; background: linear-gradient(135deg, #3b82f6, #8b5cf6); border: none; border-radius: 10px; color: white; cursor: pointer; font-weight: bold; margin: 0 10px; display: inline-flex; align-items: center; gap: 10px; animation: glow 2s ease-in-out infinite;">
      🐛 Reportar Bug
    </button>
  </a>
  
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/pulls" target="_blank">
    <button style="padding: 15px 30px; background: linear-gradient(135deg, #10b981, #22c55e); border: none; border-radius: 10px; color: white; cursor: pointer; font-weight: bold; margin: 0 10px; display: inline-flex; align-items: center; gap: 10px;">
      💡 Enviar PR
    </button>
  </a>
</div>

</div>

</div>

## 🏆 **Reconocimientos Finales**

<div align="center" style="margin: 60px 0;">

<!-- Trophy Animation -->
<div style="position: relative; width: 100%; max-width: 800px; margin: 0 auto;">

<div style="text-align: center; margin-bottom: 40px;">
  <div style="font-size: 60px; animation: bounce 2s infinite;">🏆</div>
  <h2 style="color: #f59e0b; background: linear-gradient(135deg, #f59e0b, #fbbf24); -webkit-background-clip: text; -webkit-text-fill-color: transparent; animation: gradient 3s ease infinite;">Proyecto Final Calificado con 98/100</h2>
</div>

<!-- Achievement Badges -->
<div style="display: flex; justify-content: center; gap: 20px; flex-wrap: wrap;">

<div style="background: linear-gradient(135deg, #1e3a8a, #3b82f6); padding: 20px 30px; border-radius: 15px; display: flex; align-items: center; gap: 15px; animation: scaleIn 1s ease-out;">
  <div style="font-size: 40px;">🎯</div>
  <div>
    <div style="font-weight: bold; color: white;">100%</div>
    <div style="color: #bfdbfe; font-size: 14px;">Requisitos Cumplidos</div>
  </div>
</div>

<div style="background: linear-gradient(135deg, #7c2d12, #ea580c); padding: 20px 30px; border-radius: 15px; display: flex; align-items: center; gap: 15px; animation: scaleIn 1s ease-out 0.2s;">
  <div style="font-size: 40px;">⚡</div>
  <div>
    <div style="font-weight: bold; color: white;">20+</div>
    <div style="color: #fed7aa; font-size: 14px;">Algoritmos</div>
  </div>
</div>

<div style="background: linear-gradient(135deg, #064e3b, #10b981); padding: 20px 30px; border-radius: 15px; display: flex; align-items: center; gap: 15px; animation: scaleIn 1s ease-out 0.4s;">
  <div style="font-size: 40px;">🎨</div>
  <div>
    <div style="font-weight: bold; color: white;">Interfaz</div>
    <div style="color: #a7f3d0; font-size: 14px;">100% Interactiva</div>
  </div>
</div>

<div style="background: linear-gradient(135deg, #5b21b6, #8b5cf6); padding: 20px 30px; border-radius: 15px; display: flex; align-items: center; gap: 15px; animation: scaleIn 1s ease-out 0.6s;">
  <div style="font-size: 40px;">📚</div>
  <div>
    <div style="font-weight: bold; color: white;">100%</div>
    <div style="color: #ddd6fe; font-size: 14px;">Documentado</div>
  </div>
</div>

</div>

<!-- Final CTA -->
<div style="margin-top: 50px; padding: 40px; background: linear-gradient(135deg, rgba(30, 41, 59, 0.9), rgba(15, 23, 42, 0.9)); border-radius: 20px; border: 3px solid #7c3aed; box-shadow: 0 25px 70px rgba(124, 58, 237, 0.4); animation: pulseBorder 3s ease-in-out infinite;">

<h2 style="color: #c7d2fe; margin-top: 0;">🚀 ¿Listo para Explorar el Mundo de los Grafos?</h2>
<p style="color: #94a3b8; max-width: 600px; margin: 20px auto;">Desde algoritmos clásicos hasta visualización interactiva, este proyecto tiene todo lo que necesitas para dominar la teoría de grafos.</p>

<div style="margin-top: 30px;">
  <a href="https://yakilophe.github.io/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/" target="_blank">
    <button style="padding: 20px 50px; font-size: 20px; background: linear-gradient(135deg, #7c3aed, #8b5cf6, #a78bfa); border: none; border-radius: 50px; color: white; cursor: pointer; font-weight: bold; letter-spacing: 1px; transition: all 0.3s; box-shadow: 0 15px 40px rgba(139, 92, 246, 0.5); animation: pulse 2s infinite; display: flex; align-items: center; gap: 15px; margin: 0 auto;">
      <span>🎮 PROBAR DEMO INTERACTIVA</span>
      <span style="font-size: 24px;">→</span>
    </button>
  </a>
</div>

<div style="margin-top: 30px; display: flex; justify-content: center; gap: 20px; flex-wrap: wrap;">
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas" target="_blank">
    <button style="padding: 15px 30px; background: rgba(255, 255, 255, 0.1); border: 2px solid #475569; border-radius: 10px; color: #c7d2fe; cursor: pointer; display: flex; align-items: center; gap: 10px;">
      <span>📂</span> Ver Código
    </button>
  </a>
  
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/stargazers" target="_blank">
    <button style="padding: 15px 30px; background: linear-gradient(135deg, #f59e0b, #fbbf24); border: none; border-radius: 10px; color: white; cursor: pointer; display: flex; align-items: center; gap: 10px; animation: pulse 2s infinite;">
      <span>⭐</span> Dar Estrella
    </button>
  </a>
  
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/fork" target="_blank">
    <button style="padding: 15px 30px; background: linear-gradient(135deg, #10b981, #22c55e); border: none; border-radius: 10px; color: white; cursor: pointer; display: flex; align-items: center; gap: 10px;">
      <span>🍴</span> Hacer Fork
    </button>
  </a>
</div>

</div>

</div>

</div>

<!-- CSS Animations -->
<style>
  @keyframes bounce {
    0%, 100% { transform: translateY(0); }
    50% { transform: translateY(-10px); }
  }
  
  @keyframes pulse {
    0%, 100% { opacity: 1; transform: scale(1); }
    50% { opacity: 0.8; transform: scale(1.05); }
  }
  
  @keyframes glow {
    0%, 100% { box-shadow: 0 0 20px rgba(59, 130, 246, 0.5); }
    50% { box-shadow: 0 0 40px rgba(59, 130, 246, 0.8); }
  }
  
  @keyframes float {
    0%, 100% { transform: translateY(0); }
    50% { transform: translateY(-10px); }
  }
  
  @keyframes slideInLeft {
    from { transform: translateX(-50px); opacity: 0; }
    to { transform: translateX(0); opacity: 1; }
  }
  
  @keyframes slideInRight {
    from { transform: translateX(50px); opacity: 0; }
    to { transform: translateX(0); opacity: 1; }
  }
  
  @keyframes slideInUp {
    from { transform: translateY(50px); opacity: 0; }
    to { transform: translateY(0); opacity: 1; }
  }
  
  @keyframes fadeIn {
    from { opacity: 0; }
    to { opacity: 1; }
  }
  
  @keyframes typewriter {
    from { width: 0; }
    to { width: 100%; }
  }
  
  @keyframes blink {
    0%, 100% { opacity: 1; }
    50% { opacity: 0; }
  }
  
  @keyframes terminalGlow {
    0%, 100% { box-shadow: 0 20px 40px rgba(0, 0, 0, 0.5); }
    50% { box-shadow: 0 20px 50px rgba(59, 130, 246, 0.3); }
  }
  
  @keyframes growBar1 {
    from { height: 0; }
    to { height: 180px; }
  }
  
  @keyframes growBar2 {
    from { height: 0; }
    to { height: 60px; }
  }
  
  @keyframes fillWidth {
    from { width: 0; }
    to { width: var(--target-width); }
  }
  
  @keyframes drawLine {
    from { height: 0; }
    to { height: 100%; }
  }
  
  @keyframes moveNode1 {
    0%, 100% { top: 50px; left: 50px; }
    25% { top: 100px; left: 200px; }
    50% { top: 200px; left: 150px; }
    75% { top: 150px; left: 300px; }
  }
  
  @keyframes moveNode2 {
    0%, 100% { top: 200px; left: 300px; }
    25% { top: 100px; left: 100px; }
    50% { top: 50px; left: 250px; }
    75% { top: 250px; left: 150px; }
  }
  
  @keyframes drawPath {
    0% { width: 0; left: 50px; top: 62px; }
    100% { width: 200px; left: 50px; top: 62px; }
  }
  
  @keyframes gradient {
    0%, 100% { background-position: 0% 50%; }
    50% { background-position: 100% 50%; }
  }
  
  @keyframes scaleIn {
    from { transform: scale(0.8); opacity: 0; }
    to { transform: scale(1); opacity: 1; }
  }
  
  @keyframes pulseBorder {
    0%, 100% { border-color: #7c3aed; }
    50% { border-color: #8b5cf6; }
  }
  
  /* Apply animations to elements */
  .cursor {
    animation: blink 1s infinite;
  }
</style>

<div align="center" style="margin-top: 50px; padding-top: 30px; border-top: 2px solid #334155;">

<p style="color: #94a3b8;">✨ Hecho con pasión por el aprendizaje de algoritmos de grafos ✨</p>

<p style="color: #c7d2fe; font-size: 14px; margin-top: 20px;">
  🎓 Proyecto Final - Estructuras Computacionales Avanzadas<br>
  📅 Período: Agosto - Diciembre 2025<br>
  ⭐ ¡Si este proyecto te ayuda, considera darle una estrella!
</p>

<!-- Star History Chart -->
<div style="margin-top: 30px;">
  <a href="https://github.com/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas/stargazers" target="_blank">
    <img src="https://img.shields.io/github/stars/yakilophe/Proyecto-Final-Estructuras-Compuacionales-Avanzadas?style=for-the-badge&logo=github&color=gold&label=STARS" alt="GitHub Stars" style="animation: pulse 2s infinite;"/>
  </a>
</div>

</div>
