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

// Function: entry_00116b1c
// Address: 0x116b1c - 0x116b70
void entry_00116b1c_0x116b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b1c_0x116b1c");
#endif

    switch (ctx->pc) {
        case 0x116b38u: goto label_116b38;
        case 0x116b5cu: goto label_116b5c;
        case 0x116b6cu: goto label_116b6c;
        default: break;
    }

    ctx->pc = 0x116b1cu;

    // 0x116b1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x116b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116b24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x116B24u;
    {
        const bool branch_taken_0x116b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B24u;
        // 0x116b28: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b24) {
            ctx->pc = 0x116B70u;
            return;
        }
    }
    ctx->pc = 0x116B2Cu;
    // 0x116b2c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x116b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116b30: 0xc046348  jal         func_118D20
    ctx->pc = 0x116B30u;
    SET_GPR_U32(ctx, 31, 0x116B38u);
    ctx->pc = 0x116B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B30u;
    // 0x116b34: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x116B30u, 0x116B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B38u;
label_116b38:
    // 0x116b38: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x116b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116b3c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x116b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x116b40: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116b44: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x116b48: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x116b4c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x116b50: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116b54: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x116B54u;
    SET_GPR_U32(ctx, 31, 0x116B5Cu);
    ctx->pc = 0x116B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B54u;
    // 0x116b58: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x116B5Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x116B5Cu) { return; }
    ctx->pc = 0x116B5Cu;
label_116b5c:
    // 0x116b5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b64: 0xc046542  jal         func_119508
    ctx->pc = 0x116B64u;
    SET_GPR_U32(ctx, 31, 0x116B6Cu);
    ctx->pc = 0x116B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B64u;
    // 0x116b68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116B64u, 0x116B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B6Cu;
label_116b6c:
    // 0x116b6c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x116b70u;
}
