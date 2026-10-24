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

// Function: entry_001db158
// Address: 0x1db158 - 0x1db178
void entry_001db158_0x1db158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db158_0x1db158");
#endif

    ctx->pc = 0x1db158u;

    // 0x1db158: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db15c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db160: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1db164: 0x34620700  ori         $v0, $v1, 0x700
    ctx->pc = 0x1db164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1db168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1db168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db16c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db16cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db170: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB170u;
    {
        const bool branch_taken_0x1db170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db170) {
            ctx->pc = 0x1DB1C0u;
            return;
        }
    }
    ctx->pc = 0x1DB178u;
}
