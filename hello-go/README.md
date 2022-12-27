## Compile natively with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src golang bash -c "cd /src && GOCACHE=/tmp/ go build hello-go.go && ./hello-go"
```

## For WASM:
Compile with:
```
docker run -ti --rm -u $(id -u ${USER}):$(id -g ${USER}) -v $PWD:/src golang bash -c "cd /src && GOOS=js GOARCH=wasm GOCACHE=/tmp/ go build hello-go.go && mv hello-go hello-go.wasm"
```
For some reason "-o hello-go.wasm" in the command causes an error, so using "mv" instead, but apparently it's meant to work.

## Note(s)

"GOCACHE" is not set and the docker image is run as non-root, an error happens: "failed to initialize build cache at /.cache/go-build: mkdir /.cache: permission denied"
