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

// Function: entry_00115e40
// Address: 0x115e40 - 0x115e78
void entry_00115e40_0x115e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e40_0x115e40");
#endif

    switch (ctx->pc) {
        case 0x115e48u: goto label_115e48;
        default: break;
    }

    ctx->pc = 0x115e40u;

    // 0x115e40: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x115E40u;
    SET_GPR_U32(ctx, 31, 0x115E48u);
    ctx->pc = 0x115E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E40u;
    // 0x115e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x115E40u, 0x115E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E48u;
label_115e48:
    // 0x115e48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115E48u;
    {
        const bool branch_taken_0x115e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E48u;
        // 0x115e4c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e48) {
            ctx->pc = 0x115E80u;
            return;
        }
    }
    ctx->pc = 0x115E50u;
    // 0x115e50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115e58: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x115e5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x115e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x115e60: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x115e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E64u;
    {
        const bool branch_taken_0x115e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E64u;
        // 0x115e68: 0x2475d968  addiu       $s5, $v1, -0x2698 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e64) {
            ctx->pc = 0x115E78u;
            return;
        }
    }
    ctx->pc = 0x115E6Cu;
    // 0x115e6c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x115e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e70: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x115e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x115e74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x115e78u;
}
