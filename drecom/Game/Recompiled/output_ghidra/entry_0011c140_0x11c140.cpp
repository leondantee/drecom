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

// Function: entry_0011c140
// Address: 0x11c140 - 0x11c168
void entry_0011c140_0x11c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c140_0x11c140");
#endif

    ctx->pc = 0x11c140u;

    // 0x11c140: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c144: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c148: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c154: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c158: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c158u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c15c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c160: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x11C160u;
    {
        const bool branch_taken_0x11c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C160u;
        // 0x11c164: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c160) {
            ctx->pc = 0x11C708u;
            return;
        }
    }
    ctx->pc = 0x11C168u;
}
