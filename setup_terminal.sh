#!/bin/bash

echo "🚀 Setting up beautiful Terminal for C/C++ coding..."

# 1️⃣ Install Homebrew (if not installed)
if ! command -v brew &> /dev/null
then
    echo "Installing Homebrew..."
    /bin/bash -c "$(curl -fsSL 
https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
fi

# 2️⃣ Install iTerm2 (better terminal)
brew install --cask iterm2

# 3️⃣ Install bat (syntax highlighting)
brew install bat

# 4️⃣ Install compiler tools
xcode-select --install

# 5️⃣ Install beautiful Fira Code font
FONT_DIR="$HOME/Library/Fonts"
curl -L -o /tmp/FiraCode.zip 
https://github.com/tonsky/FiraCode/releases/download/6.3/Fira_Code_v6.3.zip
unzip -o /tmp/FiraCode.zip -d /tmp/FiraCode
cp /tmp/FiraCode/ttf/*.ttf "$FONT_DIR/"

echo "🎉 Done! Open iTerm2 → Preferences → Profiles → Text → Font → 
choose Fira Code"
echo "💡 Tip: Download Dracula theme from https://draculatheme.com/iterm/"









#!/bin/bash

echo "🚀 Setting up beautiful Terminal for C/C++ coding..."

# ------------------------------
# 1️⃣ Install Homebrew (if not installed)
# ------------------------------
if ! command -v brew &> /dev/null
then
    echo "🍺 Installing Homebrew (this may take a few minutes)..."
    /bin/bash -c "$(curl -fsSL 
https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
else
    echo "✅ Homebrew already installed."
fi

# ------------------------------
# 2️⃣ Install iTerm2 (a beautiful Terminal)
# ------------------------------
echo "📦 Installing iTerm2..."
brew install --cask iterm2

# ------------------------------
# 3️⃣ Install bat (syntax highlighting for code)
# ------------------------------
echo "🖍️ Installing bat..."
brew install bat

# ------------------------------
# 4️⃣ Install C/C++ compiler tools (Xcode Command Line Tools)
# ------------------------------
echo "⚙️ Installing compiler tools..."
xcode-select --install || echo "✅ Compiler tools already installed."

# ------------------------------
# 5️⃣ Install Fira Code font (for coding ligatures and beauty)
# ------------------------------
echo "🔤 Installing Fira Code font..."
FONT_DIR="$HOME/Library/Fonts"
curl -L -o /tmp/FiraCode.zip 
https://github.com/tonsky/FiraCode/releases/download/6.3/Fira_Code_v6.3.zip
unzip -o /tmp/FiraCode.zip -d /tmp/FiraCode
cp /tmp/FiraCode/ttf/*.ttf "$FONT_DIR/"
rm -rf /tmp/FiraCode /tmp/FiraCode.zip
echo "✅ Fira Code font installed."

# ------------------------------
# 6️⃣ Final instructions
# ------------------------------
echo ""
echo "🎉 Setup Complete!"
echo ""
echo "👉 Open iTerm2 (it's installed in Applications)."
echo "👉 Go to: iTerm2 > Preferences > Profiles > Text"
echo "   - Change Font to: Fira Code"
echo "   - Increase Font Size to around 15–16 pt"
echo ""
echo "👉 Go to: iTerm2 > Preferences > Profiles > Colors"
echo "   - Import and apply Dracula theme from: 
https://draculatheme.com/iterm/"
echo ""
echo "✨ For colorful C/C++ output, compile with:"
echo "   gcc -Wall yourfile.c -o yourfile && ./yourfile"
echo "   g++ -Wall yourfile.cpp -o yourfile && ./yourfile"
echo ""
echo "🖌️ To view code beautifully, use:"
echo "   bat yourfile.c"
echo "   bat yourfile.cpp"
echo ""
echo "✅ Enjoy your beautiful coding environment!"

