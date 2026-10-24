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

// Function: entry_00119a50
// Address: 0x119a50 - 0x119a68
void entry_00119a50_0x119a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119a50_0x119a50");
#endif

    ctx->pc = 0x119a50u;

    // 0x119a50: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x119a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x119a54: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x119a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x119a58: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x119a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x119a5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x119a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x119a60: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x119a60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119a64: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->pc = 0x119a68u;
}
