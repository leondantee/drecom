#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00177048
// Address: 0x177048 - 0x177058
void entry_00177048_0x177048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177048_0x177048");
#endif

    ctx->pc = 0x177048u;

    // 0x177048: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x177048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17704c: 0x8c24fdf0  lw          $a0, -0x210($at)
    ctx->pc = 0x17704cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFDF0u));
    // 0x177050: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x177050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x177054: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x177054u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->pc = 0x177058u;
}
