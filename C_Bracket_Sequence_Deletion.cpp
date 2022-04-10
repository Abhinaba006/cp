function x()
{
    window.NodeList && !NodeList.prototype.forEach && (NodeList.prototype.forEach = function(b, t) {t=t||window;for(let m=0;m<this.length;m++)b.call(t,this[m],m,this) });
    let w, L;
    window.Puzzle = function(b)
    {
        const t = this;
        this.container = null, this.fullImg = new Image, this.grid = null, this.key = null, this.mouseX = null, this.mouseY = null, this.offsetX = null, this.offsetY = null, this.touchSlot = null, this.clientX = null, this.clientY = null, this.clientX = null, this.clientY = null, this.lastPlace = null, this.gridSize = null, this.usropts = b, this.difficulty = null, this.settings = {el : null, image : "https://images.unsplash.com/photo-1548161955-40def7e9742d", fullImg : null, numcolumns : 3, numrows : 3, calHeight : 60, difficulty : "normal", dragstart : function(){}, dragenter : function(){}, drag : function(){}, dragover : function(){}, dragleave : function(){}, dragend : function(){}, drop : function(){}, touchstart : function(){}, touchmove : function(){}, touchhover : function(){}, touchend : function(){}, mousedown : function(){}, mouseup : function(){}, correct : function(){}, finished : function(){}, debug : !1}, this.init = function()
        {
            if (t.setOpts(t.usropts), t.setDifficulty(t.settings.difficulty), t.settings.el)
                t.container = t.settings.el;
            else
                return console.error('No "el" option detected. Please specify an element to attach puzzle to.'), !1;
            let n = new Image, i, l;
            return n.onload = function(){l = window.innerHeight / 100 * t.settings.calHeight, i = l * (this.width / this.height), t.settings.width = i, t.settings.height = l, t.grid = I(t.settings.numcolumns, t.settings.numrows), t.correctTiles(), t.container.innerHTML = "", t.container.appendChild(t.grid, t.container.children[0]), C(t.grid, t.container), m()}, n.src = t.settings.image, t
        }
        , this.setOpts = function(){return Object.keys(t.usropts).forEach(function(n){t.settings[n] != = "" && (t.settings[n] = t.usropts[n])}), t}, this.setDifficulty = function(n)
        {
            switch (n)
            {
            case "easy":
                t.difficulty = .25;
                break;
            case "normal":
                t.difficulty = .5;
                break;
            case "hard":
                t.difficulty = .75;
                break;
            case "expert":
                t.difficulty = 1;
                break;
            default:
                t.difficulty = .5
            }
            return t.usropts.difficulty = n, t
        }
        , this.setGridSize = function(n){return Object.keys(n).forEach(function(i){i == = "numrows" && typeof Number(n[i]) == "number" && (t.usropts.numrows = n[i]), i == = "numcolumns" && typeof Number(n[i]) == "number" && (t.usropts.numcolumns = n[i])}), t}, this.setImage = function(n)
        {
            let i = new Image;
            return i.onload = function(){t.usropts.image = n}, i.src = n, t
        }
        , this.isSorted = function(n)
        {
            n = n || t.getTiles();
            let i = 0, l = Object.keys(n), e = n.length;
            for (; e > 1;)
                if (Number(l[i]) == = Number(n[i][0]))
                    i++, e--;
                else
                    return !1;
            return !0
        }
        , this.getTiles = function()
        {
            let n = [];
            return t.grid.childNodes.forEach(function(i, l) {if(i.nodeType!==3){let e=[];e[0]=Number(i.children[0].dataset.position)-1,e[1]=i,n[l]=e} }), n
        }
        , this.correctTiles = function(n)
        {
            n = n || t.getTiles();
            let i = 0, l = Object.keys(n), e = n.length, s = 0;
            for (; e > 0;)
                Number(l[i]) == = Number(n[i][0]) ? (n[i][1].style.pointerEvents = "none", n[i][1].dataset.inplace = "true", s++) : (n[i][1].children[0].dataset.inplace = "", n[i][1].style.pointerEvents = ""), i++, e--;
            return s
        };
        function m()
        {
            let n = t.grid.children;
            document.addEventListener("dragover", function(i){t.mouseX = i.clientX, t.mouseY = i.clientY}), document.addEventListener("mousemove", function(i){t.mouseX = i.clientX, t.mouseY = i.clientY}), document.addEventListener("transitionend", function(i){i.target.classList.remove("animate")}), document.addEventListener(
                                                                                                                                                                                                                                                                                                                "touchmove", function(i) {if(t.touchSlot&&i.touches[0].clientY>t.offsetY&&i.touches[0].clientX>t.offsetX&&i.touches[0].clientY<document.body.offsetHeight-(t.touchSlot.offsetHeight-t.offsetY)&&i.touches[0].clientX<document.body.offsetWidth-(t.touchSlot.offsetWidth-t.offsetX)){t.touchSlot.style.zIndex=10,t.touchSlot.style.pointerEvents="none",t.touchSlot.style.transform="translate("+(i.touches[0].clientX-t.clientX)+"px,"+(i.touches[0].clientY-t.clientY)+"px)";let l={self:t,event:i,target:i.target};Object.keys(n).forEach(function(e){let s=n[e].getBoundingClientRect().top,o=n[e].getBoundingClientRect().bottom,r=n[e].getBoundingClientRect().right,a=n[e].getBoundingClientRect().left;i.touches[0].clientX>a&&i.touches[0].clientX<r&&i.touches[0].clientY>s&&i.touches[0].clientY<o&&n[e]!==t.touchSlot&&(n[e].style.pointerEvents||(Object.keys(t.grid.children).forEach(function(c){t.grid.children[c].classList.remove("highlight")}),n[e].classList.add("highlight")),t.settings.touchhover&&typeof t.settings.touchhover=="function"&&t.settings.touchhover(l)),w=i.touches[0].clientX,L=i.touches[0].clientY})} }),
                Object.keys(n).forEach(function(i) {let l=!!window.MSInputMethodContext&&!!document.documentMode;n[i].addEventListener("mousemove",function(e){t.offsetX=e.offsetX,t.offsetY=e.offsetY,t.clientX=e.clientX,t.clientY=e.clientY;let s={self:t,event:e,target:e.target};t.settings.mousemove&&typeof t.settings.mousemove=="function"&&t.settings.mousemove(s)}),n[i].addEventListener("mousedown",function(e){this.draggable=!0,X(this);let s={self:t,event:e,target:e.target};t.settings.mousedown&&typeof t.settings.mousedown=="function"&&t.settings.mousedown(s)}),n[i].addEventListener("mouseup",function(e){this.style.transform="",this.removeAttribute("draggable");let s={self:t,event:e,target:e.target};t.settings.mouseup&&typeof t.settings.mouseup=="function"&&t.settings.mouseup(s)}),n[i].addEventListener("dragstart",function(e){let s=e.dataTransfer;l||(s.setDragImage(new Image,0,0),s.setData("key","")),t.key=i;let o={self:t,event:e,target:e.target};t.settings.dragstart&&typeof t.settings.dragstart=="function"&&t.settings.dragstart(o)}),n[i].addEventListener("drag",function(e){let s,o,r=t.mouseX,a=t.mouseY,c=t.offsetX,f=t.offsetY,g=t.clientX,d=t.clientY,u=a<f,h=r<c,p=r>document.body.offsetWidth-(e.target.offsetWidth-c),y=a>document.body.offsetHeight-(e.target.offsetHeight-f);!h&&!u&&!p&&!y&&(e.target.style.zIndex=10,e.target.style.pointerEvents="none",s=r-g,o=a-d,e.target.style.transform="translate("+s+"px,"+o+"px)"),u&&!p&&!h&&(s=r-g,o=d-f,e.target.style.transform="translate("+s+"px,"+-o+"px)"),y&&!p&&!h&&(s=r-g,o=document.body.offsetHeight-(d+(e.target.offsetHeight-f)),e.target.style.transform="translate("+s+"px,"+o+"px)"),h&&!y&&!u?(s=g-c,o=a-d,e.target.style.transform="translate("+-s+"px,"+o+"px)"):h&&y?(s=g-c,o=document.body.offsetHeight-(d+(e.target.offsetHeight-f)),e.target.style.transform="translate("+-s+"px,"+o+"px)"):h&&u&&(s=g-c,o=d-f,e.target.style.transform="translate("+-s+"px,"+-o+"px)"),p&&!y&&!u?(s=document.body.offsetWidth-(g+(e.target.offsetWidth-c)),o=a-d,e.target.style.transform="translate("+s+"px,"+o+"px)"):p&&u?(s=document.body.offsetWidth-(g+(e.target.offsetWidth-c)),o=d-f,e.target.style.transform="translate("+s+"px,"+-o+"px)"):p&&y&&(s=document.body.offsetWidth-(g+(e.target.offsetWidth-c)),o=document.body.offsetHeight-(d+(e.target.offsetHeight-f)),e.target.style.transform="translate("+s+"px,"+o+"px)");let S={self:t,event:e,target:e.target};t.settings.drag&&typeof t.settings.drag=="function"&&t.settings.drag(S)}),n[i].addEventListener("dragend",function(e){e.target.dataset.inplace||(e.target.style.pointerEvents=""),setTimeout(function(){e.target.classList.add("animate"),e.target.style.transform="translate(0px,0px)"},100);let s={self:t,event:e,target:e.target};t.settings.dragend&&typeof t.settings.dragend=="function"&&t.settings.dragend(s)}),n[i].addEventListener("dragenter",function(e){e.preventDefault();let s={self:t,event:e,target:e.target};t.settings.dragenter&&typeof t.settings.dragenter=="function"&&t.settings.dragenter(s)}),n[i].addEventListener("dragover",function(e){e.preventDefault();let s={self:t,event:e,target:e.target};t.settings.dragover&&typeof t.settings.dragover=="function"&&t.settings.dragover(s)}),n[i].addEventListener("dragleave",function(e){let s={self:t,event:e,target:e.target};t.settings.dragleave&&typeof t.settings.dragleave=="function"&&t.settings.dragleave(s)}),n[i].addEventListener("drop",function(e){let s=this,o=n[t.key],r=n[i].children[0],a=o.children[0];a.classList.remove("highlight"),n[i].classList.remove("highlight"),o.removeAttribute("draggable"),n[i].removeAttribute("draggable"),o.style.zIndex=10,t.lastPlace.remove(),n[i].appendChild(a),o.appendChild(r),t.correctTiles(),Y(s,o,r,a,e),t.settings.debug&&(console.info(t),console.info(r[0]),console.info(s),console.info("Dropped tile #"+Number(r[0].dataset.position)+" in slot #"+(Array.from(t.grid.children).indexOf(s)+1)))}),n[i].addEventListener("touchstart",function(e){t.touchSlot=e.target,t.offsetY=Math.round(e.touches[0].clientY-e.target.getBoundingClientRect().top),t.offsetX=Math.round(e.touches[0].clientX-e.target.getBoundingClientRect().left),t.clientX=e.touches[0].clientX,t.clientY=e.touches[0].clientY,this.children[0].classList.add("highlight"),X(this),this.style.zIndex=10,t.touchSlot=this;let s={self:t,event:e,target:e.target};t.settings.touchstart&&typeof t.settings.touchstart=="function"&&t.settings.touchstart(s)}),n[i].addEventListener("touchend",function(e){t.clientX=w,t.clientY=L,e.target.style.pointerEvents="",t.grid.querySelectorAll(".highlight").forEach(function(s){s.classList.remove("highlight")}),t.lastPlace.remove(),setTimeout(function(){e.target.classList.add("animate"),e.target.style.transform="translate(0px,0px)"},100),Object.keys(n).forEach(function(s){let o=n[s].getBoundingClientRect().top,r=n[s].getBoundingClientRect().bottom,a=n[s].getBoundingClientRect().right,c=n[s].getBoundingClientRect().left;if(t.clientX>c&&t.clientX<a&&t.clientY>o&&t.clientY<r&&n[s]!==t.touchSlot&&!n[s].style.pointerEvents){let f=n[s],g=e.target,d=f.children[0],u=g.children[0];u.classList.remove("highlight"),f.classList.remove("highlight"),g.removeAttribute("draggable"),f.removeAttribute("draggable"),g.style.zIndex=10,f.appendChild(u),g.appendChild(d),t.correctTiles(),Y(f,g,d,u,e),n[s].draggable||Object.keys(t.grid.children).forEach(function(h){t.grid.children[h].classList.remove("highlight")})}}),t.touchSlot=null}),n[i].addEventListener("transitionend",function(e){e.target.style.transform==="translate(0px, 0px)"&&(t.lastPlace!==void 0&&t.lastPlace.remove(),this.children[0].classList.remove("highlight"),this.style.zIndex="",this.style.transform="")}) }), window.addEventListener("resize", function(){C(t.grid, t.container)})
        }
        function X(n){t.lastPlace && t.lastPlace.remove(), t.lastPlace = n.cloneNode(!0), Object.assign(t.lastPlace.style, {position : "absolute", opacity : ".4", top : n.getBoundingClientRect().top - n.parentNode.getBoundingClientRect().top + "px", left : n.getBoundingClientRect().left - n.parentNode.getBoundingClientRect().left + "px", zIndex : "-2"}), n.parentNode.appendChild(t.lastPlace)} function Y(n, i, l, e, s)
        {
            let o = Array.from(t.grid.children).indexOf(i) == = Number(l.dataset.position) - 1, r = Array.from(t.grid.children).indexOf(n) == = Number(e.dataset.position) - 1, a = {self : t, event : s, target : s.target, dropped : {el : l, position : l.dataset.position, inPlace : o}, dragged : {el : e, position : e.dataset.position, inPlace : r}};
            if (t.settings.drop && typeof t.settings.drop == "function" && t.settings.drop(a), t.isSorted(t.getTiles()) && (t.grid.appendChild(t.fullImg), t.settings.finished && typeof t.settings.finished == "function" && t.settings.finished(a)), o || r)
                t.settings.correct &&typeof t.settings.correct == "function" && t.settings.correct(a);
            else
            {
                new Audio("/assets/audio/drop.mp3").play();
                try
                {
                    window.navigator.vibrate([ 100, 50 ])
                }
                catch
                {
                }
            }
        }
        function C(n, i)
        {
            let l = i.offsetWidth, e = 0;
            [ window.getComputedStyle(i).paddingRight, window.getComputedStyle(i).paddingLeft ].forEach(function(o){e += parseInt(o)}), l = l - e, Object.assign(n.style, {"max-width" : t.settings.width + "px", "max-height" : t.settings.height + "px", height : "calc(" + l + "px * (" + t.settings.height + "/" + t.settings.width + "))"})
        }
        function I(n, i)
        {
            let l = [], e = 0, s = 0, o = 1;
            for (t.grid = document.createElement("ul"), t.gridSize = n * i; e < t.gridSize;)
            {
                let r = document.createElement("li"), a = document.createElement("div"), c = document.createElement("img"), f = [];
                Object.assign(r.style, {height : 100 / i + "%", "max-width" : 100 / n + "%", flex : "1 0 " + 100 / n + "%"}), a.dataset.position = e + 1, c.src = t.settings.image, c.style.position = "relative", c.style.width = 100 * n + "%", (e + 1) % Math.floor(t.gridSize / i) == = 0 ? (c.style.top = -(100 * s) + "%", s++) : c.style.top = -(100 * s) + "%", e % n != = 0 ? (c.style.left = -(100 * o) + "%", o++) : o = 1, a.appendChild(c), r.appendChild(a), f[0] = e, f[1] = r, l.push(f), e++
            }
            return t.grid.classList.add("frame"), t.grid.classList.add("no-select"), l = E(l), l.forEach(function(r){t.grid.appendChild(r[1])}), t.fullImg.src = t.settings.fullImg ? t.settings.fullImg : t.settings.image, t.fullImg.classList.add("full-img"), t.fullImg.style.opacity = 0, t.fullImg.style.zIndex = -1, t.grid
        }
        function E(n)
        {
            let i = n.length - Math.ceil(n.length * t.difficulty), l = n.length, e, s;
            for (i = i < l - 1 ? i : 0, l = l - i > 0 ? l - Math.abs(i) : 2; l && (s = Math.floor(Math.random() * (l - 1) + 1), !(l < 0));)
                l--, e = n[l], n[l] = n[s], n[s] = e;
            return t.isSorted(n) && E(n), t.difficulty == = 1 && t.correctTiles(n) && (n.forEach(function(o){o[1].dataset.inplace = ""}), E(n)), n
        }
        return this
    }
}
export {x as p};
