## Compile natively with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src gcc bash -c "cd /src && gcc hello-c.c -o hello-c && ./hello-c"
```

## For WASM:
Compile with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src emscripten/emsdk bash -c "cd /src && emcc hello-c.c -o hello-c.html"
```

Then serve through a webserver (file:// fails to load), eg:
```
python3 -m http.server 4444
```

Then open http://{ip}:4444/hello-cpp.html in browser.

"Hello from C++!" should be shown in lower half of the screen, and browser console tab.
