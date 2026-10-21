#!/usr/bin/env bash
# Fetch the Nordic nRF5 SDK 12.3.0 (last line supporting nRF51 + SoftDevice
# S130) and stage it at build/sdk so the firmware project can build on a fresh
# checkout. The SDK is large and license-encumbered, so it is NOT committed;
# this script reproduces it on demand.
set -euo pipefail

SDK_VER="12.3.0_d7731ad"
SDK_NAME="nRF5_SDK_${SDK_VER}"
SDK_URL="https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v12.x.x/${SDK_NAME}.zip"

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="${REPO_ROOT}/build"
DEST="${BUILD_DIR}/${SDK_NAME}"
LINK="${BUILD_DIR}/sdk"

mkdir -p "${BUILD_DIR}"

if [ -d "${DEST}/components/softdevice/s130" ]; then
    echo "SDK already present at ${DEST}"
else
    echo "Downloading ${SDK_NAME} ..."
    tmp="$(mktemp -d)"
    curl -fSL -o "${tmp}/sdk.zip" "${SDK_URL}"
    echo "Extracting ..."
    unzip -q "${tmp}/sdk.zip" -d "${BUILD_DIR}"
    rm -rf "${tmp}"
fi

ln -sfn "${DEST}" "${LINK}"
echo "SDK staged: ${LINK} -> ${DEST}"
echo
echo "Toolchain: arm-none-eabi-gcc must be on PATH (apt: gcc-arm-none-eabi)."
echo "Build with:  make -C firmware/bondTouchMore"
