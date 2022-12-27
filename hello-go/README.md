## Compile natively with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src golang bash -c "cd /src && GOCACHE=/tmp/ go build hello-go.go && ./hello-go"
```

## For WASM:
Compile with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src golang bash -c "cd /src && GOOS=js GOARCH=wasm GOCACHE=/tmp/ go build hello-go.go && mv hello-go hello-go.wasm"
```
Then serve through a webserver (file:// fails to load), eg:
```
python3 -m http.server 4444
```

Then open http://{ip}:4444/hello-cpp.html in browser.

"Hello from C++!" should be shown in the browser console tab.

## Note(s)

"GOCACHE" is not set and the docker image is run as non-root, an error happens: "failed to initialize build cache at /.cache/go-build: mkdir /.cache: permission denied"

For some reason "-o hello-go.wasm" in the build command causes an error, so using "mv" instead, but apparently it's meant to work.
