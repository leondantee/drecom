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

// Function: entry_001932e8
// Address: 0x1932e8 - 0x19330c
void entry_001932e8_0x1932e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001932e8_0x1932e8");
#endif

    ctx->pc = 0x1932e8u;

    // 0x1932e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1932e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1932ec: 0x8c3e0af0  lw          $fp, 0xAF0($at)
    ctx->pc = 0x1932ecu;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1932f0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1932F0u;
    {
        const bool branch_taken_0x1932f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1932f0) {
            ctx->pc = 0x19330Cu;
            return;
        }
    }
    ctx->pc = 0x1932F8u;
    // 0x1932f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1932f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1932fc: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x1932fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x193300: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x193300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x193304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193304u;
    {
        const bool branch_taken_0x193304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193304) {
            ctx->pc = 0x193318u;
            return;
        }
    }
    ctx->pc = 0x19330Cu;
}
