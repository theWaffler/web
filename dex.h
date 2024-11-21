<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>theWaffler's Card</title>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/js/all.min.js"></script>
    <style>
        @font-face {
            font-family: 'CustomFont';
            src: url('fonts/jbm.ttf') format('truetype');
            font-weight: normal;
            font-style: normal;
        }

        body {
            margin: 0;
            padding: 20px;
            min-height: 100vh;
            display: flex;
            justify-content: center;
            align-items: center;
            background: #1a1a1a;
            font-family: 'CustomFont', sans-serif;
            perspective: 1000px;
        }

        .card {
            width: 350px;
            height: 500px;
            position: relative;
            transform-style: preserve-3d;
            transition: transform 0.5s ease;
            cursor: pointer;
        }

        .card:hover {
            transform: rotateY(5deg) rotateX(5deg);
        }

        .card-inner {
            position: relative;
            width: 100%;
            height: 100%;
            border-radius: 20px;
            background: linear-gradient(45deg, #832e1c, #a23b23);
            padding: 15px;
            box-shadow: 
                0 0 10px rgba(0,0,0,0.5),
                0 0 20px rgba(255,165,0,0.3),
                inset 0 0 20px rgba(0,0,0,0.2);
        }

        .card-frame {
            border: 8px solid #473127;
            border-radius: 15px;
            height: calc(100% - 16px);
            background: #000;
            position: relative;
            overflow: hidden;
        }

        .title-bar {
            background: #473127;
            padding: 10px;
            color: #e6d5b8;
            display: flex;
            justify-content: space-between;
            align-items: center;
            font-size: 1.2em;
        }

        .mana-cost {
            display: flex;
            gap: 5px;
        }

        .mana-symbol {
            width: 25px;
            height: 25px;
            background: #1a1a1a;
            border-radius: 50%;
            display: flex;
            justify-content: center;
            align-items: center;
            color: #fff;
            font-size: 0.8em;
            border: 2px solid #e6d5b8;
        }

        .art-box {
            height: 45%;
            background: #2c2c2c;
            position: relative;
            overflow: hidden;
            display: flex;
            justify-content: center;
            align-items: center;
        }

        .profile-pic {
            font-size: 72px;
            animation: float 3s ease-in-out infinite;
        }

        .type-line {
            background: #473127;
            padding: 8px;
            color: #e6d5b8;
            font-size: 0.9em;
            border-top: 2px solid #000;
            border-bottom: 2px solid #000;
        }

        .text-box {
            padding: 15px;
            color: #e6d5b8;
            font-size: 0.9em;
            background: url('/api/placeholder/350/150') center/cover;
            height: 30%;
            position: relative;
        }

        .text-box::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            right: 0;
            bottom: 0;
            background: rgba(0,0,0,0.7);
        }

        .text-content {
            position: relative;
            z-index: 1;
        }

        .github-link {
            display: flex;
            align-items: center;
            gap: 10px;
            color: #e6d5b8;
            text-decoration: none;
            margin-top: 15px;
            padding: 8px;
            background: rgba(71, 49, 39, 0.8);
            border-radius: 5px;
            transition: all 0.3s ease;
        }

        .github-link:hover {
            background: rgba(71, 49, 39, 1);
            transform: scale(1.05);
        }

        .power-toughness {
            position: absolute;
            bottom: 10px;
            right: 10px;
            background: #473127;
            padding: 5px 10px;
            border-radius: 5px;
            color: #e6d5b8;
            font-weight: bold;
            z-index: 2;
        }

        .card::before {
            content: '';
            position: absolute;
            top: -5px;
            left: -5px;
            right: -5px;
            bottom: -5px;
            background: linear-gradient(45deg, #ffd700, #ff6b6b, #4d4dff);
            border-radius: 25px;
            z-index: -1;
            opacity: 0;
            transition: opacity 0.3s ease;
        }

        .card:hover::before {
            opacity: 1;
            animation: borderGlow 3s linear infinite;
        }

        @keyframes borderGlow {
            0% { filter: hue-rotate(0deg); }
            100% { filter: hue-rotate(360deg); }
        }

        @keyframes float {
            0%, 100% { transform: translateY(0); }
            50% { transform: translateY(-10px); }
        }

        .magical-sparkles {
            position: absolute;
            width: 100%;
            height: 100%;
            pointer-events: none;
        }

        .sparkle {
            position: absolute;
            width: 3px;
            height: 3px;
            background: white;
            border-radius: 50%;
            animation: sparkle 1.5s linear infinite;
            opacity: 0;
        }

        @keyframes sparkle {
            0% { transform: translate(0, 0) scale(0); opacity: 0; }
            50% { opacity: 1; }
            100% { transform: translate(var(--tx), var(--ty)) scale(1); opacity: 0; }
        }
    </style>
</head>
<body>
    <div class="card">
        <div class="magical-sparkles"></div>
        <div class="card-inner">
            <div class="card-frame">
                <div class="title-bar">
                    <span>theWaffler</span>
                    <div class="mana-cost">
                        <div class="mana-symbol">🧇</div>
                        <div class="mana-symbol">💻</div>
                    </div>
                </div>
                <div class="art-box">
                    <div class="profile-pic">🧇</div>
                </div>
                <div class="type-line">
                    Legendary Creature — Developer Waffle
                </div>
                <div class="text-box">
                    <div class="text-content">
                        <p>When theWaffler enters the battlefield, create three Code tokens.</p>
                        <p><i>Tap</i>: Visit theWaffler's GitHub repository.</p>
                        <a href="https://github.com/theWaffler" target="_blank" class="github-link">
                            <i class="fab fa-github"></i>
                            <span>View Repository</span>
                        </a>
                    </div>
                    <div class="power-toughness">∞/∞</div>
                </div>
            </div>
        </div>
    </div>

    <script>
        // Create magical sparkles effect
        const sparklesContainer = document.querySelector('.magical-sparkles');
        
        function createSparkle() {
            const sparkle = document.createElement('div');
            sparkle.className = 'sparkle';
            
            // Random position around the card
            const x = Math.random() * 100;
            const y = Math.random() * 100;
            
            // Random movement
            const tx = (Math.random() - 0.5) * 50;
            const ty = (Math.random() - 0.5) * 50;
            
            sparkle.style.left = `${x}%`;
            sparkle.style.top = `${y}%`;
            sparkle.style.setProperty('--tx', `${tx}px`);
            sparkle.style.setProperty('--ty', `${ty}px`);
            
            sparklesContainer.appendChild(sparkle);
            
            // Remove sparkle after animation
            setTimeout(() => {
                sparkle.remove();
            }, 1500);
        }

        // Create new sparkles periodically
        setInterval(createSparkle, 100);

        // Add 3D tilt effect
        const card = document.querySelector('.card');
        card.addEventListener('mousemove', (e) => {
            const rect = card.getBoundingClientRect();
            const x = e.clientX - rect.left;
            const y = e.clientY - rect.top;
            
            const centerX = rect.width / 2;
            const centerY = rect.height / 2;
            
            const rotateX = (y - centerY) / 20;
            const rotateY = -(x - centerX) / 20;
            
            card.style.transform = `rotateX(${rotateX}deg) rotateY(${rotateY}deg)`;
        });

        card.addEventListener('mouseleave', () => {
            card.style.transform = 'rotateX(0) rotateY(0)';
        });
    </script>
</body>
</html>
