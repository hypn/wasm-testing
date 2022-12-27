## Compile natively with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src gcc bash -c "cd /src && g++ hello-cpp.cpp -o hello-cpp && ./hello-cpp"
```

## For WASM:
Compile with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src emscripten/emsdk bash -c "cd /src && emcc hello-cpp.cpp -o hello-cpp.html"
```

Then serve through a webserver (file:// fails to load), eg:
```
python3 -m http.server 4444
```

Then open http://{ip}:4444/hello-cpp.html in browser.

"Hello from C++!" should be shown in lower half of the screen, and console tab.
