import click


@click.command()
@click.argument("nome", required=True)
@click.option(
    "num_vezes",
    type=int,
    default=1,
    help="Número de vezes que a mensagem será impressa",
)
def hello(nome, num_vezes):
    for _ in range(num_vezes):
        click.echo(f"Hello {nome}!")


if __name__ == "__main__":
    hello()