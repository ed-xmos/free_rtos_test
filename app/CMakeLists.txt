cmake_minimum_required(VERSION 3.13)

# Disable in-source build.
if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "In-source build is not allowed! Please specify a build folder.\n\tex:cmake -B build")
endif()

## Import XMOS configurations
include("$ENV{XMOS_AIOT_SDK_PATH}/tools/cmake_utils/xmos_utils.cmake")
set(XMOS_APP_MODULES_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

## Define project
project(rtos_app)
set(PROJECT_VERSION 0.5.0)

## Enable languages for project
enable_language(CXX C ASM)

## Set XMOS application variables
set(APP_COMPILER_FLAGS
        "-Os"
        "-g"
        "-D__XS2A__=1"
        "-report"
        "-fxscope"
        "-Wxcore-fptrgroup"
        "-DDEBUG_PRINT_ENABLE=1"
        "-DSL_WFX_DEBUG_MASK=(SL_WFX_DEBUG_ERROR|SL_WFX_DEBUG_INIT)"
        "-DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\""
        #"-DMBEDTLS_USER_CONFIG_FILE=\"mbedtls_user_config.h\"" # User config applied after default XMOS config
        "${CMAKE_CURRENT_SOURCE_DIR}/src/config.xscope")
set(APP_XC_SRCS
        ""
    )
set(APP_C_SRCS
        "src/main.c"
    )
set(APP_ASM_SRCS
        ""
    )
set(APP_INCLUDES
        "src"
    )
set(APP_DEPENDENT_MODULES
        "lib_soc(>=0.6.0)"
    )

set(USE_FREERTOS_SMP True)

## Add lib_soc devices
set(LIB_SOC_GPIO ${FULL})
set(LIB_SOC_I2C ${FULL})
set(LIB_SOC_I2S ${FULL})
set(LIB_SOC_MICARRAY ${FULL})
set(LIB_SOC_SPIMASTER ${FULL})
set(LIB_SOC_QSPI_FLASH ${FULL})
#set(LIB_SOC_WFM200 ${BSP_ONLY})
set(LIB_SOC_SW_TRACE False)
set(LIB_SOC_SW_WIFI False)
set(LIB_SOC_SW_DHCPD False)
set(LIB_SOC_SW_SNTPD False)
set(LIB_SOC_SW_FATFS False)
set(LIB_SOC_SW_TLS_SUPPORT False)
set(LIB_SOC_SW_MQTT False)
set(LIB_SOC_SW_HTTP False)

## Register the application
XMOS_REGISTER_APP()
