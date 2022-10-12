<p align="center">
  <img src="https://img.freepik.com/vetores-premium/urna-eleitoral-traducoes-fim-significa-fim-urna-urna-eleitoral-eleitoral-ilustracao-de-estoque-vetorial_100456-2562.jpg?w=300" />
</p>

# EVMFD (Electronic Voting Machine File Decoder)

O EVMFD é um software capaz de decodificar os arquivos de boletim de urna (.bu) e de
registro digital de voto (.rdv) gerados pelas urnas eletrônicas Brasileiras.

Foi desenvolvido com base na documentação técnica [disponibilizada](https://www.tse.jus.br/eleicoes/eleicoes-2022/documentacao-tecnica-do-software-da-urna-eletronica) pelo Tribunal Superior Eleitoral

# Uso

```bash
./evmfd -b [arquivo .bu]
```

# Compilação

```bash
git clone https://github.com/lucasvmx/evmfd.git
cd evmfd
asn1c -fline-refs -fcompound-names -fincludes-quoted asn/assinatura.asn1 asn/bu.asn1 asn/rdv.asn1
make
```
