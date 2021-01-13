# Conception material

This folder contains mod configurations and binaries.

Content was split into two folders for easier comprehension and use.

## WIP

The _WIP_ folder allows to edit the mod configuration files and scripts.

It contains all the source code and assets used in the mod.

### Addons

The mod is split into multiple addons, the names and content of those addons
are based on the ones found in the Arma 3 core game.

### Docs

Some basic documentation, license and files are shipped alongside the mod.

## Ready

The _Ready_ folder contains the releasable version of the mod.

The mod is published on Steam using the Arma 3 Tools' Publisher.

Addons are turned into signed .pbo using the Arma 3 Tools' Addon Builder.
These addons are signed using a private key (`.biprivatekey`). This key is
hosted in a separate private repository to prevent corrupted versions of the mod
to be released.
