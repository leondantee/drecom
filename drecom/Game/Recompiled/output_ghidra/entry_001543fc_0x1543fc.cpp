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

// Function: entry_001543fc
// Address: 0x1543fc - 0x154420
void entry_001543fc_0x1543fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001543fc_0x1543fc");
#endif

    ctx->pc = 0x1543fcu;

    // 0x1543fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x154400: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x154404: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x154404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x154408: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x154408u;
    {
        const bool branch_taken_0x154408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154408) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x154410u;
    // 0x154410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154414: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
    // 0x154418: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154418) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x154420u;
}
