<?hh

function example1_hello() {
  echo "Hello world\n";
}

<<__Native>>
function example1_greet(string $name, bool $hello = true): void;
