# EVMFD (Electronic Voting Machine File Decoder)

Este projeto visa facilitar a decodificação de arquivos gerados pelas urnas eletrônicas
Brasileiras

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