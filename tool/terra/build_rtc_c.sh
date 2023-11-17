#!/usr/bin/env bash
set -e
set -x

MY_PATH=$(realpath $(dirname "$0"))
PROJECT_ROOT=$(realpath ${MY_PATH}/../..)

pushd ${MY_PATH}

npm exec terra -- run \
    --config ${PROJECT_ROOT}/tool/terra/terra_config_rtc_c.yaml  \
    --output-dir=${MY_PATH}/rtc_c_gen_output

popd