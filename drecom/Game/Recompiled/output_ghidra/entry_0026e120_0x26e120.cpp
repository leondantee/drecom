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

// Function: entry_0026e120
// Address: 0x26e120 - 0x26e138
void entry_0026e120_0x26e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e120_0x26e120");
#endif

    ctx->pc = 0x26e120u;

    // 0x26e120: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x26e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x26e124: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x26e128: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26e128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e12c: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x26E12Cu;
    {
        const bool branch_taken_0x26e12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e12c) {
            ctx->pc = 0x26DF94u;
            return;
        }
    }
    ctx->pc = 0x26E134u;
    // 0x26e134: 0x0  nop
    ctx->pc = 0x26e134u;
    // NOP
    ctx->pc = 0x26e138u;
}
