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

// Function: entry_001070ec
// Address: 0x1070ec - 0x1070fc
void entry_001070ec_0x1070ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001070ec_0x1070ec");
#endif

    ctx->pc = 0x1070ecu;

    // 0x1070ec: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1070ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1070f0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1070f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1070f8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1070f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x1070fcu;
}
