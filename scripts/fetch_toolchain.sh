#!/usr/bin/env bash
# Fetch the vendor's compiler: GNU Arm Embedded 10.3-2021.10 (GCC 10.3.1),
# staged at build/gcc-arm. Needed for matching (byte-identical) C builds.
set -euo pipefail
REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
DEST="${REPO_ROOT}/build/gcc-arm"
URL="https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2"
if [ -x "${DEST}/bin/arm-none-eabi-gcc" ]; then
    echo "toolchain present: $(${DEST}/bin/arm-none-eabi-gcc -dumpversion)"; exit 0
fi
mkdir -p "${DEST}"
tmp="$(mktemp -d)"
curl -fSL -o "${tmp}/gcc.tar.bz2" "${URL}"
tar -xjf "${tmp}/gcc.tar.bz2" -C "${DEST}" --strip-components=1
rm -rf "${tmp}"
echo "toolchain staged: ${DEST} ($(${DEST}/bin/arm-none-eabi-gcc -dumpversion))"
