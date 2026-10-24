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

// Function: entry_0011c40c
// Address: 0x11c40c - 0x11c44c
void entry_0011c40c_0x11c40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c40c_0x11c40c");
#endif

    ctx->pc = 0x11c40cu;

    // 0x11c40c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11c410: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x11C410u;
    {
        const bool branch_taken_0x11c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C410u;
        // 0x11c414: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c410) {
            ctx->pc = 0x11C724u;
            return;
        }
    }
    ctx->pc = 0x11C418u;
    // 0x11c418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c41c: 0x2442dbb0  addiu       $v0, $v0, -0x2450
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958000));
    // 0x11c420: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x11c420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11c424: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c428: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c42c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c438: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c43c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c43cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c440: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c444: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x11C444u;
    {
        const bool branch_taken_0x11c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C444u;
        // 0x11c448: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c444) {
            ctx->pc = 0x11C708u;
            return;
        }
    }
    ctx->pc = 0x11C44Cu;
}
