# Representación de Grafos: Matrices y Listas

<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
<style>
    * {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
        font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    }
    
    body {
        background: linear-gradient(135deg, #0f172a 0%, #1e293b 100%);
        color: #e2e8f0;
        line-height: 1.6;
        padding: 20px;
        min-height: 100vh;
    }
    
    .container {
        max-width: 1200px;
        margin: 0 auto;
        padding: 20px;
    }
    
    header {
        text-align: center;
        margin-bottom: 40px;
        padding: 30px;
        background: rgba(30, 41, 59, 0.7);
        border-radius: 15px;
        box-shadow: 0 10px 30px rgba(0, 0, 0, 0.3);
        border: 1px solid rgba(100, 116, 139, 0.3);
        animation: fadeIn 1s ease-out;
    }
    
    h1 {
        font-size: 2.8rem;
        margin-bottom: 15px;
        background: linear-gradient(90deg, #38bdf8, #818cf8);
        -webkit-background-clip: text;
        background-clip: text;
        color: transparent;
        position: relative;
        display: inline-block;
    }
    
    h1:after {
        content: '';
        position: absolute;
        width: 100%;
        height: 4px;
        background: linear-gradient(90deg, #38bdf8, #818cf8);
        bottom: -5px;
        left: 0;
        border-radius: 2px;
    }
    
    .intro {
        font-size: 1.2rem;
        max-width: 800px;
        margin: 0 auto;
        opacity: 0.9;
    }
    
    .representation-container {
        display: grid;
        grid-template-columns: repeat(auto-fit, minmax(350px, 1fr));
        gap: 30px;
        margin-bottom: 50px;
    }
    
    .card {
        background: rgba(30, 41, 59, 0.7);
        border-radius: 15px;
        padding: 25px;
        box-shadow: 0 8px 25px rgba(0, 0, 0, 0.2);
        border: 1px solid rgba(100, 116, 139, 0.3);
        transition: transform 0.3s ease, box-shadow 0.3s ease;
        overflow: hidden;
        position: relative;
    }
    
    .card:hover {
        transform: translateY(-10px);
        box-shadow: 0 15px 35px rgba(0, 0, 0, 0.3);
    }
    
    .card-title {
        font-size: 1.6rem;
        margin-bottom: 20px;
        color: #38bdf8;
        display: flex;
        align-items: center;
        gap: 10px;
    }
    
    .card-title i {
        font-size: 1.4rem;
    }
    
    .code-block {
        background: #1e293b;
        border-radius: 10px;
        padding: 20px;
        margin: 20px 0;
        font-family: 'Courier New', monospace;
        font-size: 0.95rem;
        overflow-x: auto;
        border-left: 4px solid #38bdf8;
        position: relative;
    }
    
    .characteristics {
        margin: 20px 0;
    }
    
    .char-item {
        padding: 10px 0;
        border-bottom: 1px dashed rgba(100, 116, 139, 0.3);
        display: flex;
        justify-content: space-between;
    }
    
    .char-item:last-child {
        border-bottom: none;
    }
    
    .char-label {
        font-weight: 600;
        color: #cbd5e1;
    }
    
    .char-value {
        color: #38bdf8;
    }
    
    .comparison-section {
        background: rgba(30, 41, 59, 0.7);
        border-radius: 15px;
        padding: 30px;
        margin: 40px 0;
        box-shadow: 0 8px 25px rgba(0, 0, 0, 0.2);
        border: 1px solid rgba(100, 116, 139, 0.3);
        animation: fadeInUp 1s ease-out;
    }
    
    .comparison-title {
        font-size: 1.8rem;
        margin-bottom: 25px;
        color: #38bdf8;
        text-align: center;
    }
    
    .comparison-visual {
        display: flex;
        justify-content: space-around;
        align-items: center;
        flex-wrap: wrap;
        gap: 20px;
        margin-top: 30px;
    }
    
    .arrow {
        font-size: 2rem;
        color: #818cf8;
        animation: pulse 2s infinite;
    }
    
    .density-level {
        background: rgba(30, 41, 59, 0.9);
        padding: 20px;
        border-radius: 10px;
        text-align: center;
        min-width: 200px;
        border: 1px solid rgba(100, 116, 139, 0.3);
        transition: all 0.3s ease;
    }
    
    .density-level:hover {
        background: rgba(56, 189, 248, 0.1);
        transform: scale(1.05);
    }
    
    .density-name {
        font-size: 1.3rem;
        font-weight: 600;
        margin-bottom: 10px;
        color: #f8fafc;
    }
    
    .density-recommendation {
        color: #38bdf8;
        font-weight: 600;
    }
    
    table {
        width: 100%;
        border-collapse: collapse;
        margin: 30px 0;
        border-radius: 10px;
        overflow: hidden;
        box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
    }
    
    th {
        background: #38bdf8;
        color: #0f172a;
        padding: 18px;
        text-align: left;
        font-weight: 600;
    }
    
    td {
        padding: 16px;
        border-bottom: 1px solid rgba(100, 116, 139, 0.3);
    }
    
    tr:nth-child(even) {
        background: rgba(30, 41, 59, 0.5);
    }
    
    tr:hover {
        background: rgba(56, 189, 248, 0.1);
    }
    
    footer {
        text-align: center;
        margin-top: 50px;
        padding: 25px;
        border-top: 1px solid rgba(100, 116, 139, 0.3);
        color: #94a3b8;
        font-size: 0.9rem;
    }
    
    .highlight {
        color: #38bdf8;
        font-weight: 600;
    }
    
    @keyframes fadeIn {
        from { opacity: 0; transform: translateY(-20px); }
        to { opacity: 1; transform: translateY(0); }
    }
    
    @keyframes fadeInUp {
        from { opacity: 0; transform: translateY(30px); }
        to { opacity: 1; transform: translateY(0); }
    }
    
    @keyframes pulse {
        0% { opacity: 0.6; }
        50% { opacity: 1; }
        100% { opacity: 0.6; }
    }
    
    .graph-animation {
        height: 200px;
        background: rgba(15, 23, 42, 0.7);
        border-radius: 10px;
        margin: 30px 0;
        position: relative;
        overflow: hidden;
        border: 1px solid rgba(100, 116, 139, 0.3);
    }
    
    .node {
        position: absolute;
        width: 30px;
        height: 30px;
        background: #38bdf8;
        border-radius: 50%;
        display: flex;
        align-items: center;
        justify-content: center;
        color: #0f172a;
        font-weight: bold;
        box-shadow: 0 0 15px rgba(56, 189, 248, 0.7);
        z-index: 10;
    }
    
    .edge {
        position: absolute;
        height: 3px;
        background: #818cf8;
        transform-origin: 0 0;
        z-index: 5;
    }
    
    .pulse-circle {
        position: absolute;
        width: 30px;
        height: 30px;
        border-radius: 50%;
        border: 2px solid #38bdf8;
        animation: ripple 2s infinite;
    }
    
    @keyframes ripple {
        0% { transform: scale(0.8); opacity: 1; }
        100% { transform: scale(2.5); opacity: 0; }
    }
    
    @media (max-width: 768px) {
        .representation-container {
            grid-template-columns: 1fr;
        }
        
        h1 {
            font-size: 2.2rem;
        }
        
        .comparison-visual {
            flex-direction: column;
        }
        
        .arrow {
            transform: rotate(90deg);
        }
    }
</style>

<div class="container">
    <header>
        <h1>Representación de Grafos</h1>
        <p class="intro">Los grafos son estructuras fundamentales en ciencia de computación, utilizados para modelar relaciones entre objetos. Su representación eficiente es crucial para el rendimiento de algoritmos.</p>
    </header>

    <section class="representation-container">
        <div class="card">
            <h2 class="card-title"><i class="fas fa-th"></i> Matriz de Adyacencia</h2>
            <p>Una matriz cuadrada donde cada celda [i][j] indica la existencia (y peso) de una arista entre los vértices i y j.</p>
            
            <div class="code-block">
                <pre># Grafo no dirigido con 4 vértices

    0  1  2  3
0  [0, 1, 0, 1]
1  [1, 0, 1, 0]
2  [0, 1, 0, 1]
3  [1, 0, 1, 0]</pre>
            </div>
            
            <div class="characteristics">
                <div class="char-item">
                    <span class="char-label">Ventajas</span>
                    <span class="char-value">Consulta O(1)</span>
                </div>
                <div class="char-item">
                    <span class="char-label">Desventajas</span>
                    <span class="char-value">Espacio O(V²)</span>
                </div>
                <div class="char-item">
                    <span class="char-label">Ideal para</span>
                    <span class="char-value">Grafos densos</span>
                </div>
            </div>
        </div>
        
        <div class="card">
            <h2 class="card-title"><i class="fas fa-list"></i> Lista de Adyacencia</h2>
            <p>Cada vértice mantiene una lista de sus vecinos directos, optimizando el espacio para grafos dispersos.</p>
            
            <div class="code-block">
                <pre># Mismo grafo como lista de adyacencia

0: [1, 3]
1: [0, 2]
2: [1, 3]
3: [0, 2]</pre>
            </div>
            
            <div class="characteristics">
                <div class="char-item">
                    <span class="char-label">Ventajas</span>
                    <span class="char-value">Espacio O(V + E)</span>
                </div>
                <div class="char-item">
                    <span class="char-label">Desventajas</span>
                    <span class="char-value">Consulta O(deg(v))</span>
                </div>
                <div class="char-item">
                    <span class="char-label">Ideal para</span>
                    <span class="char-value">Grafos dispersos</span>
                </div>
            </div>
        </div>
        
        <div class="card">
            <h2 class="card-title"><i class="fas fa-project-diagram"></i> Matriz de Incidencia</h2>
            <p>Matriz V × E donde cada fila representa un vértice y cada columna una arista del grafo.</p>
            
            <div class="code-block">
                <pre># Vértices: 0,1,2,3 
# Aristas: (0,1), (1,2), (2,3), (3,0)

   e1 e2 e3 e4
0 [ 1, 0, 0, 1 ]
1 [ 1, 1, 0, 0 ]
2 [ 0, 1, 1, 0 ]
3 [ 0, 0, 1, 1 ]</pre>
            </div>
            
            <div class="characteristics">
                <div class="char-item">
                    <span class="char-label">Ventajas</span>
                    <span class="char-value">Múltiples aristas</span>
                </div>
                <div class="char-item">
                    <span class="char-label">Desventajas</span>
                    <span class="char-value">Espacio O(V × E)</span>
                </div>
                <div class="char-item">
                    <span class="char-label">Ideal para</span>
                    <span class="char-value">Multigrafos</span>
                </div>
            </div>
        </div>
    </section>

    <section class="comparison-section">
        <h2 class="comparison-title">Comparación Visual</h2>
        
        <div class="graph-animation" id="graphAnimation">
            <!-- Los nodos y aristas se generan con JavaScript -->
        </div>
        
        <div class="comparison-visual">
            <div class="density-level">
                <div class="density-name">Baja Densidad</div>
                <div class="arrow"><i class="fas fa-arrow-right"></i></div>
                <div class="density-recommendation">Lista de Adyacencia</div>
            </div>
            
            <div class="density-level">
                <div class="density-name">Media/Alta Densidad</div>
                <div class="arrow"><i class="fas fa-arrow-right"></i></div>
                <div class="density-recommendation">Matriz de Adyacencia</div>
            </div>
            
            <div class="density-level">
                <div class="density-name">Multigrafo</div>
                <div class="arrow"><i class="fas fa-arrow-right"></i></div>
                <div class="density-recommendation">Matriz de Incidencia</div>
            </div>
        </div>
    </section>

    <section>
        <h2 class="comparison-title">Aplicaciones Prácticas</h2>
        
        <table>
            <thead>
                <tr>
                    <th>Representación</th>
                    <th>Casos de Uso Típicos</th>
                    <th>Complejidad Espacial</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">Matriz de Adyacencia</span></td>
                    <td>Algoritmos Floyd-Warshall, grafos pequeños y densos</td>
                    <td>O(V²)</td>
                </tr>
                <tr>
                    <td><span class="highlight">Lista de Adyacencia</span></td>
                    <td>BFS/DFS, grafos de redes sociales, recorridos</td>
                    <td>O(V + E)</td>
                </tr>
                <tr>
                    <td><span class="highlight">Matriz de Incidencia</span></td>
                    <td>Teoría de grafos, análisis de circuitos, multigrafos</td>
                    <td>O(V × E)</td>
                </tr>
            </tbody>
        </table>
    </section>

    <footer>
        <p>Cada representación transforma la misma estructura de grafo, optimizando diferentes operaciones según las necesidades del algoritmo.</p>
        <p><span class="highlight">Nota:</span> La elección de representación impacta directamente en la eficiencia temporal y espacial de tus algoritmos gráficos.</p>
        <p style="margin-top: 15px;">Explora cada implementación en los archivos correspondientes para ver ejemplos de código y análisis de complejidad detallados.</p>
    </footer>
</div>

<script>
    document.addEventListener('DOMContentLoaded', function() {
        // Crear animación del grafo
        const graphAnimation = document.getElementById('graphAnimation');
        const nodes = [];
        const edges = [];
        
        // Posiciones de los nodos en un círculo
        const centerX = graphAnimation.offsetWidth / 2;
        const centerY = graphAnimation.offsetHeight / 2;
        const radius = 70;
        const nodeCount = 5;
        
        // Crear nodos
        for (let i = 0; i < nodeCount; i++) {
            const angle = (i / nodeCount) * 2 * Math.PI;
            const x = centerX + radius * Math.cos(angle);
            const y = centerY + radius * Math.sin(angle);
            
            const node = document.createElement('div');
            node.className = 'node';
            node.textContent = i;
            node.style.left = `${x}px`;
            node.style.top = `${y}px`;
            
            // Agregar efecto de pulso a algunos nodos
            if (i === 0 || i === 2) {
                const pulse = document.createElement('div');
                pulse.className = 'pulse-circle';
                pulse.style.left = '0px';
                pulse.style.top = '0px';
                node.appendChild(pulse);
            }
            
            graphAnimation.appendChild(node);
            nodes.push({element: node, x: x, y: y});
            
            // Animar nodos
            setTimeout(() => {
                node.style.transition = 'all 0.5s ease';
                node.style.transform = 'scale(1.2)';
                setTimeout(() => {
                    node.style.transform = 'scale(1)';
                }, 500);
            }, i * 300);
        }
        
        // Crear aristas (conexiones entre nodos)
        const connections = [
            [0, 1], [1, 2], [2, 3], [3, 4], [4, 0], [0, 2]
        ];
        
        connections.forEach((conn, index) => {
            const nodeA = nodes[conn[0]];
            const nodeB = nodes[conn[1]];
            
            const length = Math.sqrt(
                Math.pow(nodeB.x - nodeA.x, 2) + 
                Math.pow(nodeB.y - nodeA.y, 2)
            );
            
            const angle = Math.atan2(nodeB.y - nodeA.y, nodeB.x - nodeA.x) * 180 / Math.PI;
            
            const edge = document.createElement('div');
            edge.className = 'edge';
            edge.style.width = `${length}px`;
            edge.style.left = `${nodeA.x + 15}px`;
            edge.style.top = `${nodeA.y + 15}px`;
            edge.style.transform = `rotate(${angle}deg)`;
            edge.style.opacity = '0';
            
            graphAnimation.appendChild(edge);
            edges.push(edge);
            
            // Animar aparición de aristas
            setTimeout(() => {
                edge.style.transition = 'opacity 0.8s ease';
                edge.style.opacity = '0.7';
            }, 1500 + index * 200);
        });
        
        // Animar las aristas intermitentemente
        let currentEdge = 0;
        setInterval(() => {
            edges.forEach(edge => {
                edge.style.opacity = '0.7';
                edge.style.background = '#818cf8';
            });
            
            edges[currentEdge].style.opacity = '1';
            edges[currentEdge].style.background = '#38bdf8';
            
            currentEdge = (currentEdge + 1) % edges.length;
        }, 1500);
        
        // Efecto hover en las tarjetas
        const cards = document.querySelectorAll('.card');
        cards.forEach(card => {
            card.addEventListener('mouseenter', function() {
                const codeBlock = this.querySelector('.code-block');
                if (codeBlock) {
                    codeBlock.style.transform = 'translateX(5px)';
                    codeBlock.style.transition = 'transform 0.3s ease';
                }
            });
            
            card.addEventListener('mouseleave', function() {
                const codeBlock = this.querySelector('.code-block');
                if (codeBlock) {
                    codeBlock.style.transform = 'translateX(0)';
                }
            });
        });
        
        // Efecto de escritura en el título
        const title = document.querySelector('h1');
        const originalText = title.textContent;
        title.textContent = '';
        
        let i = 0;
        const typeWriter = () => {
            if (i < originalText.length) {
                title.textContent += originalText.charAt(i);
                i++;
                setTimeout(typeWriter, 50);
            }
        };
        
        // Iniciar efecto de escritura después de un breve retraso
        setTimeout(typeWriter, 500);
    });
    
    // Efecto de parallax en scroll
    window.addEventListener('scroll', function() {
        const scrolled = window.pageYOffset;
        const cards = document.querySelectorAll('.card');
        
        cards.forEach((card, index) => {
            const rate = scrolled * 0.05 - (index * 20);
            card.style.transform = `translateY(${rate}px)`;
        });
    });
</script>
